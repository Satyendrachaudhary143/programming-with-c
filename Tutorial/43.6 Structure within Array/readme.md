# 🧩 Structure within Array in C

## 📘 Introduction

A **Structure within an Array** means that one of the members of a structure is **an array**.  
This is useful when a single entity (like a student, employee, or product) contains **multiple values of the same type** — for example, a student’s marks in multiple subjects.

---

## 🧠 What Is a Structure within an Array?

In this concept, the **array** is defined **inside** a structure as one of its members.  
This allows each structure variable to store a **fixed-size collection** of related data (like marks, scores, or IDs).

---

### ✅ Example: Basic Syntax

```c
struct StructureName {
    data_type arrayName[size];
    data_type otherMember;
};
```

Example:
```c
struct Student {
    char name[50];
    int roll;
    int marks[5]; // array member
};
```

Here, each `Student` can hold marks of **5 subjects**.

---

## 💡 Example: Structure Containing Array

```c
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks[3]; // marks for 3 subjects
};

int main() {
    struct Student s1 = {"Alice", 101, {85, 90, 88}};

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %d, %d, %d\n", s1.marks[0], s1.marks[1], s1.marks[2]);

    return 0;
}
```

**Output:**
```
Name: Alice
Roll: 101
Marks: 85, 90, 88
```

🧠 **Explanation:**
- The structure contains an array `marks[3]`.
- Each element of `marks` can be accessed like a normal array: `s1.marks[0]`, `s1.marks[1]`, etc.

---

## 🧩 Example: User Input for Structure with Array

```c
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks[3];
};

int main() {
    struct Student s;

    printf("Enter name: ");
    scanf("%s", s.name);
    printf("Enter roll number: ");
    scanf("%d", &s.roll);

    printf("Enter marks of 3 subjects:\n");
    for (int i = 0; i < 3; i++) {
        printf("Subject %d: ", i + 1);
        scanf("%d", &s.marks[i]);
    }

    printf("\n--- Student Details ---\n");
    printf("Name: %s | Roll: %d\n", s.name, s.roll);
    printf("Marks: ");
    for (int i = 0; i < 3; i++) {
        printf("%d ", s.marks[i]);
    }

    return 0;
}
```

**Output (example input):**
```
Enter name: Meera
Enter roll number: 102
Enter marks of 3 subjects:
Subject 1: 80
Subject 2: 75
Subject 3: 90

--- Student Details ---
Name: Meera | Roll: 102
Marks: 80 75 90
```

---

## 🧮 Accessing Array Members inside Structure

Access the array elements using **dot (`.`)** operator with **array index**:

```c
s1.marks[0] = 95;   // first subject
printf("%d", s1.marks[2]);  // third subject
```

If you are using a pointer to structure:
```c
struct Student *ptr = &s1;
ptr->marks[1] = 88;
printf("%d", ptr->marks[1]);
```

---

## 🧩 Example: Array of Structures with Array Member

You can also combine both —  
an **array of structures**, where each structure itself contains an **array** member.

```c
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks[3];
};

int main() {
    struct Student s[2] = {
        {"Ravi", 1, {78, 80, 90}},
        {"Priya", 2, {88, 82, 94}}
    };

    for (int i = 0; i < 2; i++) {
        printf("%s (Roll %d): ", s[i].name, s[i].roll);
        for (int j = 0; j < 3; j++) {
            printf("%d ", s[i].marks[j]);
        }
        printf("\n");
    }

    return 0;
}
```

**Output:**
```
Ravi (Roll 1): 78 80 90 
Priya (Roll 2): 88 82 94 
```

---

## 🧩 Example: Structure with 2D Array (Matrix Example)

You can also include a **2D array** inside a structure —  
useful for storing tables, matrices, or grids.

```c
#include <stdio.h>

struct Matrix {
    int data[3][3];
};

int main() {
    struct Matrix m = {
        {
            {1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}
        }
    };

    printf("Matrix elements:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", m.data[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**
```
Matrix elements:
1 2 3
4 5 6
7 8 9
```

---

## 🧭 Memory Layout Visualization

```
struct Student {
    char name[30];   → 30 bytes
    int roll;        → 4 bytes
    int marks[3];    → 3 × 4 bytes = 12 bytes
}
Total (approx) = 46 bytes + padding
```

Memory layout for one `Student`:
```
+--------------------------------------------------+
| name[30] | roll | marks[0] | marks[1] | marks[2] |
+--------------------------------------------------+
```

Each structure variable (like `s1`, `s2`) gets **its own separate copy** of this entire memory block.

---

## 🧩 Practical Example: Student Report Program

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    int marks[5];
};

int main() {
    struct Student s1 = {"Arjun", 1001, {78, 85, 91, 66, 89}};
    int total = 0;

    for (int i = 0; i < 5; i++) total += s1.marks[i];

    float average = total / 5.0;
    printf("Student: %s (Roll: %d)\n", s1.name, s1.roll);
    printf("Total: %d, Average: %.2f\n", total, average);

    return 0;
}
```

**Output:**
```
Student: Arjun (Roll: 1001)
Total: 409, Average: 81.80
```

---

## 🧠 Summary

| Concept | Description | Example |
|----------|--------------|----------|
| Structure within Array | Array inside a structure | `int marks[5];` |
| Access Members | Dot and index operators | `s.marks[0]` |
| Pointer Access | Arrow and index | `ptr->marks[1]` |
| Nested Loops | For multiple records or marks | `for(i)... for(j)...` |
| Use Case | Storing multiple values for one entity | Marks, grades, matrix, etc. |

---

## 🚀 Key Takeaways

- Structure **can contain arrays** as members to hold multiple related values.  
- Use **loops** to access or input array data inside structures.  
- You can create **arrays of such structures** for multiple records.  
- Perfect for **student systems, grade reports, sales records**, and more.  

---


