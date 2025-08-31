

## 🧾 Format Specifiers in C — 
### 📌 What Are Format Specifiers?
Format specifiers are symbols used in input/output functions like printf() and scanf() to tell the compiler what type of data you're working with. They ensure that the data is interpreted and displayed correctly.

### 🧮 Core Format Specifiers
| Specifier | Data Type | Description | Example Value | 
|---------|----|---------|---------|
| %d | int |Signed decimal integer  | 42 | 
| %i | int | Same as %d | -7 | 
| %u | unsigned int | Unsigned decimal integer | 100 | 
| %f | float | Decimal floating-point | 3.14 | 
| %lf | double |  Double precision float| 3.14159 | 
| %c | char |Single character  | 'A' | 
| %s | char[] | String of characters | "Hello" | 
| %x | int | Hexadecimal (lowercase) | 0x1a | 
| %X | int | Hexadecimal (uppercase) | 0x1A | 
| %o | int | Octal representation | 052 | 
| %p | void* | Pointer address | 0x7ffe... | 
| %lld | long long int | Large integer | 9223372036854775807 | 



### 🧠 Usage in printf() and scanf()
  ### 🖨️ printf() — Output
  ```c
int age = 30;
float height = 5.9;
char grade = 'A';
char name[] = "Satyendra";

printf("Age: %d\n", age);
printf("Height: %.1f\n", height);  // One decimal place
printf("Grade: %c\n", grade);
printf("Name: %s\n", name);
```

### 📥 scanf() — Input
```c
int age;
float height;
char grade;
char name[50];

scanf("%d", &age);
scanf("%f", &height);
scanf(" %c", &grade);     // Note the space before %c to skip whitespace
scanf("%s", name);        // No & for strings

```
`⚠️ In scanf(), always use & before variables except for strings, which are arrays.`


### 🎯 Precision and Width Control
You can control how many digits or characters are printed:
```c
float pi = 3.141592;
printf("%.2f\n", pi);     // Output: 3.14
printf("%10.2f\n", pi);   // Output: '      3.14' (right-aligned in 10 spaces)
```






### 🧼 Best Practices
- ✅ Match specifier with correct data type
- ✅ Use precision for cleaner output
- ❌ Avoid mismatched types (e.g., using %d for a float)
- ✅ Use whitespace carefully in scanf() to avoid input bugs

### 🧠 Advanced Tip: Custom Formatting
You can combine multiple specifiers and formatting options:
```c
int id = 101;
char name[] = "Satyendra";
float marks = 92.75;

printf("ID: %04d | Name: %-10s | Marks: %6.2f\n", id, name, marks);
```


- %04d → Pads with zeros: 0101
- %-10s → Left-align string in 10 spaces
- %6.2f → Float with 2 decimals, total width 6



# 🔍 Escape Sequences in Programming

Escape sequences are special character combinations starting with a backslash (`\`) that represent characters with special meaning in strings.

---

## 📘 Common Escape Sequences

| Escape Sequence | Description           | Example Output              |
|-----------------|-----------------------|------------------------------|
| `\n`            | New line              | `Hello\nWorld` → Hello<br>World |
| `\t`            | Horizontal tab        | `Hello\tWorld` → Hello World |
| `\\`            | Backslash             | `C:\\Path` → C:\Path         |
| `\'`            | Single quote          | `'It\'s fine'` → It's fine   |
| `\"`            | Double quote          | `"He said \"Hi\""` → He said "Hi" |
| `\r`            | Carriage return       | Moves cursor to line start   |
| `\b`            | Backspace             | Deletes previous character   |
| `\0`            | Null character (C)    | Marks end of string          |

---

## 🧪 Example in C

```c
#include <stdio.h>

int main() {
    printf("Hello\tSatyendra\nWelcome to escape sequences!");
    return 0;
}