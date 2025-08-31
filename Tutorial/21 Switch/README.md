# Switch Statement in C

## What is Switch Statement?
The **switch statement** in C is a **selection statement** that allows a variable or expression to be tested against a list of values (called **cases**).  
It is an alternative to using multiple `if-else-if` statements.

---

## Syntax
```c
switch(expression) {
    case value1:
        // code to execute if expression == value1
        break;
    case value2:
        // code to execute if expression == value2
        break;
    ...
    default:
        // code if no case matches
}
```
### Important Rules

- switch works with integer and character values (not float/double).

- Each case must be a constant or literal value.

- break is used to terminate a case, otherwise execution continues into the next case (fall-through).

- default is optional and executes if no case matches.
### Example 1 :  Day of Week
```c
#include <stdio.h>

int main() {
    int day = 4;

    switch(day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}

```
### Output 
```c
Thursday
```

### Example 2 : Calculator
```c
#include <stdio.h>

int main() {
    char op = '+';
    int a = 10, b = 5;

    switch(op) {
        case '+':
            printf("Result: %d\n", a + b);
            break;
        case '-':
            printf("Result: %d\n", a - b);
            break;
        case '*':
            printf("Result: %d\n", a * b);
            break;
        case '/':
            printf("Result: %d\n", a / b);
            break;
        default:
            printf("Invalid Operator\n");
    }

    return 0;
}

```

### Output 
```c
Result: 15
```
### Example 3: Fall-Through (Without Break)
```c
#include <stdio.h>

int main() {
    int num = 2;

    switch(num) {
        case 1:
            printf("One\n");
        case 2:
            printf("Two\n");
        case 3:
            printf("Three\n");
        default:
            printf("Default case\n");
    }

    return 0;
}

```
### Output 
```c
Two
Three
Default case

```
### Key Points

- switch is better than multiple if-else when checking one variable against many constant values.

- Use break to prevent fall-through.

- default executes if no case matches.

- Works with int, char, enum, but not float or string.