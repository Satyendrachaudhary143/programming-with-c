# 🧩 Structures and Functions in C

## 📘 Introduction

Functions and structures work beautifully together in C —  
they allow you to **organize code** and **pass complex data** easily between functions.

You can:
- Pass a structure **by value**
- Pass a structure **by reference (pointer)**
- **Return** a structure from a function

Let’s explore each of these step-by-step.

---

## 🧱 1. Passing Structure to Function (By Value)

When you pass a structure **by value**, a **copy** of the structure is sent to the function.  
The function **cannot modify** the original structure.

---

### ✅ Example: Pass by Value

```c
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

void display(struct Student s) {
    printf("Name: %s\n", s.name);
    printf("Roll: %d\n", s.roll);
    printf("Marks: %.2f\n", s.marks);
}

int main() {
    struct Student s1 = {"Alice", 101, 89.5};
    display(s1); // copy of s1 is passed
    return 0;
}
```

**Output:**
```
Name: Alice
Roll: 101
Marks: 89.50
```

🧠 **Explanation:**
- The function `display()` gets a copy of `s1`.  
- Any changes made inside `display()` will **not affect** the original `s1`.

---

### ⚠️ Limitation
If the structure is large (many members or arrays), passing by value may consume more memory and time.

---

## 🧭 2. Passing Structure to Function (By Reference)

To avoid copying large structures, you can **pass a pointer** to the structure.  
This allows the function to **directly access and modify** the original data.

---

### ✅ Example: Pass by Reference (using pointer)

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

void update(struct Student *s) {
    s->marks += 5;  // add grace marks
    strcpy(s->name, "Updated Name");
}

int main() {
    struct Student s1 = {"Bob", 102, 75.0};
    update(&s1);  // pass address of s1
    printf("After update: %s - %.2f\n", s1.name, s1.marks);
    return 0;
}
```

**Output:**
```
After update: Updated Name - 80.00
```

🧠 **Explanation:**
- `update(&s1)` sends the **address** of the structure.
- Inside the function, `s->marks` means accessing structure through pointer.
- Any change done inside the function **affects the original structure**.

---

### 💡 Arrow Operator (`->`)

The arrow operator is used with pointers to access members:

| Operator | Usage | Meaning |
|-----------|--------|----------|
| `.` | `s1.name` | Access member directly |
| `->` | `ptr->name` | Access member via pointer |

---

## 🧩 3. Returning Structure from Function

Functions can also **return entire structures**.

---

### ✅ Example: Returning a Structure

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

struct Student createStudent(char n[], int r, float m) {
    struct Student temp;
    strcpy(temp.name, n);
    temp.roll = r;
    temp.marks = m;
    return temp; // returns structure
}

int main() {
    struct Student s1 = createStudent("Charlie", 103, 91.5);
    printf("Created Student: %s - %d - %.2f\n", s1.name, s1.roll, s1.marks);
    return 0;
}
```

**Output:**
```
Created Student: Charlie - 103 - 91.50
```

🧠 **Explanation:**
- `createStudent()` returns a **structure variable**.
- The returned structure is **copied** into `s1`.

---

### ⚙️ Returning Pointer to Structure (Advanced)

You can also return a **pointer** to a dynamically allocated structure.

```c
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

struct Student* createDynamicStudent(char n[], int r, float m) {
    struct Student *ptr = malloc(sizeof(struct Student));
    strcpy(ptr->name, n);
    ptr->roll = r;
    ptr->marks = m;
    return ptr;
}

int main() {
    struct Student *s = createDynamicStudent("David", 104, 85.0);
    printf("Dynamic Student: %s - %d - %.2f\n", s->name, s->roll, s->marks);
    free(s);
    return 0;
}
```

⚠️ Always remember to `free()` the memory when done to avoid memory leaks.

---

## 🧠 Summary

| Concept | Description | Example |
|----------|--------------|----------|
| Pass by Value | Function gets a copy | `display(s1);` |
| Pass by Reference | Function gets address (modifies original) | `update(&s1);` |
| Return Structure | Function returns structure | `return temp;` |
| Return Pointer | Function returns pointer (dynamic memory) | `return ptr;` |

---

## 🚀 Key Takeaways

- Use **by value** for small structs (simple read-only display).  
- Use **by reference** (pointer) for modifying data or large structs.  
- Returning structs is legal and safe (modern compilers optimize it).  
- Returning **pointers** is powerful but must be used carefully with `malloc` and `free`.

---

