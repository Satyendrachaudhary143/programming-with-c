# Expressions in C

An **expression** in C is a combination of **constants, variables, operators, and function calls** that is evaluated to produce a value.  

Example:
```c
int x = 5 + 3 * 2; // Expression evaluates to 11
```

---

## Types of Expressions in C

### 1. Constant Expression
Contains only constants.
```c
int x = 10 + 20; // 30
```

---

### 2. Arithmetic Expression
Uses arithmetic operators (`+`, `-`, `*`, `/`, `%`).
```c
int x = 10, y = 3;
int result = x / y; // 3
```

---

### 3. Relational Expression
Uses relational operators (`<`, `<=`, `>`, `>=`, `==`, `!=`).
```c
int a = 5, b = 10;
int check = (a < b); // 1 (true)
```

---

### 4. Logical Expression
Uses logical operators (`&&`, `||`, `!`).
```c
int x = 1, y = 0;
int result = (x && y); // 0
```

---

### 5. Bitwise Expression
Uses bitwise operators (`&`, `|`, `^`, `~`, `<<`, `>>`).
```c
int a = 5, b = 3;
int result = a & b; // 1 (0101 & 0011 = 0001)
```

---

### 6. Assignment Expression
Uses assignment operators (`=`, `+=`, `-=`, etc.).
```c
int x = 10;
x += 5;  // x = 15
```

---

### 7. Conditional Expression (Ternary Operator)
Shorthand for `if-else`.
```c
int a = 10, b = 20;
int max = (a > b) ? a : b;  // 20
```

---

### 8. Comma Expression
Evaluates multiple expressions, result is the last one.
```c
int x = (1, 2, 3); // x = 3
```

---

### 9. Pointer Expression
Uses pointer operators (`*`, `&`).
```c
int x = 10;
int *ptr = &x;    // address of x
int y = *ptr;     // value of x (10)
```

---

### 10. Function Call Expression
A function call itself is an expression.
```c
int sum(int a, int b) {
    return a + b;
}

int result = sum(5, 7); // 12
```

---

## Example Program (Mixed Expressions)
```c
#include <stdio.h>
int main() {
    int a = 5, b = 10, c;

    c = a + b * 2;             // Arithmetic
    printf("Arithmetic: %d\n", c);

    printf("Relational: %d\n", (a < b)); // 1

    printf("Logical: %d\n", (a && b));   // 1

    printf("Bitwise: %d\n", (a & b));    // 0

    c = (a > b) ? a : b;      // Conditional
    printf("Conditional: %d\n", c);

    return 0;
}
```
