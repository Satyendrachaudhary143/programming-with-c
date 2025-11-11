# 🧩 Pointer to Structure in C

## 📘 Introduction

In C, a **pointer to structure** allows you to **store the address of a structure variable** and **access or modify** its members using the pointer.

Pointers to structures make it easy to:
- Pass large structures to functions efficiently.
- Create and manage **dynamic structures** (like linked lists, trees, etc.).
- Access structure members through **dynamic memory allocation**.

---

## 🧠 What is a Pointer to Structure?

A **pointer to structure** is a pointer variable that **stores the address** of a structure variable.

### Syntax:
```c
struct StructureName *pointerName;
```

To assign the address of a structure variable:
```c
pointerName = &structureVariable;
```

---

## ✅ Example: Basic Pointer to Structure

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"Alice", 101, 89.5};
    struct Student *ptr;   // declare pointer to structure
    ptr = &s1;             // assign address of s1

    printf("Access using pointer:\n");
    printf("Name: %s\n", (*ptr).name);
    printf("Roll: %d\n", (*ptr).roll);
    printf("Marks: %.2f\n", (*ptr).marks);

    return 0;
}
```

**Output:**
```
Access using pointer:
Name: Alice
Roll: 101
Marks: 89.50
```

---

## 💡 The Arrow Operator (`->`)

Since dereferencing every time (`(*ptr).member`) can be hard to read,  
C provides a **shortcut operator `->`** for accessing structure members via pointers.

### Example:

```c
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct Student s1 = {"Bob", 102, 76.5};
    struct Student *ptr = &s1;

    printf("Name: %s\n", ptr->name);
    printf("Roll: %d\n", ptr->roll);
    printf("Marks: %.2f\n", ptr->marks);
    return 0;
}
```

**Output:**
```
Name: Bob
Roll: 102
Marks: 76.50
```

---

## 🧩 Pointer to Structure with Function

Passing a **pointer to a structure** to a function allows you to **modify** the original structure’s content directly.

### Example:

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

void update(struct Student *s) {
    s->marks += 5; // add grace marks
    strcpy(s->name, "Updated Name");
}

int main() {
    struct Student s1 = {"Ravi", 103, 80.0};
    update(&s1); // pass address
    printf("%s - %.2f\n", s1.name, s1.marks);
    return 0;
}
```

**Output:**
```
Updated Name - 85.00
```

🧠 **Explanation:**
- `update(&s1)` sends the address of `s1`.
- Inside the function, `s->marks` accesses structure members via pointer.
- Changes affect the **original structure**, not a copy.

---

## 🧮 Pointer to Array of Structures

When you have an **array of structures**, you can use a pointer to iterate through all elements.

### Example:

```c
#include <stdio.h>

struct Student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct Student students[3] = {
        {"Alice", 1, 85.0},
        {"Bob", 2, 78.0},
        {"Charlie", 3, 92.5}
    };

    struct Student *ptr = students; // points to first element

    for (int i = 0; i < 3; i++) {
        printf("%s - Roll: %d - Marks: %.1f\n",
               (ptr + i)->name, (ptr + i)->roll, (ptr + i)->marks);
    }
    return 0;
}
```

**Output:**
```
Alice - Roll: 1 - Marks: 85.0
Bob - Roll: 2 - Marks: 78.0
Charlie - Roll: 3 - Marks: 92.5
```

💡 Note:
- `ptr + i` moves to the next structure in the array.
- Use `(ptr + i)->member` to access each record.

---

## 🧩 Example: Dynamic Memory Allocation with Pointer to Structure

Pointers allow you to **create structures at runtime** using `malloc()`.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct Student *ptr;
    ptr = (struct Student *)malloc(sizeof(struct Student));

    strcpy(ptr->name, "Meera");
    ptr->roll = 104;
    ptr->marks = 91.0;

    printf("Name: %s\nRoll: %d\nMarks: %.1f\n",
           ptr->name, ptr->roll, ptr->marks);

    free(ptr); // always free allocated memory
    return 0;
}
```

**Output:**
```
Name: Meera
Roll: 104
Marks: 91.0
```

🧠 **Explanation:**
- Memory for one `Student` structure is allocated dynamically.
- Members are accessed using `ptr->member`.
- Always call `free(ptr)` after use to prevent memory leaks.

---

## 🧩 Example: Array of Structures (Dynamic Memory)

```c
#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll;
    float marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    struct Student *ptr = malloc(n * sizeof(struct Student));

    for (int i = 0; i < n; i++) {
        printf("Enter roll and marks for student %d: ", i + 1);
        scanf("%d %f", &ptr[i].roll, &ptr[i].marks);
    }

    printf("\\n--- Student Details ---\\n");
    for (int i = 0; i < n; i++) {
        printf("Roll: %d, Marks: %.1f\\n", ptr[i].roll, ptr[i].marks);
    }

    free(ptr);
    return 0;
}
```

---

## 🧭 Pointer to Structure (Diagram)

```
  +-----------------------+
  | struct Student s1     |
  | name  -> "Alice"      |
  | roll  -> 101          |
  | marks -> 89.5         |
  +-----------------------+
            ↑
            |
            |
  +-----------------------+
  | struct Student *ptr   |
  | stores address of s1  |
  +-----------------------+
```

Access via:
```
(*ptr).marks   → 89.5
ptr->marks     → 89.5   ✅ (recommended)
```

---

## 🧠 Summary Table

| Concept | Description | Example |
|----------|--------------|----------|
| Pointer to Structure | Stores address of structure | `struct Student *p = &s1;` |
| Access Operator | Arrow (`->`) | `p->marks = 90.0;` |
| Pass by Reference | Modify structure inside function | `update(&s1);` |
| Array of Struct Pointer | Iterate with pointer | `(ptr + i)->name` |
| Dynamic Memory | Create struct at runtime | `malloc(sizeof(struct Student));` |

---

## 🚀 Key Takeaways

- A **pointer to structure** stores the **address** of a structure variable.  
- Use **arrow (`->`)** operator to access members easily.  
- Useful for **function parameters** and **dynamic memory**.  
- Ideal for data structures like **linked lists, trees, graphs**, etc.  
- Always **free memory** when allocated dynamically.

---

**Next Topic 👉** [Structure within Array in C](#)
