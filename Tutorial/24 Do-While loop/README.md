# Do-While Loop in C

## What is Do-While Loop?
The **do-while loop** in C is an **exit-controlled loop**.  
- The loop body executes **at least once**, even if the condition is false initially.  
- After executing the body, the condition is checked.  
- If the condition is true, the loop repeats; otherwise, it stops.  

---

## Syntax
```c
do {
    // statements to be executed
} while (condition);
```
### Flowchart
     ┌──────────────┐
     │  Statements  │
     └───────┬──────┘
             │
        Check Condition
             │
     True ───┘──► Repeat
             │
     False ──┘──► Exit

### Example Print Number 1 to 5 :
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
### Output :
```c
1
2
3
4
5
```
### Example 2: Run Even If Condition is False :
```c
#include <stdio.h>

int main() {
    int i = 10;

    do {
        printf("This will run once even though condition is false.\n");
        i++;
    } while (i < 5);

    return 0;
}
```
### Output :
```c
This will run once even though condition is false.
```
### Example 3: Sum of Digits :
```c
#include <stdio.h>

int main() {
    int num = 123, sum = 0;

    do {
        sum += num % 10;
        num /= 10;
    } while (num > 0);

    printf("Sum of digits = %d\n", sum);
    return 0;
}
```
### Output :
```c
Sum of digits = 6
```
### Key Points

- do-while loop executes at least once regardless of the condition.

- Useful when the body must run first (like menus, input validation, etc.).

- Ends with a semicolon (;) after while(condition).

- Be careful with condition updates to avoid infinite loops.