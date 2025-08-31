# Selection Statements in C

## What are Selection Statements?

**Selection statements** are used to **make decisions** in a program.\
They allow the program to choose **different paths of execution** based
on conditions.

In C, the main **selection statements** are: 
1. `if` statement
2. `if-else` statement
3. `if-else if` ladder
4. `nested if-else`
5. `switch` statement

------------------------------------------------------------------------

## 1. if Statement

Executes a block of code **only if the condition is true**.

``` c
#include <stdio.h>

int main() {
    int x = 10;

    if (x > 0) {
        printf("x is positive.\n");
    }

    return 0;
}
```

### Output

    x is positive.

------------------------------------------------------------------------

## 2. if-else Statement

Executes one block if the condition is true, otherwise executes the
`else` block.

``` c
#include <stdio.h>

int main() {
    int age = 16;

    if (age >= 18) {
        printf("Eligible to vote.\n");
    }
    else {
        printf("Not eligible to vote.\n");
    }

    return 0;
}
```

### Output

    Not eligible to vote.

------------------------------------------------------------------------

## 3. if-else if Ladder

Used to check **multiple conditions sequentially**.

``` c
#include <stdio.h>

int main() {
    int marks = 82;

    if (marks >= 90) {
        printf("Grade: A\n");
    }
    else if (marks >= 75) {
        printf("Grade: B\n");
    }
    else if (marks >= 50) {
        printf("Grade: C\n");
    }
    else {
        printf("Grade: Fail\n");
    }

    return 0;
}
```

### Output

    Grade: B

------------------------------------------------------------------------

## 4. Nested if-else

An `if-else` statement **inside another if-else**.

``` c
#include <stdio.h>

int main() {
    int num = 0;

    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero.\n");
        } else {
            printf("The number is Positive.\n");
        }
    } else {
        printf("The number is Negative.\n");
    }

    return 0;
}
```

### Output

    The number is Zero.

------------------------------------------------------------------------

## 5. switch Statement

The **switch statement** is used to execute **one case out of many**.

### Syntax

``` c
switch(expression) {
    case value1:
        // code
        break;
    case value2:
        // code
        break;
    ...
    default:
        // code if no case matches
}
```

### Example

``` c
#include <stdio.h>

int main() {
    int day = 3;

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

    Wednesday

------------------------------------------------------------------------

## Key Points

-   **if-else** is used for simple decision-making.\
-   **if-else if ladder** handles multiple conditions.\
-   **nested if-else** is used for hierarchical decisions.\
-   **switch** is better for multiple fixed choices (like menus, days of
    week, etc.).
