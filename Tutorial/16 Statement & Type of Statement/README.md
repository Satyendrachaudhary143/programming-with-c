# Statements in C

A **statement** in C is the smallest executable unit of a program.  
It tells the compiler to perform a specific action (like assignment, decision-making, looping, etc.).

Every statement in C **ends with a semicolon (;)** (except compound statements and control structures like `if`, `for`, etc.).

Example:
```c
int x = 10;   // Statement
x = x + 5;    // Statement
```

---

## Types of Statements in C

C statements can be classified as follows:

---

### 1. Expression Statement
An expression followed by a semicolon.
```c
int x = 5;    // Assignment statement
x++;          // Increment statement
```

---

### 2. Compound Statement (Block)
A group of statements enclosed within `{ }`.  
They are treated as a single statement.
```c
{
    int a = 5;
    int b = 10;
    printf("%d", a + b);
}
```

---

### 3. Control Statements
Control the flow of execution of a program.  
They are divided into 3 categories:

#### (a) Conditional Statements
Used for decision-making.
- `if`
- `if-else`
- `if-else if`
- `nested if`
- `switch`

Example:
```c
if (x > 0)
    printf("Positive");
else
    printf("Negative");
```

---

#### (b) Looping Statements (Iteration)
Used for repetition of code.
- `for`
- `while`
- `do-while`

Example:
```c
for(int i = 1; i <= 5; i++)
    printf("%d ", i);
```

---

#### (c) Jump Statements
Used to change the flow of execution.
- `break`
- `continue`
- `goto`
- `return`

Example:
```c
for(int i = 1; i <= 5; i++) {
    if(i == 3) break;   // Exit loop
    printf("%d ", i);
}
```

---

## Summary

- **Expression Statement** → Executes a single expression.  
- **Compound Statement** → Group of statements as one block.  
- **Control Statements** → Controls execution flow.  
  - Conditional (`if`, `switch`)  
  - Looping (`for`, `while`, `do-while`)  
  - Jump (`break`, `continue`, `goto`, `return`)  

---
