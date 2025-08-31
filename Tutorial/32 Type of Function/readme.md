## 🔧 Function Structure in C
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

### 🔹 1. return_type
### 📖 Definition:
Specifies the data type of the value the function will return to the caller.
### ✅ Example:
```c
int getAge() {
    return 25;
}
```
- int is the return type.
- This function returns an integer value 25.



### 🔹 2. function_name
### 📖 Definition:
The identifier used to call the function. It should be meaningful and follow naming rules.
### ✅ Example:
```c
void greetUser() {
    printf("Hello, Satyendra!\n");
}
```

- greetUser is the function name.
- You call it using greetUser(); in main().


### 🔹 3. parameter_list
### 📖 Definition:
A list of input values (arguments) passed to the function. Can be empty if no input is needed.
### ✅ Example:
```c
float calculateArea(float radius) {
    return 3.14 * radius * radius;
}
```

- float radius is the parameter.
- You pass a value like calculateArea(5.0);

### 🔹 4. function_body
### 📖 Definition:
The block of code that executes when the function is called. It contains logic, statements, and optionally a return.
### ✅ Example:

```c
int square(int num) {
    int result = num * num;
    return result;
}
```
- The function body includes:
  - int result = num * num;
  - return result;

## 🧩 Full Example with All Components :
```c
#include <stdio.h>

// Function declaration and definition
int add(int a, int b) {             // return_type: int
    int sum = a + b;                // function_body
    return sum;                     // return statement
}

int main() {
    int result = add(10, 20);       // function_name: add, parameter_list: (10, 20)
    printf("Sum: %d\n", result);
    return 0;
}

```



# 🧩 Types of Functions in C

Functions in C can be broadly categorized as **Library Functions** (predefined) and **User-Defined Functions** (created by the programmer).  
Additionally, user-defined functions can be classified based on whether they take **arguments** and/or **return values**.

---

## 1. Library Functions
- Predefined in C libraries
- Already implemented and ready to use
- Save development time

### ✅ Example: `printf()`
```c
#include <stdio.h>

int main() {
    printf("Hello, World! This is a library function.\n");
    return 0;
}
```
📌 Here, `printf()` is a library function from **stdio.h**, used to print text on the screen.

---

## 2. User-Defined Functions

### 🔸 Types of User-Defined Functions (Based on Arguments & Return Type)

---

### 2.1 **No Arguments, No Return**
- Function does not take any input
- Function does not return any value

```c
#include <stdio.h>

void greet() {
    printf("Hello! Welcome to C programming.\n");
}

int main() {
    greet(); // Function call
    return 0;
}
```

📌 `greet()` simply displays a message. It **doesn’t take input** and **doesn’t return output**.

---

### 2.2 **No Arguments, With Return**
- Function does not take any input
- Function returns a value

```c
#include <stdio.h>

int getNumber() {
    return 10;  // returning a constant number
}

int main() {
    int num = getNumber(); // Function call
    printf("Number returned: %d\n", num);
    return 0;
}
```

📌 `getNumber()` returns a value (10) but **does not take any input**.

---

### 2.3 **With Arguments, No Return**
- Function takes input
- Function does not return a value

```c
#include <stdio.h>

void display(int x) {
    printf("The number is: %d\n", x);
}

int main() {
    display(25); // Passing argument
    return 0;
}
```

📌 `display()` takes an integer input and **prints it**, but **does not return any value**.

---

### 2.4 **With Arguments, With Return**
- Function takes input
- Function returns a value

```c
#include <stdio.h>

int multiply(int a, int b) {
    return a * b; // return product of a and b
}

int main() {
    int result = multiply(5, 4); // Passing arguments
    printf("Multiplication result: %d\n", result);
    return 0;
}
```

📌 `multiply()` takes two arguments and returns their product.

---

# ✅ Summary Table

| **Type** | **Description** | **Example Function** |
|----------|-----------------|-----------------------|
| No arguments, No return | Performs task, no input/output | `void greet()` |
| No arguments, With return | No input, returns value | `int getNumber()` |
| With arguments, No return | Takes input, no output | `void display(int x)` |
| With arguments, With return | Takes input, returns value | `int multiply(int a, int b)` |
| Library Function | Predefined in C libraries | `printf()` |

---
