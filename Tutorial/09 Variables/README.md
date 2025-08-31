## 🧠 Variables in C
### 📌 What is a Variable?
A variable in C is a named storage location in memory that holds a value which can be modified during program execution.
Think of it as a labeled box where you can store data like numbers, characters, or more complex types.

### 🛠️ Syntax
```c
data_type variable_name;
```
### You can also assign a value at the time of declaration:
```c
data_type variable_name = value;
```
### 🧪 Example
```c
int age = 25;
float temperature = 36.6;
char grade = 'A';
```
## 🧮 Declaring Multiple Variables in C
### 📌 Syntax
You can declare multiple variables of the same type in a single line by separating them with commas:

```c
int a, b, c;
float x, y;
char ch1, ch2;
```
**You can also initialize them during declaration:**
```c
int a = 10, b = 20, c = 30;
float x = 1.5, y = 2.5;
char ch1 = 'A', ch2 = 'B';
```
` ✅ Tip: Keep variable names meaningful to improve code readability. `

### 📚 Common Data Types
| Data Type |Description  | Example | 
|----|----|----|
| int |Integer numbers  | int x = 10; | 
| float |Decimal numbers  | float pi = 3.14; | 
| char |Single character  | char ch = 'A'; | 
| double | Double-precision floa | double d = 3.14159; | 
| bool | Boolean (true/false) | bool flag = true; | 



### 🧭 Rules for Naming Variables
- Must begin with a letter (A–Z or a–z) or underscore _
- Can contain letters, digits, and underscores
- Cannot use C keywords (e.g., int, return)
- Case-sensitive (Age and age are different)

### 🔄 Variable Initialization vs. Declaration
|Term  | Meaning | 
|---------|-------------|
|  Declaration|Tells the compiler about the variable  | 
|Initialization  |Assigns an initial value to the variable  | 



### 🧼 Best Practices
- Use meaningful names (score, totalAmount)
- Initialize variables before use
- Keep scope in mind (local vs global)

## 🔄 How to Change a Variable’s Value in C
### 🧪 Basic Reassignment
Once a variable is declared, you can assign a new value using the assignment operator = :
```c
int score = 50;   // Initial value
score = 75;       // New value assigned
```
### 🔁 Using Arithmetic Operations
You can also update a variable based on its current value:
```c
score = score + 10;   // Adds 10 to current score
score += 5;           // Shortcut for score = score + 5
score *= 2;           // Doubles the score
```

### 🧠 Example in Context
```c
#include <stdio.h>

int main() {
    int age = 20;
    printf("Initial age: %d\n", age);

    age = 25;  // Changing the value
    printf("Updated age: %d\n", age);

    age += 1;  // Incrementing
    printf("After birthday: %d\n", age);

    return 0;
}
```
### 🧭 Why This Matters
Changing variable values lets your program react, adapt, and store new information. Whether you're tracking scores, updating user input, or managing system states—this is how your code stays alive and dynamic.



## 🔍 Variable Scope
Scope defines the region of the program where a variable is accessible.
### 🧱 Types of Scope
| Scope Type | Description | Example Context | 
|----|-----|---|
| Local | Declared inside a function/block; accessible only within that block | main() | 
| Global | Declared outside all functions; accessible throughout the program | main() | 
| Function | Parameters passed to functions; accessible only inside that function | void greet(int age) | 
|  File (Static)| Limited to the file where it's declared; prevents external linkage | static int count = 0; | 


### 🧪 Example
```c
int globalVar = 10; // Global scope

void demo() {
    int localVar = 5; // Local scope
    printf("%d", localVar);
}

```


## 🧠 Why Variables Are Important
Variables are fundamental building blocks in any programming language. Here's why they matter:
### 🔹 1. Data Storage
They allow you to store and manipulate data during program execution.
```c
int score = 95;
```
### 🔹 2. Dynamic Behavior
Variables make programs flexible and interactive by allowing changes in values.
```c
score = score + 5; // Updates score
```


### 🔹 3. Code Reusability
You can reuse variables in loops, functions, and calculations.
```c
for (int i = 0; i < 5; i++) {
    printf("%d\n", i);
}
```


### 🔹 4. Memory Management
Variables help manage memory efficiently by allocating space based on data type.
### 🔹 5. Communication Between Functions
Variables (especially parameters) allow functions to exchange data.
```c
void greet(char name[]) {
    printf("Hello, %s!", name);
}
```


### 🧼 Best Practices
- Use descriptive names (totalMarks, userAge)
- Initialize variables before use
- Group related variables together for clarity
- Avoid global variables unless necessary


