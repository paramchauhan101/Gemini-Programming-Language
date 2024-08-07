#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE_LENGTH 1024

// Token types
typedef enum {
    TOKEN_PYTHON,
    TOKEN_BATCH,
    TOKEN_COMMAND,
    TOKEN_EOF,
    TOKEN_INVALID
} TokenType;

// Token structure
typedef struct {
    TokenType type;
    char *value;
} Token;

// Lexer functions
Token get_next_token(FILE *file) {
    static char line[MAX_LINE_LENGTH];
    static int in_python_block = 0;
    
    if (fgets(line, sizeof(line), file) == NULL) {
        return (Token){TOKEN_EOF, NULL};
    }
    
    // Handle triple quotes for Python code blocks
    if (line[0] == '\"' && line[1] == '\"' && line[2] == '\"') {
        in_python_block = !in_python_block;
        return (Token){TOKEN_PYTHON, strdup(line)};
    }
    
    if (in_python_block) {
        return (Token){TOKEN_PYTHON, strdup(line)};
    }
    
    // Handle batch commands
    if (line[0] == '@') {
        return (Token){TOKEN_BATCH, strdup(line)};
    }
    
    // Handle Python-like commands
    if (strstr(line, "print(") || strstr(line, "input(")) {
        return (Token){TOKEN_COMMAND, strdup(line)};
    }
    
    return (Token){TOKEN_INVALID, strdup(line)};
}

// Function to trim whitespace from a string
char* trim_whitespace(char* str) {
    while (isspace(*str)) str++;
    if (*str == 0) return str;
    char* end = str + strlen(str) - 1;
    while (end > str && isspace(*end)) end--;
    *(end + 1) = '\0';
    return str;
}

// Interpreter functions
void execute_python(const char *code) {
    printf("Executing Python code block:\n%s", code);
}

void execute_batch(const char *command) {
    char command_buffer[MAX_LINE_LENGTH];
    snprintf(command_buffer, sizeof(command_buffer), "%s", command + 1); // Skip '@'
    system(command_buffer);
}

void execute_command(const char *command) {
    char buffer[MAX_LINE_LENGTH];
    
    // Check for `print()` command
    if (strstr(command, "print(")) {
        char *start = strchr(command, '(') + 1;
        char *end = strchr(command, ')');
        if (start && end && start < end) {
            *end = '\0'; // Null-terminate the string
            printf("%s\n", trim_whitespace(start)); // Print content between parentheses
        }
    }
    // Check for `input()` command
    else if (strstr(command, "input(")) {
        char *prompt_start = strchr(command, '(') + 1;
        char *prompt_end = strchr(command, ')');
        if (prompt_start && prompt_end && prompt_start < prompt_end) {
            *prompt_end = '\0'; // Null-terminate the string
            printf("%s", trim_whitespace(prompt_start)); // Print prompt
            char input[MAX_LINE_LENGTH];
            fgets(input, sizeof(input), stdin);
            printf("You entered: %s", input);
        }
    }
    // Check for custom interaction
    else if (strstr(command, "order_coffee")) {
        char name[MAX_LINE_LENGTH];
        printf("What is your name?\n");
        fgets(name, sizeof(name), stdin);
        char trimmed_name[MAX_LINE_LENGTH];
        strncpy(trimmed_name, trim_whitespace(name), sizeof(trimmed_name));
        printf("Hello, %s! What coffee would you like to order?\n", trimmed_name);
        
        char coffee[MAX_LINE_LENGTH];
        fgets(coffee, sizeof(coffee), stdin);
        printf("Ordering the coffee: %s for %s\n", trim_whitespace(coffee), trimmed_name);
    }
    else {
        printf("Unknown command: %s", command);
    }
}

// Main function
int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <script_file>\n", argv[0]);
        return 1;
    }

    FILE *file = fopen(argv[1], "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }
    
    Token token;
    while ((token = get_next_token(file)).type != TOKEN_EOF) {
        if (token.type == TOKEN_INVALID) {
            fprintf(stderr, "Invalid token: %s", token.value);
            free(token.value);
            continue;
        }

        if (token.type == TOKEN_PYTHON) {
            execute_python(token.value);
        } else if (token.type == TOKEN_BATCH) {
            execute_batch(token.value);
        } else if (token.type == TOKEN_COMMAND) {
            execute_command(token.value);
        }
        
        free(token.value);
    }
    
    fclose(file);
    return 0;
}
