# While Loop in C

## What is While Loop?
The **while loop** in C is an **entry-controlled loop**.  
- It checks the condition **before** executing the loop body.  
- If the condition is true, the statements inside the loop run.  
- If the condition is false, the loop stops immediately.  

---

## Syntax
```c
while (condition) {
    // statements to be executed
}
```

### Flowchart
        ┌───────────────┐
        │   Condition   │
        └───────┬───────┘
                │
        True ───┘──► Execute statements
                │
        False ──┘──► Exit loop

### Example 1: Print Numbers 1 to 5
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
### Output 
```c
1
2
3
4
5
```
### Example 2: Sum of Natural Numbers
```c
#include <stdio.h>

int main() {
    int n = 5, i = 1, sum = 0;

    while (i <= n) {
        sum += i;
        i++;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
```
### Output 
```c
Sum = 15
```
### Example 3: Infinite Loop

If the condition never becomes false, the loop will run forever.
```c
#include <stdio.h>

int main() {
    int i = 1;

    while (i <= 5) {
        printf("Hello\n");
        // Missing i++ will cause an infinite loop
    }

    return 0;
}
```
### Key Points

- The condition is checked first (entry-controlled loop).

- If condition is false initially, the loop body may never execute.

- Be careful to update the loop variable to avoid infinite loops.

- Commonly used when the number of iterations is not fixed.