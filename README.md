Gemini Programming Language
The Gemini Programming Language is designed to demonstrate how interpreters work and how commands like input, print, and others function. This language is intended to be the easiest for providing examples and explanations.

Features
Basic Commands
Control Flow
Data Structures
Functions
Other Important Commands
Getting Started
Clone the Repository:

sh
Copy code
git clone https://github.com/yourusername/gemini.git
Compile the Interpreter:

sh
Copy code
cd gemini
gcc gemini.c -o gemini
Run the Interpreter:

sh
Copy code
./gemini
Execute a Script:

sh
Copy code
./gemini your_script.gemini
Commands
Basic Commands
print()

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
input()

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
type()

Description: Returns the data type of an object.
Usage:
text
Copy code
type(variable_name)
Example:
text
Copy code
print(type(123))  // Outputs: int
len()

Description: Returns the length of an object (e.g., string, list).
Usage:
text
Copy code
len(sequence)
Example:
text
Copy code
print(len("Hello"))  // Outputs: 5
range()

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
if...elif...else

Description: Conditional execution of code.
Usage:
text
Copy code
if condition:
    // code
elif condition:
    // code
else:
    // code
Example:
text
Copy code
if age >= 18:
    print("You are an adult.")
else:
    print("You are a minor.")
for

Description: Iterates over a sequence (list, string, etc.).
Usage:
text
Copy code
for item in sequence:
    // code
Example:
text
Copy code
for i in [1, 2, 3]:
    print(i)
while

Description: Repeats code while a condition is true.
Usage:
text
Copy code
while condition:
    // code
Example:
text
Copy code
count = 0
while count < 5:
    print(count)
    count += 1
break

Description: Exits a loop prematurely.
Usage:
text
Copy code
for item in sequence:
    if condition:
        break
Example:
text
Copy code
for i in range(10):
    if i == 5:
        break
    print(i)
continue

Description: Skips the current iteration of a loop.
Usage:
text
Copy code
for item in sequence:
    if condition:
        continue
    // code
Example:
text
Copy code
for i in range(10):
    if i % 2 == 0:
        continue
    print(i)
pass

Description: Placeholder statement, does nothing.
Usage:
text
Copy code
if condition:
    pass
Example:
text
Copy code
def function():
    pass
Data Structures
list()

Description: Creates a mutable list.
Usage:
text
Copy code
list = [item1, item2, item3]
Example:
text
Copy code
my_list = [1, 2, 3]
tuple()

Description: Creates an immutable tuple.
Usage:
text
Copy code
tuple = (item1, item2, item3)
Example:
text
Copy code
my_tuple = (1, 2, 3)
dict()

Description: Creates a dictionary (key-value pairs).
Usage:
text
Copy code
dict = {key1: value1, key2: value2}
Example:
text
Copy code
my_dict = {"name": "Alice", "age": 30}
set()

Description: Creates a set (unique elements).
Usage:
text
Copy code
set = {item1, item2, item3}
Example:
text
Copy code
my_set = {1, 2, 3}
append()

Description: Adds an element to the end of a list.
Usage:
text
Copy code
list.append(item)
Example:
text
Copy code
my_list = [1, 2, 3]
my_list.append(4)
pop()

Description: Removes and returns the last element of a list.
Usage:
text
Copy code
list.pop()
Example:
text
Copy code
my_list = [1, 2, 3]
last_item = my_list.pop()
insert()

Description: Inserts an element at a specific position in a list.
Usage:
text
Copy code
list.insert(index, item)
Example:
text
Copy code
my_list = [1, 3]
my_list.insert(1, 2)
Functions
def

Description: Defines a function.
Usage:
text
Copy code
def function_name(parameters):
    // code
Example:
text
Copy code
def greet(name):
    print("Hello, " + name)
return

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
lambda

Description: Creates an anonymous function.
Usage:
text
Copy code
lambda parameters: expression
Example:
text
Copy code
square = lambda x: x * x
map()

Description: Applies a function to every item in an iterable.
Usage:
text
Copy code
map(function, iterable)
Example:
text
Copy code
numbers = [1, 2, 3]
squares = map(lambda x: x * x, numbers)
filter()

Description: Filters elements from an iterable based on a function.
Usage:
text
Copy code
filter(function, iterable)
Example:
text
Copy code
numbers = [1, 2, 3, 4]
evens = filter(lambda x: x % 2 == 0, numbers)
Other Important Commands
import

Description: Imports a module to access its functionality.
Usage:
text
Copy code
import module_name
Example:
text
Copy code
import math
help()

Description: Displays documentation for a specific function or module.
Usage:
text
Copy code
help(object)
Example:
text
Copy code
help(print)
dir()

Description: Lists all attributes and methods of an object.
Usage:
text
Copy code
dir(object)
Example:
text
Copy code
dir(math)
