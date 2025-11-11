# 🧩 Nested Structures in C

## 📘 Introduction

A **nested structure** means having one structure **inside another structure**.  
This allows you to model **complex, real-world entities** that have sub-parts or relationships between different types of data.

Example:  
An **Employee** has a **name**, an **ID**, and an **Address** — where `Address` itself can have multiple members like `city`, `state`, `zip`.

---

## 🧠 What Is a Nested Structure?

A nested structure means a structure **member** is itself another structure.

Syntax:
```c
struct Outer {
    data_type member1;
    struct Inner {
        data_type a;
        data_type b;
    } innerVar; // structure variable inside another
};
```

or you can define the inner structure separately and **use it inside** another structure.

---

## 🧩 Syntax Options

### ✅ Option 1: Define Inner Structure Separately

```c
struct Address {
    char city[30];
    char state[30];
    int zip;
};

struct Employee {
    char name[50];
    int id;
    struct Address addr; // nested structure member
};
```

### ✅ Option 2: Define Inner Structure Inside Outer Structure

```c
struct Employee {
    char name[50];
    int id;
    struct {
        char city[30];
        char state[30];
        int zip;
    } addr; // anonymous inner structure
};
```

---

## 💡 Example: Nested Structure (Separate Definition)

```c
#include <stdio.h>
#include <string.h>

struct Address {
    char city[30];
    char state[30];
    int zip;
};

struct Employee {
    char name[30];
    int id;
    struct Address addr;
};

int main() {
    struct Employee e1;

    strcpy(e1.name, "Alice");
    e1.id = 101;
    strcpy(e1.addr.city, "New York");
    strcpy(e1.addr.state, "NY");
    e1.addr.zip = 10001;

    printf("Employee Name: %s\n", e1.name);
    printf("Employee ID: %d\n", e1.id);
    printf("City: %s\n", e1.addr.city);
    printf("State: %s\n", e1.addr.state);
    printf("ZIP: %d\n", e1.addr.zip);

    return 0;
}
```

**Output:**
```
Employee Name: Alice
Employee ID: 101
City: New York
State: NY
ZIP: 10001
```

---

## 🧮 Accessing Members of Nested Structures

Use the **dot (`.`)** operator multiple times:
```
outer_variable.inner_variable.member_name
```

Example:
```c
e1.addr.city
e1.addr.zip
```

If you have a pointer to the outer structure, use the **arrow (`->`) operator**:
```
outer_pointer->inner_variable.member
```

Example:
```c
struct Employee *ptr = &e1;
printf("%s", ptr->addr.city);
```

---

## 🧩 Example: Pointer to Nested Structure

```c
#include <stdio.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct Student {
    char name[30];
    int roll;
    struct Date dob; // nested structure
};

int main() {
    struct Student s1 = {"Ravi", 11, {15, 8, 2004}};
    struct Student *ptr = &s1;

    printf("Name: %s\n", ptr->name);
    printf("DOB: %02d/%02d/%d\n", ptr->dob.day, ptr->dob.month, ptr->dob.year);
    return 0;
}
```

**Output:**
```
Name: Ravi
DOB: 15/08/2004
```

---

## 🧩 Example: Array of Nested Structures

You can also create arrays that include nested structures.

```c
#include <stdio.h>
#include <string.h>

struct Address {
    char city[30];
    int zip;
};

struct Employee {
    char name[30];
    int id;
    struct Address addr;
};

int main() {
    struct Employee e[2] = {
        {"John", 1, {"Delhi", 110001}},
        {"Meera", 2, {"Mumbai", 400001}}
    };

    for (int i = 0; i < 2; i++) {
        printf("%s (%d) - %s [%d]\n",
               e[i].name, e[i].id, e[i].addr.city, e[i].addr.zip);
    }

    return 0;
}
```

**Output:**
```
John (1) - Delhi [110001]
Meera (2) - Mumbai [400001]
```

---

## 🧭 Nested Structures with Functions

You can also pass **nested structures** to functions just like normal structures.

### Example:
```c
#include <stdio.h>

struct Address {
    char city[30];
    int zip;
};

struct Employee {
    char name[30];
    int id;
    struct Address addr;
};

void display(struct Employee e) {
    printf("%s (%d) lives in %s [%d]\n",
           e.name, e.id, e.addr.city, e.addr.zip);
}

int main() {
    struct Employee emp = {"Ravi", 10, {"Lucknow", 226001}};
    display(emp);
    return 0;
}
```

**Output:**
```
Ravi (10) lives in Lucknow [226001]
```

---

## 🧠 Memory Layout Visualization

When you create a nested structure, the **inner structure** becomes part of the **outer structure’s memory**.

Example:
```c
struct Employee {
    char name[30];
    int id;
    struct Address {
        char city[30];
        int zip;
    } addr;
};
```

If `Address` has size 34 bytes (approx.), and `Employee` has 30 + 4 + 34 = 68 bytes (+ possible padding).

💡 The compiler places all inner members **inline** within the outer structure’s memory.

---

## 🧾 Real-Life Example: Student with Address and DOB

```c
#include <stdio.h>
#include <string.h>

struct Date {
    int day, month, year;
};

struct Address {
    char city[30];
    char state[30];
    int zip;
};

struct Student {
    char name[30];
    int roll;
    struct Date dob;
    struct Address addr;
};

int main() {
    struct Student s1 = {"Meera", 5, {12, 6, 2003}, {"Bangalore", "Karnataka", 560001}};

    printf("Student: %s\n", s1.name);
    printf("DOB: %02d/%02d/%d\n", s1.dob.day, s1.dob.month, s1.dob.year);
    printf("City: %s, State: %s, ZIP: %d\n", s1.addr.city, s1.addr.state, s1.addr.zip);

    return 0;
}
```

**Output:**
```
Student: Meera
DOB: 12/06/2003
City: Bangalore, State: Karnataka, ZIP: 560001
```

---

## 🧮 Nested Structure Diagram

```
+---------------------------------------------+
| struct Employee                             |
|---------------------------------------------|
| name[30]                                    |
| id                                          |
| +--------------------------+                |
| | struct Address           |                |
| |--------------------------|                |
| | city[30]                 |                |
| | state[30]                |                |
| | zip                      |                |
| +--------------------------+                |
+---------------------------------------------+
```

---

## 🧠 Summary

| Concept | Description | Example |
|----------|--------------|----------|
| Nested Structure | Structure inside another | `struct Employee { struct Address addr; };` |
| Access Members | Use multiple dots | `emp.addr.city` |
| Pointer Access | Use arrow (`->`) and dot (`.`) | `ptr->addr.zip` |
| Memory | Inner structure stored inline | Members combined inside memory |
| Use Cases | Complex data (Employee, Student, Book, etc.) | Multi-level data storage |

---

## 🚀 Key Takeaways

- A **nested structure** lets you create hierarchical or multi-level data.  
- Access inner members using `.` or `->` operators.  
- You can use them in **arrays, functions, or dynamic structures**.  
- They help represent **real-world complex entities** cleanly.

---

**Next Topic 👉** [Pointer to Structure in C](#)
