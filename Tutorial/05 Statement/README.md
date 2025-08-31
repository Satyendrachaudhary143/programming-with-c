# 📘 Statements in C Language

## 🧩 What is a Statement?

In C programming, a **statement** is the smallest standalone unit of execution. It represents an instruction that the compiler can execute, such as assigning a value, calling a function, or controlling flow.

Every statement in C typically ends with a **semicolon (`;`)**.

---

## 🛠️ Types of Statements

### 1. **Expression Statements**
These perform computations or assignments.

```c
x = 5;
y = x + 2;
printf("Hello, World!");
```




### 2. Compound Statements (Block)
A group of statements enclosed in {}. Used in functions, loops, and conditionals.
```c
{
    int a = 10;
    a++;
    printf("%d", a);
}
```

### 3. Control Flow Statements
Used to alter the flow of execution.
- **Conditional**: `if`, `else`, `switch`
- **Loops**: `for`,`while`, `do-while`
- **Jump**: `break`, `continue`, `return`, `goto`
```c
if (x > 0) {
    printf("Positive");
} else {
    printf("Non-positive");
}
```


### 4. Function Call Statements
Invoking a function is also a statement.
```c
displayMessage();
```



🧠 Notes
- Statements are executed sequentially unless control flow alters the order.
- A null statement is just a semicolon (;) and does nothing.
```c
;

```


### ✅ Example Program
```c
#include <stdio.h>

int main() {
    int x = 10;           // Expression statement
    if (x > 5) {          // Control statement
        printf("x is big\n");  // Function call
    }
    return 0;             // Return statement
}

```

