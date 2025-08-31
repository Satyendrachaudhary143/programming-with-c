# 📘 Data Types in C

Data types in C define the **type of data** a variable can hold and the **amount of memory** it occupies. They are essential for telling the compiler what kind of operations can be performed on the data.

---

## 🔹 Why Data Types Are Important?

1. **Memory Allocation** – The compiler reserves the right amount of memory depending on the type.  
2. **Data Interpretation** – The compiler interprets the binary data correctly (e.g., as integer, float, or character).  
3. **Type Checking** – Ensures operations are done on compatible data.  
4. **Portability** – Standard data types ensure code can run across platforms.

---

## 🔹 Categories of Data Types in C

C language classifies data types into **four categories**:

1. **Basic (Primary) Data Types**  
2. **Derived Data Types**  
3. **Enumeration Data Types**  
4. **User-defined Data Types**

---

## 1. **Basic (Primary) Data Types**

| Data Type | Description | Memory (Bytes)* | Format Specifier |
|-----------|-------------|-----------------|------------------|
| `int`     | Integer (whole numbers) | 2 or 4 | `%d` |
| `char`    | Character data | 1 | `%c` |
| `float`   | Single-precision floating-point | 4 | `%f` |
| `double`  | Double-precision floating-point | 8 | `%lf` |
| `void`    | No value (empty) | 0 | (none) |

> ⚡ *Memory size depends on the system/compiler (commonly 4 bytes for `int` on modern systems).*

### Example:
```c
#include <stdio.h>
int main() {
    int age = 21;          // Integer
    char grade = 'A';      // Character
    float pi = 3.14f;      // Floating-point
    double largeNum = 123456.789;  // Double
    printf("Age: %d\n", age);
    printf("Grade: %c\n", grade);
    printf("PI: %f\n", pi);
    printf("Large Number: %lf\n", largeNum);
    return 0;
}
```

---

## 2. **Derived Data Types**

Derived from the basic types.

- **Array** → Collection of similar data types.  
- **Pointer** → Stores the address of another variable.  
- **Function** → Block of code returning a value.  
- **Structure** → Collection of different data types grouped together.  
- **Union** → Like structure but shares the same memory space.

### Example:
```c
int marks[5];       // Array
int *ptr;           // Pointer
int sum(int, int);  // Function declaration
struct Student {    // Structure
   char name[20];
   int age;
   float marks;
};
```

---

## 3. **Enumeration Data Type (`enum`)**

- Used to assign names to integer constants.
- Improves readability.

### Example:
```c
enum Days { MON, TUE, WED, THU, FRI, SAT, SUN };

int main() {
    enum Days today = WED;
    printf("Day number: %d", today);  // Output: 2 (since enum starts from 0)
    return 0;
}
```

---

## 4. **User-defined Data Types**

Using `typedef` or `struct`, we can create custom types.

### Example using `typedef`:
```c
typedef unsigned int uint;

int main() {
    uint age = 25;   // Equivalent to: unsigned int age = 25;
    printf("%u", age);
    return 0;
}
```

---

## 🔹 Type Modifiers in C

Modifiers alter the **size** or **sign** of basic data types.

- `short`  
- `long`  
- `signed`  
- `unsigned`  

| Data Type | Memory (Bytes)* | Range |
|-----------|-----------------|-------|
| `short int` | 2 | -32,768 to 32,767 |
| `unsigned short int` | 2 | 0 to 65,535 |
| `int` | 4 | -2,147,483,648 to 2,147,483,647 |
| `unsigned int` | 4 | 0 to 4,294,967,295 |
| `long int` | 4 or 8 | (depends on system) |
| `unsigned long int` | 4 or 8 | Only positive range |
| `long long int` | 8 | Very large range |
| `char` | 1 | -128 to 127 |
| `unsigned char` | 1 | 0 to 255 |

> ⚡ *Ranges vary based on compiler/system architecture (16-bit, 32-bit, 64-bit).*

---

## 🔹 Type Casting (Conversion)

Two types:

1. **Implicit Casting (Type Promotion)** → Automatically done by compiler.  
   Example: `int` + `float` → result becomes `float`.  

2. **Explicit Casting (Type Conversion)** → Done by programmer.  
   Example:  
   ```c
   int x = 10;
   float y = (float)x / 3; // Explicit casting
   ```

---

## 🔹 Summary

- **Basic Types**: `int`, `char`, `float`, `double`, `void`.  
- **Derived Types**: Arrays, Pointers, Functions, Structures, Unions.  
- **Enumeration Types**: `enum`.  
- **User-defined Types**: `typedef`, `struct`.  
- **Modifiers**: `short`, `long`, `signed`, `unsigned`.  
- **Casting**: Implicit & Explicit conversions.  

👉 Choosing the right data type ensures **efficient memory use, correctness, and better performance**.

---
