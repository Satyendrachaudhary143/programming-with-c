# If-Else in C

## What is If-Else?

The **if-else statement** in C is used for **decision making**.\
It allows the program to execute certain code **only if a condition is
true**, and optionally execute another block of code if the condition is
false.

------------------------------------------------------------------------

## Syntax

``` c
if (condition) {
    // Code to execute if condition is true
}
else {
    // Code to execute if condition is false
}
```

------------------------------------------------------------------------

## Flowchart

            ┌───────────────┐
            │   Condition   │
            └───────┬───────┘
                    │
             True ──┘───► Execute if-block
                    │
             False ─┘───► Execute else-block

------------------------------------------------------------------------

## Example 1: Simple If-Else

``` c
#include <stdio.h>

int main() {
    int age = 20;

    if (age >= 18) {
        printf("You are eligible to vote.\n");
    }
    else {
        printf("You are not eligible to vote.\n");
    }

    return 0;
}
```

### Output

    You are eligible to vote.

------------------------------------------------------------------------

## Example 2: If-Else with Numbers

``` c
#include <stdio.h>

int main() {
    int number = 5;

    if (number % 2 == 0) {
        printf("The number is even.\n");
    }
    else {
        printf("The number is odd.\n");
    }

    return 0;
}
```

### Output

    The number is odd.

------------------------------------------------------------------------

## Example 3: If-Else Ladder

``` c
#include <stdio.h>

int main() {
    int marks = 75;

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

## Example 4: Nested If-Else

A **nested if-else** means using an `if-else` statement **inside another
if-else**.\
It is useful when we need to check multiple levels of conditions.

``` c
#include <stdio.h>

int main() {
    int num = -5;

    if (num >= 0) {
        if (num == 0) {
            printf("The number is Zero.\n");
        }
        else {
            printf("The number is Positive.\n");
        }
    }
    else {
        printf("The number is Negative.\n");
    }

    return 0;
}
```

### Output

    The number is Negative.

------------------------------------------------------------------------

## Key Points

-   `if` checks the condition.\
-   `else` executes if the condition is **false**.\
-   You can use **if-else ladder** for multiple conditions.\
-   **Nested if-else** allows testing multiple conditions in levels.\
-   Use `{ }` (curly braces) to group multiple statements.
