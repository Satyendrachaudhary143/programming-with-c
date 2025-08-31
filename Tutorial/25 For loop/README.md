# For Loop in C

## What is For Loop?
The **for loop** in C is an **entry-controlled loop**.  
- It is used when the **number of iterations is known** in advance.  
- Combines initialization, condition, and update in a single line.  
- Makes code shorter and easier to understand.  

---

## Syntax
```c
for (initialization; condition; update) {
    // statements
}
```
### Explanation:

1. Initialization → Executes once before the loop starts (e.g., int i = 1;).

2. Condition → Checked before each iteration. If true → body runs, else loop stops.

3. Update → Executed after each iteration (e.g., i++).

### Flowchart :
```c
Initialization
      │
      ▼
   Check Condition ── False ──► Exit
      │
   True │
      ▼
   Loop Body
      │
      ▼
    Update
      │
      └────► Repeat
```
### Example 1: Print Numbers 1 to 5 :
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 5; i++) {
        printf("%d\n", i);
    }
    return 0;
}
```

### Output :
```c
1
2
3
4
5
````
### Example 2: Sum of First 10 Natural Numbers
```c
#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 10; i++) {
        sum += i;
    }

    printf("Sum = %d\n", sum);
    return 0;
}
```
### Output :
```c
Sum = 55
```
### Example 3: Multiplication Table of 5 :
```c
#include <stdio.h>

int main() {
    for (int i = 1; i <= 10; i++) {
        printf("5 x %d = %d\n", i, 5 * i);
    }
    return 0;
}
```
### Output :
```c
5 x 1 = 5
5 x 2 = 10
5 x 3 = 15
...
5 x 10 = 50
```
### Example 4: Infinite For Loop :
```c
#include <stdio.h>

int main() {
    for (;;) {  // No condition -> infinite loop
        printf("This will run forever!\n");
        break; // Use break to stop manually
    }
    return 0;
}
```

### Key Points

- for loop is best when iterations are fixed.

- Initialization, condition, and update can be skipped, but semicolons must remain.

- Can create infinite loops if condition is missing/always true.

- Nested for loops are often used in matrix operations and pattern printing.