# Loops in C

## What is a Loop?
A **loop** in C is a programming construct that allows a block of code to be executed **repeatedly** as long as a condition is true.  
Instead of writing the same code multiple times, loops make the program **shorter, efficient, and easy to maintain**.

---

## Why Do We Need Loops?
- To **avoid repetition** of code.  
- To perform **iterative tasks** (like printing numbers, calculating sums, etc.).  
- To work with **arrays, strings, and data structures**.  
- To reduce **program length** and improve readability.  
- Example: Instead of writing 100 `printf` statements, we can use a loop.  

---

## Types of Loops in C
C provides **3 main types of loops**:

### 1. While Loop
- **Entry-controlled loop**: Condition is checked first, then the loop body executes.  
- If the condition is false at the beginning, the body may not execute at all.  

**Syntax:**
```c
while (condition) {
    // statements
}
```
### Example 
```c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 5) {
        printf("%d\n", i);
        i++;
    }
    return 0;
}
```
### 2. Do-While Loop

- Exit-controlled loop: The loop body executes at least once, then the condition is checked.

- Useful when we want the loop to run at least one time.
### Syntax :
```c
do {
    // statements
} while (condition);
```
### Example :
```c
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("%d\n", i);
        i++;
    } while (i <= 5);
    return 0;
}
```
### 3. For Loop

- Entry-controlled loop: Most commonly used.

- Best when the number of iterations is known in advance.

- Combines initialization, condition-checking, and update in one line.

### Syntax:
```c
for (initialization; condition; update) {
    // statements
}
```
### Example :
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```
### Special Loop: Nested Loops

- A loop inside another loop is called a nested loop.

- Used in problems like matrix operations, pattern printing, etc.

### Example:
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 3; j++) {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
```
### Key Points

- while → condition checked first (may not run at all).

- do-while → runs at least once (condition checked later).

- for → used when the number of iterations is fixed.

- nested loops → loops inside loops for complex problems.