# Gemini Programming Language

The **Gemini Programming Language** is designed to demonstrate how interpreters work and how commands like `input`, `print`, and others function. This language is intended to be the easiest for providing examples and explanations.

## Features

- **Basic Commands**
- **Control Flow**
- **Data Structures**
- **Functions**
- **Other Important Commands**

## Getting Started

1. **Clone the Repository**

   ```sh
   git clone https://github.com/paramchauhan101/Gemini-Programming-Language.git
Compile the Interpreter

sh
Copy code
cd Gemini-Programming-Language
gcc gemini.c -o gemini
Run the Interpreter

sh
Copy code
./gemini
Execute a Script

sh
Copy code
./gemini your_script.gemini
Commands
Basic Commands
# print()

Description: Outputs text or variables to the console.
Usage:
text
Copy code
print("Hello, World!")
print(variable_name)
Example:
text
Copy code
print("Welcome to Gemini!")
# input()

Description: Takes user input from the console.
Usage:
text
Copy code
input("Enter your name:")
Example:
text
Copy code
name = input("What is your name?")
print("Hello, " + name)
# type()

Description: Returns the data type of an object.
Usage:
text
Copy code
type(variable_name)
Example:
text
Copy code
print(type(123))  // Outputs: int
# len()

Description: Returns the length of an object (e.g., string, list).
Usage:
text
Copy code
len(sequence)
Example:
text
Copy code
print(len("Hello"))  // Outputs: 5
# range()

Description: Generates a sequence of numbers.
Usage:
text
Copy code
range(start, end, step)
Example:
text
Copy code
for i in range(1, 5):
    print(i)
Control Flow
# if...elif...else

Description: Conditional execution of code.
Usage:
text
Copy code
if condition:
    # code
elif another_condition:
    # code
else:
    # code
Example:
text
Copy code
if age >= 18:
    print("Adult")
else:
    print("Minor")
# for

Description: Iterates over a sequence (list, string, etc.).
Usage:
text
Copy code
for item in sequence:
    # code
Example:
text
Copy code
for i in range(5):
    print(i)
# while

Description: Repeats code while a condition is true.
Usage:
text
Copy code
while condition:
    # code
Example:
text
Copy code
count = 0
while count < 5:
    print(count)
    count += 1
# break

Description: Exits a loop prematurely.
Usage:
text
Copy code
while True:
    if condition:
        break
# continue

Description: Skips the current iteration of a loop.
Usage:
text
Copy code
for item in sequence:
    if condition:
        continue
    # code
# pass

Description: Placeholder statement, does nothing.
Usage:
text
Copy code
if condition:
    pass
Data Structures
# list()

Description: Creates a mutable list.
Usage:
text
Copy code
list = [item1, item2, item3]
Example:
text
Copy code
fruits = ["apple", "banana", "cherry"]
# tuple()

Description: Creates an immutable tuple.
Usage:
text
Copy code
tuple = (item1, item2, item3)
Example:
text
Copy code
coordinates = (10, 20)
# dict()

Description: Creates a dictionary (key-value pairs).
Usage:
text
Copy code
dict = {key1: value1, key2: value2}
Example:
text
Copy code
person = {"name": "Alice", "age": 30}
# set()

Description: Creates a set (unique elements).
Usage:
text
Copy code
set = {item1, item2, item3}
Example:
text
Copy code
unique_numbers = {1, 2, 3}
# append()

Description: Adds an element to the end of a list.
Usage:
text
Copy code
list.append(item)
Example:
text
Copy code
fruits.append("orange")
# pop()

Description: Removes and returns the last element of a list.
Usage:
text
Copy code
list.pop()
Example:
text
Copy code
last_fruit = fruits.pop()
# insert()

Description: Inserts an element at a specific position in a list.
Usage:
text
Copy code
list.insert(index, item)
Example:
text
Copy code
fruits.insert(1, "blueberry")
Functions
# def

Description: Defines a function.
Usage:
text
Copy code
def function_name(parameters):
    # code
Example:
text
Copy code
def greet(name):
    print("Hello, " + name)
# return

Description: Returns a value from a function.
Usage:
text
Copy code
return value
Example:
text
Copy code
def add(a, b):
    return a + b
# lambda

Description: Creates an anonymous function.
Usage:
text
Copy code
lambda arguments: expression
Example:
text
Copy code
add = lambda x, y: x + y
# map()

Description: Applies a function to every item in an iterable.
Usage:
text
Copy code
map(function, iterable)
Example:
text
Copy code
numbers = [1, 2, 3]
squared = map(lambda x: x**2, numbers)
# filter()

Description: Filters elements from an iterable based on a function.
Usage:
text
Copy code
filter(function, iterable)
Example:
text
Copy code
numbers = [1, 2, 3, 4]
even_numbers = filter(lambda x: x % 2 == 0, numbers)
Contribution
Feel free to contribute to the project by submitting issues, feature requests, and code improvements.
