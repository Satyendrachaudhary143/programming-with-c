# 🧩 Structures in C — Declaring, Defining, Accessing & Initializing

In this lesson, you’ll learn three important topics step-by-step:
1. **Declaring and Defining a Structure**  
2. **Accessing Structure Members**  
3. **Initializing Structure Members**

These are the fundamental skills you need before working with arrays, pointers, or functions involving structures.

---

## 🧱 1. Declaring and Defining a Structure

### 🧠 What It Means
Declaring a structure means **creating a new data type** (a template or blueprint).  
Defining means **creating actual variables** (objects) of that type.

---

### 🧩 Syntax

```c
struct StructureName {
    data_type member1;
    data_type member2;
    ...
};
```

This only **defines** the structure — no memory is allocated yet.

To create variables (objects) of that structure:

```c
struct StructureName variable1, variable2;
```

---

### ✅ Example

```c
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1, s2;  // define variables of structure type
    return 0;
}
```

💡 **Explanation:**
- The `struct Student` defines a blueprint for students.
- `s1` and `s2` each get their own separate memory for `name`, `roll`, and `marks`.

---

### ⚙️ Alternative: Combine Declaration + Definition

You can define structure variables right after structure declaration:

```c
struct Student {
    char name[50];
    int roll;
    float marks;
} s1, s2;
```

Here both the structure type and two variables (`s1`, `s2`) are declared together.

---

### 🪶 Using `typedef` (Short Form)

You can simplify syntax using `typedef`:

```c
typedef struct {
    char name[50];
    int roll;
    float marks;
} Student;

Student s1, s2; // no need to write 'struct' keyword
```

---

## 🎯 2. Accessing Structure Members

Once you’ve created a structure variable, you can **read or modify** its members using the **dot (`.`) operator**.

---

### 🧩 Syntax

```c
variable_name.member_name;
```

---

### ✅ Example

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1;

    strcpy(s1.name, "Alice");
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
Name: Alice
Roll: 101
Marks: 89.50
```

---

### 🧭 Access Using Pointer (Overview)

When using a **pointer to structure**, use the **arrow (`->`) operator**:

```c
struct Student *ptr = &s1;
ptr->marks = 90.5;
printf("%.2f", ptr->marks);
```

*(We’ll study pointers to structures in detail later.)*

---

## 🧩 3. Initializing Structure Members

Structures can be **initialized** at the time of declaration using **curly braces `{}`** — like arrays.

---

### 🧠 Syntax

```c
struct StructureName variable = {value1, value2, ...};
```

Values are assigned in the same order as members in the structure definition.

---

### ✅ Example

```c
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"Alice", 101, 89.5};
    struct Student s2 = {"Bob", 102, 92.0};

    printf("Student 1: %s - %d - %.1f\n", s1.name, s1.roll, s1.marks);
    printf("Student 2: %s - %d - %.1f\n", s2.name, s2.roll, s2.marks);
    return 0;
}
```

**Output:**
```
Student 1: Alice - 101 - 89.5
Student 2: Bob - 102 - 92.0
```

---

### 🧮 Designated Initializers (C99 Feature)

You can initialize specific members by name (useful for large structures):

```c
struct Student s3 = {.roll = 103, .marks = 95.5, .name = "Charlie"};
```

---

### 🧾 Assigning Values Later

You can also assign values **after** declaration:

```c
struct Student s4;
strcpy(s4.name, "David");
s4.roll = 104;
s4.marks = 88.0;
```

---

### ⚙️ Copying Structures

You can copy one structure to another directly:

```c
struct Student s5 = s1; // copies all members
```

---

## 🧠 Summary Table

| Concept | Description | Example |
|----------|--------------|----------|
| Structure Declaration | Defines structure type | `struct Student { ... };` |
| Structure Definition | Creates variables | `struct Student s1;` |
| Accessing Members | Using dot (`.`) operator | `s1.roll = 10;` |
| Initialization | Assigning values when declaring | `struct Student s = {"A",1,90};` |
| Designated Init | Initialize selected members | `.marks = 95.5` |
| Copying | Assign one struct to another | `s2 = s1;` |

---

## 🚀 Final Thoughts

- Structure declaration creates a **blueprint**, not memory.  
- You can **access members** with the `.` operator.  
- Use **initialization** for quick assignment or **dot notation** later.  
- Each structure variable has its own copy of data.  

---
