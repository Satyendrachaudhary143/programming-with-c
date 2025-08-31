# Jumping Statements in C

In C programming, **Jumping Statements** are used to transfer control from one part of the program to another.  
They are helpful for altering the normal sequential flow of execution.

There are **four types of jumping statements** in C:
1. `goto`
2. `break`
3. `continue`
4. `return`

---

## 1. `goto` Statement

### Definition:
The **`goto`** statement is used to transfer control to a labeled statement in the same function.  
It allows jumping forward or backward in a program.

### Syntax:
```c
goto label;
...
label:
   // statements
```

### Example:
```c
#include <stdio.h>
int main() {
    int num = 3;
    if (num == 3) {
        goto jump;
    }
    printf("This line will be skipped.\n");
    
    jump:
    printf("Control is transferred here using goto.\n");
    return 0;
}
```

---

## 2. `break` Statement

### Definition:
The **`break`** statement is used to terminate the innermost loop (`for`, `while`, `do-while`) or a `switch` statement.  
It immediately transfers control to the statement after the loop or switch.

### Example:
```c
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            break;  // Loop terminates when i = 3
        }
        printf("%d\n", i);
    }
    return 0;
}
```

**Output:**
```
1
2
```

---

## 3. `continue` Statement

### Definition:
The **`continue`** statement skips the rest of the statements in the current iteration of the loop and transfers control to the next iteration.

### Example:
```c
#include <stdio.h>
int main() {
    for (int i = 1; i <= 5; i++) {
        if (i == 3) {
            continue;  // Skip printing when i = 3
        }
        printf("%d\n", i);
    }
    return 0;
}
```

**Output:**
```
1
2
4
5
```

---

## 4. `return` Statement

### Definition:
The **`return`** statement is used to terminate a function and optionally return a value to the calling function.

### Example 1 (without value):
```c
#include <stdio.h>
void display() {
    printf("Hello, World!\n");
    return;  // Function ends here
}
int main() {
    display();
    return 0;
}
```

### Example 2 (with value):
```c
#include <stdio.h>
int sum(int a, int b) {
    return a + b;  // Returning value to main
}
int main() {
    int result = sum(5, 7);
    printf("Sum = %d\n", result);
    return 0;
}
```

**Output:**
```
Sum = 12
```

---

# Summary

| Jump Statement | Purpose |
|----------------|---------|
| `goto`         | Transfers control to a labeled statement. |
| `break`        | Exits from the innermost loop or `switch`. |
| `continue`     | Skips current iteration and continues with the next. |
| `return`       | Ends function execution and optionally returns a value. |

---
