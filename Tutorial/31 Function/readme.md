## 📘 Functions in C Programming
### ✅ What is a Function?
A function in C is a reusable block of code that performs a specific task. It helps break down complex problems into smaller, manageable parts.
Think of it like a machine: you give it input, it processes something, and gives you output.


## 🎯 Why Use Functions?
- Modularity: Break code into logical sections.
- Reusability: Write once, use many times.
- Maintainability: Easier to debug and update.
- Readability: Cleaner and more organized code.

### 🧱 Structure of a Function
```c
return_type function_name(parameter_list) {
    // Function body
    // Optional return statement
}
```


### 🔍 Explanation:
- return_type: Data type of the value returned (e.g., int, float, void)
- function_name: Identifier used to call the function
- parameter_list: Input values (can be empty)
- function body: Code that executes when the function is called

### 🧪 Example: Add Two Numbers
```c
#include <stdio.h>

// Function declaration
int add(int a, int b);

// Main function
int main() {
    int result = add(5, 3);  // Function call
    printf("Sum: %d\n", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

```

### 🧩 Types of Functions in C
### 1. Library Functions
- Predefined in C libraries
- Examples: printf(), scanf(), sqrt()
### 2. User-Defined Functions
- Created by the programmer
### 🔸 Based on Arguments and Return Type:
| Type |Discription  |Example  |
|---|---|---| 
|No arguments, no return  | Performs task, no input/output | void greet() | 
|No arguments, with return  |No input, returns value  | int getNumber() | 
|With arguments, no return  |Takes input, no output  | void display(int x) | 
|With arguments, with return  |Takes input, returns value  | int multiply(int a, int b) | 



## 📌 Summary
Functions are the backbone of structured programming in C. They make your code cleaner, faster to debug, and easier to scale. Whether you're building a simple calculator or a backend system, mastering functions is essential.

