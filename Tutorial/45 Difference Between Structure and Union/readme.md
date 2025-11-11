# 🧩 Difference Between Structure and Union in C

## 📘 Introduction

Both **Structure** and **Union** are **user-defined data types** in C that can hold data items of **different types**.  
However, the **way they store data in memory** is what makes them fundamentally different.

Let’s learn how they differ with examples, memory diagrams, and a comparison table.

---

## 🧠 Quick Concept Recap

| Keyword | Purpose |
|----------|----------|
| `struct` | Used to group related data where **all members exist independently** |
| `union`  | Used to group related data where **all members share same memory** |

---

## 🧩 Example: Structure vs Union Definition

```c
struct Student {
    int id;
    float marks;
    char grade;
};

union StudentU {
    int id;
    float marks;
    char grade;
};
```

---

## 🧮 Example Program: Structure vs Union in Action

```c
#include <stdio.h>

struct Student {
    int id;
    float marks;
    char grade;
};

union StudentU {
    int id;
    float marks;
    char grade;
};

int main() {
    struct Student s = {1, 85.5, 'A'};
    union StudentU u;

    u.id = 1;
    printf("Union ID: %d\n", u.id);
    u.marks = 85.5;
    printf("Union Marks: %.2f\n", u.marks);
    u.grade = 'A';
    printf("Union Grade: %c\n", u.grade);

    printf("\nSize of struct: %lu bytes\n", sizeof(s));
    printf("Size of union : %lu bytes\n", sizeof(u));

    return 0;
}
```

**Output:**
```
Union ID: 1
Union Marks: 85.50
Union Grade: A

Size of struct: 12 bytes
Size of union : 4 bytes
```

🧠 **Explanation:**
- **Structure:** Each member has its **own memory**, so all can hold values simultaneously.  
- **Union:** All members share the **same memory**, so only one member can hold a valid value at a time.  
- The union’s size equals the size of its **largest member**.

---

## 🧩 Memory Layout Diagram

### 📦 Structure Memory Layout
```
struct Student {
    int id;       // 4 bytes
    float marks;  // 4 bytes
    char grade;   // 1 byte
}
Total ≈ 9 bytes + padding = 12 bytes
```

```
+--------+----------+--------+
|   id   |  marks   | grade  |
| (4B)   |  (4B)    | (1B)   |
+--------+----------+--------+
```

➡️ Each member has **its own storage** — all can store values independently.

---

### ⚙️ Union Memory Layout
```
union StudentU {
    int id;       // 4 bytes
    float marks;  // 4 bytes
    char grade;   // 1 byte
}
Total = 4 bytes (size of largest member)
```

```
+---------------------+
| Shared Memory (4B)  |
| id / marks / grade  |
+---------------------+
```

➡️ All members share the **same memory location** — only **one valid value** at a time.

---

## 🧮 Structure vs Union: Detailed Comparison Table

| Feature | Structure (`struct`) | Union (`union`) |
|----------|----------------------|-----------------|
| **Definition** | Combines multiple data types | Combines multiple data types |
| **Memory Allocation** | Each member gets its **own space** | All members **share one space** |
| **Memory Size** | Sum of all members (plus padding) | Size of the **largest member** |
| **Member Access** | All members can be used at once | Only one member holds a value at a time |
| **Initialization** | All members can be initialized | Only the **first member** can be initialized |
| **Storage Efficiency** | Uses more memory | Memory-efficient |
| **Use Case** | When you need to store all data together | When you need only one value at a time |
| **Data Overlap** | No overlap | All members overlap in memory |
| **Example Use** | Student records, Employee data | Embedded systems, hardware registers |
| **Syntax Keyword** | `struct` | `union` |
| **Size Example** | Structure = 12 bytes | Union = 4 bytes |

---

## 🧩 Example: Memory Sharing in Union

```c
#include <stdio.h>

union Example {
    int x;
    float y;
};

int main() {
    union Example e;

    e.x = 100;
    printf("x = %d\n", e.x);

    e.y = 12.5;
    printf("y = %.2f\n", e.y);
    printf("x (overwritten) = %d\n", e.x);

    return 0;
}
```

**Output:**
```
x = 100
y = 12.50
x (overwritten) = 1095237632
```

🧠 Because both share the **same memory**, writing to `y` overwrites `x`.

---

## 🧾 Practical Example: Structure vs Union Usage

### 📘 Structure Example – Student Data
```c
struct Student {
    char name[30];
    int roll;
    float marks;
};
```
👉 Used when **all information** (name, roll, marks) is required simultaneously.

---

### ⚙️ Union Example – Data Conversion
```c
union Data {
    int i;
    float f;
    char str[20];
};
```
👉 Used when you want to **reuse the same memory** for **different data types**, one at a time.

---

## 💡 When to Use Structure vs Union

| Situation | Use |
|------------|-----|
| Need to store all data simultaneously | ✅ **Structure** |
| Need to store one of many data types at a time | ✅ **Union** |
| Focus on clarity and readability | Structure |
| Focus on memory optimization | Union |

---

## 🧠 Summary

| Concept | Structure | Union |
|----------|------------|--------|
| Memory | Separate for each member | Shared among all members |
| Size | Sum of all members | Size of largest member |
| Use | All values together | One value at a time |
| Example | Student info | Sensor data, hardware register |
| Advantage | Independent members | Memory saving |
| Limitation | Uses more memory | Only one valid member value |

---

## 🚀 Key Takeaways

- **Structure** → All members get **separate memory**.  
- **Union** → All members **share the same memory**.  
- **Structure size** = sum of member sizes (+ padding).  
- **Union size** = size of the **largest member**.  
- Structures are used for **data grouping**, while unions are for **memory efficiency**.  

---

