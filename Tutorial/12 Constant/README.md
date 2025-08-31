# 📘 Constants in C

In C programming, a **constant** is a value that **cannot be changed** during the execution of the program.  
It is a **fixed value** used directly in the code.  
These fixed values are also called **literals**.

---

## 🔹 Why Use Constants?

1. **Readability** – Makes code more understandable.  
2. **Maintainability** – If a constant is used multiple times, we only need to update it in one place.  
3. **Error Prevention** – Prevents accidental modification of values.  
4. **Performance** – Compiler optimizes constants effectively.

---

## 🔹 Difference Between Variable, Constant, and Literal

- **Variable** → A named memory location whose value can change.  
  ```c
  int a = 10;   // `a` is a variable, `10` is a literal constant
  a = 20;       // ✅ Allowed
  ```

- **Constant (symbolic constant)** → A named value that cannot change.  
  ```c
  const int max = 100;  // `max` is a constant
  max = 200;            // ❌ Error: cannot modify
  ```

- **Literal (constant literal)** → The fixed value written in the code (like `10`, `3.14`, `'A'`, `"Hello"`).  
  ```c
  int b = 015;     // `015` is an octal literal
  int c = 0x1A;    // `0x1A` is a hexadecimal literal
  ```

---

## 🔹 Types of Constants in C

1. **Integer Constants (Literals)**  
2. **Floating-point Constants**  
3. **Character Constants**  
4. **String Constants**  
5. **Enumeration Constants**  
6. **Symbolic Constants (`#define`, `const`)**

---

## 1. **Integer Constants (Literals)**

- Whole numbers without fractional parts.  
- Can be written in **decimal, octal, or hexadecimal** form.

### Example:
```c
int a = 10;       // Decimal constant literal
int b = 015;      // Octal constant literal (prefix 0)
int c = 0x1A;     // Hexadecimal constant literal (prefix 0x)
```

---

## 2. **Floating-point Constants**

- Numbers with a fractional part (real numbers).  
- Can be represented in **decimal** or **scientific notation**.

### Example:
```c
float pi = 3.14159;      // Decimal notation
float exp = 1.2e3;       // Scientific notation (1.2 × 10^3 = 1200)
```

---

## 3. **Character Constants**

- A single character enclosed in **single quotes `' '`.**  
- Stored as an **integer value (ASCII code)** internally.  

### Example:
```c
char grade = 'A';   // Character constant literal
char newline = '\n'; // Escape sequence constant
```

### Common Escape Sequences:

| Constant | Meaning |
|----------|---------|
| `\n` | New line |
| `\t` | Horizontal tab |
| `\\` | Backslash |
| `\'` | Single quote |
| `\"` | Double quote |
| `\0` | Null character |

---

## 4. **String Constants**

- A sequence of characters enclosed in **double quotes `" "`.**  
- Stored as an array of characters ending with `\0` (null character).  

### Example:
```c
char str[] = "Hello, World!";
```

---

## 5. **Enumeration Constants (`enum`)**

- A set of **named integer constants**.  
- Default values start from `0`, incrementing by `1`.

### Example:
```c
enum Days { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    enum Days today = WED;
    printf("Day number: %d", today); // Output: 2
}
```

---

## 6. **Symbolic Constants**

Symbolic constants represent constants using **names** instead of fixed values.  
They can be defined in **two ways**:

### (a) Using `#define` (Preprocessor Directive)

```c
#include <stdio.h>
#define PI 3.14159

int main() {
    float r = 5;
    float area = PI * r * r;
    printf("Area: %f", area);
    return 0;
}
```

### (b) Using `const` Keyword

```c
#include <stdio.h>
int main() {
    const int MAX = 100;
    // MAX = 200;  ❌ Error: Cannot modify a const variable
    printf("Maximum Value: %d", MAX);
    return 0;
}
```

---

## 🔹 Summary

- **Literals** → Fixed values like `10`, `3.14`, `'A'`, `"Hello"`.  
- **Variables** → Named memory locations (values can change).  
- **Constants** → Named values defined with `const` or `#define` (cannot change).  
- **Types of constants:** Integer, Floating-point, Character, String, Enumeration, Symbolic.  

👉 Using constants improves **readability, safety, and maintainability** of code.

---
