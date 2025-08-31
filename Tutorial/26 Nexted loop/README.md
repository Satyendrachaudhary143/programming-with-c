# Nested Loops in C

## What is Nested Loop?
A **nested loop** means having **one loop inside another loop**.  
- The **inner loop** runs completely for **each iteration of the outer loop**.  
- Commonly used in **patterns, matrix operations, and complex iterations**.

---

## Syntax
```c
for (initialization; condition; update) {
    // Outer loop body

    for (initialization; condition; update) {
        // Inner loop body
    }
}
```
`Nested loops can be of any type (for, while, do-while) and can be mixed together.`

### Flow of Execution

1. Outer loop runs first.

2. For each iteration of the outer loop → inner loop executes fully.

3. When the inner loop finishes, the outer loop continues to the next iteration.

### Example 1: Simple Nested For Loop :
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 2; j++) {
            printf("i = %d, j = %d\n", i, j);
        }
    }
    return 0;
}
```
### Output :
```c
i = 1, j = 1
i = 1, j = 2
i = 2, j = 1
i = 2, j = 2
i = 3, j = 1
i = 3, j = 2
```

### Example 2: Multiplication Table (1–3) :
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 10; j++) {
            printf("%d x %d = %d\n", i, j, i * j);
        }
        printf("\n");
    }
    return 0;
}
```
### Example 3: Pattern Printing (Right Triangle) :
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
```
### Output
```c
* 
* * 
* * * 
* * * * 
* * * * * 
```
### Example 4: Matrix Input and Display :
```c
#include <stdio.h>

int main() {
    int arr[2][3];

    // Input elements
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Display matrix
    printf("Matrix:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
```
### Key Points

- A loop inside another loop is called nested loop.

- Inner loop runs fully for each iteration of outer loop.

- Mostly used in patterns, tables, and 2D arrays.

- Avoid unnecessary nesting to reduce time complexity.