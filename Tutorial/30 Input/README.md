# Input in C

In C programming, **input** refers to providing data to a program while it is running.  
The data is usually taken from the **keyboard** and stored in variables for processing.

---

## 1. Why Input is Needed?
- To make programs interactive.
- To allow users to provide values instead of hardcoding them.
- Example: A calculator needs numbers from the user.

---

## 2. Input Functions in C

C provides several built-in functions for input:

| Function   | Description |
|------------|-------------|
| `scanf()`  | Standard function for formatted input (commonly used). |
| `getchar()`| Reads a single character from keyboard. |
| `gets()`   | Reads a string until newline (⚠️ unsafe, deprecated). |
| `fgets()`  | Safer alternative to `gets()`. |

---

## 3. Using `scanf()` Function

### Syntax:
```c
scanf("format_specifier", &variable);
```

- `format_specifier`: tells the type of input (like `%d` for int, `%f` for float).
- `&variable`: address operator (`&`) is used to store the value in the variable.

---

### Example 1: Integer Input
```c
#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d", num);
    return 0;
}
```

---

### Example 2: Float Input
```c
#include <stdio.h>
int main() {
    float pi;
    printf("Enter a floating-point number: ");
    scanf("%f", &pi);
    printf("You entered: %.2f", pi);
    return 0;
}
```

---

## 4. Format Specifiers for `scanf`

| Data Type   | Format Specifier |
|-------------|------------------|
| `int`       | `%d` |
| `float`     | `%f` |
| `double`    | `%lf` |
| `char`      | `%c` |
| `string`    | `%s` |

---

## 5. Taking Multiple Inputs at Once

```c
#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Sum = %d", a + b);
    return 0;
}
```

---

## 6. Character Input using `getchar()`

`getchar()` reads a **single character** from input.

```c
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    ch = getchar();  
    printf("You entered: %c", ch);
    return 0;
}
```

---

## 7. String Input

### (a) Using `scanf("%s", var)`
```c
#include <stdio.h>
int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);  // Reads string until space
    printf("Hello, %s!", name);
    return 0;
}
```

⚠️ Limitation: It stops reading when a space is found.

---

### (b) Using `gets()` (⚠️ Deprecated, unsafe)
```c
#include <stdio.h>
int main() {
    char name[50];
    printf("Enter your full name: ");
    gets(name);   // Reads full line (unsafe)
    printf("Hello, %s!", name);
    return 0;
}
```

---

### (c) Using `fgets()` (Safe Alternative)
```c
#include <stdio.h>
int main() {
    char name[50];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);  // Safe string input
    printf("Hello, %s", name);
    return 0;
}
```

---

## 8. Advanced Input Example (Mix of Types)
```c
#include <stdio.h>
int main() {
    int age;
    float salary;
    char grade;

    printf("Enter your age, salary, and grade: ");
    scanf("%d %f %c", &age, &salary, &grade);

    printf("Age: %d\nSalary: %.2f\nGrade: %c", age, salary, grade);
    return 0;
}
```

---

# Summary

- **Input in C** allows the user to provide data at runtime.
- Common functions: `scanf()`, `getchar()`, `fgets()`.
- Use **format specifiers** (`%d`, `%f`, `%c`, `%s`) to read values.
- For **strings with spaces**, prefer `fgets()` over `scanf("%s")` or `gets()`.

✅ Mastering input is essential before moving on to more advanced topics like **file handling** and **data structures**.
