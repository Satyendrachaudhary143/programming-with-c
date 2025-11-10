# 🧩 Introduction to Structure in C

## 📘 What is a Structure?

In C programming, a **structure** (or `struct`) is a user-defined data type that allows you to combine **different types of variables** under a single name.  
It helps organize related data together and is especially useful when modeling real-world entities.

Example: You can represent a **student** with multiple attributes — name (string), roll number (int), and marks (float).  
A structure groups these into one logical unit.

---

## 🧠 Why Use Structures?

- To represent **complex data** in a simple, organized way.  
- To group **different data types** together (like `int`, `float`, `char[]`, etc.).  
- To make programs more readable and manageable.  
- To pass related data together to functions easily.

### Example:
Without structure:
```c
char name[50];
int roll;
float marks;
```

With structure:
```c
struct Student {
    char name[50];
    int roll;
    float marks;
};
```

Now you can create variables of this new type:
```c
struct Student s1, s2;
```

---

## 🧩 Syntax of Structure Declaration

```c
struct StructureName {
    data_type member1;
    data_type member2;
    ...
};
```

✅ **Important Points:**
- `struct` keyword defines a structure.  
- The **members** can be of different data types.  
- The semicolon `;` at the end is **mandatory**.  
- This definition only creates a **blueprint**, not actual memory.

---

## 💡 Example: Defining and Using a Structure

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1;  // declare variable of type struct Student

    strcpy(s1.name, "Ram");
    s1.roll = 101;
    s1.marks = 89.5;

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);

    return 0;
}
```

**Output:**
```
Name: Ram
Roll: 101
Marks: 89.50
```

---

## 🧮 Memory Allocation of Structure

- The size of a structure = sum of sizes of its members  
  (plus **padding bytes** added by compiler for alignment).  
- Each variable of a structure gets **its own copy** of all members.

Example:
```c
struct Student s1, s2;
```
Here, `s1` and `s2` each have separate memory for `name`, `roll`, and `marks`.

---

## ⚙️ Key Notes

| Concept | Description |
|----------|-------------|
| `struct` keyword | Used to define a structure |
| Members | Variables inside the structure |
| Dot operator `.` | Used to access members |
| Blueprint | Structure definition doesn’t allocate memory |
| Variables | Created after defining the structure |

---

## 🚀 Summary

- Structure is a **user-defined data type**.  
- It combines **different data types** into a single logical unit.  
- Syntax: `struct Name { ... };`  
- Use **dot operator** to access members.  
- Each structure variable has **independent copies** of its members.

---


