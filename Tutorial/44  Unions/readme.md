# 🧩 Unions in C

## 📘 Introduction

A **Union** in C is a **user-defined data type** — similar to a `structure` —  
but with one major difference:

> 🧠 In a **union**, **all members share the same memory location**.

That means, at any given time, **only one member can hold a value**.

---

## 🧠 Why Use Unions?

- To save **memory**, when only one variable (out of many) is used at a time.  
- Useful in applications like **embedded systems**, **compiler design**, and **data conversion** (e.g., reading same bytes as int, float, or char array).  
- Helps in creating **variant data types** (like data that can be integer or float).

---

## 🧩 Syntax of Union

```c
union UnionName {
    data_type member1;
    data_type member2;
    data_type member3;
};
```

Example:
```c
union Data {
    int i;
    float f;
    char str[20];
};
```

---

## ✅ Example: Declaring and Using a Union

```c
#include <stdio.h>
#include <string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main() {
    union Data data;

    data.i = 10;
    printf("data.i = %d\n", data.i);

    data.f = 220.5;
    printf("data.f = %.1f\n", data.f);

    strcpy(data.str, "Hello");
    printf("data.str = %s\n", data.str);

    return 0;
}
```

**Output:**
```
data.i = 10
data.f = 220.5
data.str = Hello
```

🧠 **Explanation:**
- Every time a new value is assigned, the **previous value gets overwritten**  
  because all members share the **same memory**.

---

## 🧮 Memory Sharing Concept

Let’s analyze the memory layout:

```c
union Data {
    int i;       // 4 bytes
    float f;     // 4 bytes
    char str[20]; // 20 bytes
};
```

🧩 The **size of a union** = size of its **largest member**.  
So here, `sizeof(union Data)` = **20 bytes** (because of `str[20]`).

All members start at the same memory address:

```
+-----------------------------+
|    Shared Memory (20B)      |
| i | f | s[0] s[1] ... s[19] |
+-----------------------------+
```

If you write to `f`, it overwrites the bytes used by `i` or `str`.

---

## ⚙️ Accessing Union Members

You use the **dot (.) operator**, just like in structures:

```c
data.i = 5;
printf("%d", data.i);
```

Or with pointers:
```c
union Data *ptr = &data;
ptr->f = 3.14;
printf("%.2f", ptr->f);
```

---

## 🧩 Example: Demonstrating Memory Overlap

```c
#include <stdio.h>

union Example {
    int i;
    char c;
};

int main() {
    union Example e;
    e.i = 65; // ASCII for 'A'
    printf("i = %d, c = %c\n", e.i, e.c);
    return 0;
}
```

**Output:**
```
i = 65, c = A
```

🧠 Both `i` and `c` share the same memory — changing one affects the other.

---

## 🧩 Example: Using Union with Structure

You can include a **union inside a structure** when you want shared memory for some fields but fixed memory for others.

```c
#include <stdio.h>
#include <string.h>

struct Employee {
    int id;
    char name[30];
    union {
        int salary;
        float hourly_rate;
    } pay;
};

int main() {
    struct Employee e1;

    e1.id = 1;
    strcpy(e1.name, "John");
    e1.pay.salary = 50000; // full-time employee

    printf("Employee: %s, ID: %d, Salary: %d\n",
           e1.name, e1.id, e1.pay.salary);

    return 0;
}
```

---

## 🧮 Difference Between Structure and Union

| Feature | Structure | Union |
|----------|------------|--------|
| **Memory** | Each member has its **own memory** | All members **share the same memory** |
| **Size** | Sum of all members’ sizes | Size of **largest member** |
| **Storage** | All members can store values simultaneously | Only one member stores value at a time |
| **Initialization** | All members can be initialized | Only the **first member** can be initialized |
| **Use case** | When all members needed | When only one member used at a time |

---

## 🧩 Example: Structure vs Union Comparison

```c
#include <stdio.h>
#include <string.h>

struct SData {
    int i;
    float f;
    char str[20];
};

union UData {
    int i;
    float f;
    char str[20];
};

int main() {
    struct SData s;
    union UData u;

    printf("Size of struct = %lu\n", sizeof(s));
    printf("Size of union  = %lu\n", sizeof(u));

    return 0;
}
```

**Output:**
```
Size of struct = 28
Size of union  = 20
```

🧠 **Explanation:**
- Structure’s size = sum of all members (with padding).  
- Union’s size = size of largest member.

---

## ⚠️ Common Mistakes

❌ Using multiple union members at once:  
Only one member holds valid data at any time.

❌ Forgetting the size of largest member:  
Always check `sizeof()` to allocate correctly.

---

## 🧠 Practical Use Cases of Unions

1. **Memory Optimization**  
   - Used in embedded systems where memory is limited.

2. **Interpreting Same Memory in Multiple Ways**  
   - Example: reading data bytes as `int` or `float`.

3. **Tagged Unions (with Structures)**  
   - Used in compilers or interpreters to store multiple data types in one variable.

### Example: Type-Safe Variant Data
```c
#include <stdio.h>

struct Variant {
    int type; // 1=int, 2=float
    union {
        int i;
        float f;
    } data;
};

int main() {
    struct Variant v;

    v.type = 1;
    v.data.i = 42;
    printf("Int value: %d\n", v.data.i);

    v.type = 2;
    v.data.f = 3.14;
    printf("Float value: %.2f\n", v.data.f);
}
```

**Output:**
```
Int value: 42
Float value: 3.14
```

---

## 🧾 Summary

| Concept | Description |
|----------|-------------|
| **Union** | User-defined data type where all members share the same memory |
| **Memory** | Size equals the size of the largest member |
| **Access** | Use `.` or `->` operators |
| **Advantage** | Saves memory, flexible type storage |
| **Limitation** | Only one member holds value at a time |
| **Use Case** | Embedded systems, data conversions, variant storage |

---

## 🚀 Key Takeaways

- **Union** is like a **structure with shared memory**.  
- Only one member can hold a value at a time.  
- Saves **memory** when you don’t need multiple members simultaneously.  
- Access members using `.` or `->`.  
- Commonly used in **low-level programming** and **system software**.

---

