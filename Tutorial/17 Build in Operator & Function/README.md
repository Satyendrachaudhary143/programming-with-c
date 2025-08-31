# Built-in Operators and Functions in C

C provides many **built-in operators** and **standard library functions**.  
When we deal with **Console-based Input/Output (I/O)**, we commonly use functions like `printf()`, `scanf()`, `getchar()`, `putchar()`, `getch()` etc.

---

## 1. Console Based I/O in C

Console I/O means **input and output using the keyboard and screen**.

### Input Functions
- `scanf()` → Reads formatted input from the keyboard.
- `getchar()` → Reads a single character from the keyboard.
- `getch()` → Reads a single character directly (without pressing Enter, works with `<conio.h>`).

### Output Functions
- `printf()` → Displays formatted output on the screen.
- `putchar()` → Displays a single character on the screen.
- `puts()` → Displays a string followed by a newline.

---

## 2. Commonly Used I/O Functions

### (a) `printf()`
- Used to display output.
- Syntax:  
  ```c
  printf("format string", variables...);
  
### Example:
```c
int a = 10;
printf("Value of a = %d", a);
```

### (b) scanf()

- Used to take input from the user.

- Syntax:
```c
scanf("format string", &variables...);
```

### Example:
```c
int x;
scanf("%d", &x);
```
### (c) getchar()

- Reads a single character from keyboard (needs Enter).

### Example:
```c
char ch;
ch = getchar();
printf("You entered: %c", ch);
```

### (d) putchar()

- Prints a single character.

### Example:

char c = 'A';
```c
putchar(c);   // Output: A
```
### (e) getch()


- Reads a single character without pressing Enter.

- Works with <conio.h> (not standard in all compilers).

### Example:
```c
char c;
c = getch();
printf("You pressed: %c", c);
```

### 3. Concept of Header Files

- A header file contains declarations of functions and macros.

- Example:


- <stdio.h> → standard input/output functions (printf, scanf, etc.)

- <conio.h> → console I/O functions (getch, clrscr, etc.)

- <math.h> → mathematical functions (sqrt, pow, etc.)

### Example:
```c
#include <stdio.h>
#include <conio.h>
```

### 4. Preprocessor Directives

- Instructions to the compiler that begin with #.

- They are processed before compilation.

- Common directives:

  -  #include → include header files

  - #define → define macros

  - #ifdef, #endif → conditional compilation

### Example:
```c

#include <stdio.h>   // include header
#define PI 3.14      // macro definition

int main() {
    printf("Value of PI = %f", PI);
    return 0;
}
```

### 5. Example Program (Console I/O)
```c
#include <stdio.h>
#include <conio.h>

int main() {
    int age;
    char grade, name[20];

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    grade = getch();   // input single char without Enter

    printf("\nName: %s", name);
    printf("\nAge: %d", age);
    printf("\nGrade: %c", grade);

    return 0;
}

```

### Summary

- I/O Functions: printf, scanf, getchar, putchar, getch.

- Header files provide function declarations.

- Preprocessor directives control compilation.