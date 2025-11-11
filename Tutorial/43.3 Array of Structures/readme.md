# 🧩 Array of Structures in C

## 📘 Introduction

An **array of structures** is a way to store **multiple structure variables** of the same type together in a single collection.  
It’s very useful when you want to handle data for **multiple entities** (e.g., many students, employees, books, etc.).

---

## 🧠 What Is an Array of Structures?

Just like you can have an array of integers (`int arr[10];`),  
you can also have an array of structures:

```c
struct Student students[50];
```

Here, `students` is an array that can hold 50 `Student` structure variables.

---

## 🧩 Syntax

```c
struct StructureName {
    data_type member1;
    data_type member2;
    ...
};

struct StructureName array_name[size];
```

✅ Each element of the array is a full structure, and you can access its members using the dot (`.`) operator.

---

## ✅ Example: Array of Structures (Static Initialization)

```c
#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    float marks;
};

int main() {
    struct Student students[3] = {
        {"Alice", 101, 89.5},
        {"Bob", 102, 75.0},
        {"Charlie", 103, 92.3}
    };

    for (int i = 0; i < 3; i++) {
        printf("Name: %s | Roll: %d | Marks: %.2f\n",
               students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
```

**Output:**
```
Name: Alice | Roll: 101 | Marks: 89.50
Name: Bob | Roll: 102 | Marks: 75.00
Name: Charlie | Roll: 103 | Marks: 92.30
```

---

## 🧮 Accessing Members of Structure Array

Use **array indexing** with the dot operator to access specific elements.

### Example:
```c
students[0].marks = 95.0;          // Access first student's marks
printf("%s", students[1].name);    // Access second student's name
```

You can also use loops to process all elements:

```c
for (int i = 0; i < 3; i++) {
    printf("%s - %.1f\n", students[i].name, students[i].marks);
}
```

---

## ✏️ Example: Taking User Input for Array of Structures

```c
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct Student students[3];

    for (int i = 0; i < 3; i++) {
        printf("Enter name, roll, marks for student %d: ", i + 1);
        scanf("%s %d %f", students[i].name, &students[i].roll, &students[i].marks);
    }

    printf("\n--- Student Records ---\n");
    for (int i = 0; i < 3; i++) {
        printf("%s | Roll: %d | Marks: %.1f\n",
               students[i].name, students[i].roll, students[i].marks);
    }

    return 0;
}
```

**Output (example input):**
```
Enter name, roll, marks for student 1: Alice 101 89.5
Enter name, roll, marks for student 2: Bob 102 76.5
Enter name, roll, marks for student 3: Charlie 103 93.0

--- Student Records ---
Alice | Roll: 101 | Marks: 89.5
Bob | Roll: 102 | Marks: 76.5
Charlie | Roll: 103 | Marks: 93.0
```

---

## 🧭 Example: Using Functions with Array of Structures

You can pass an **array of structures** to a function for display or modification.

```c
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

void display(struct Student s[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%s - %d - %.1f\n", s[i].name, s[i].roll, s[i].marks);
    }
}

int main() {
    struct Student list[2] = {
        {"David", 104, 80.0},
        {"Emma", 105, 85.0}
    };
    display(list, 2);
    return 0;
}
```

**Output:**
```
David - 104 - 80.0
Emma - 105 - 85.0
```

---

## ⚙️ Modifying Array of Structures Using Pointers

```c
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

void update(struct Student *s) {
    s->marks += 5.0;
}

int main() {
    struct Student arr[2] = {
        {"Liam", 106, 70.0},
        {"Olivia", 107, 82.0}
    };

    update(&arr[0]); // pass address of first element

    printf("Updated Marks: %.1f\n", arr[0].marks);
    return 0;
}
```

**Output:**
```
Updated Marks: 75.0
```

---

## 🧩 Array of Structures vs Structure of Arrays

| Concept | Description | Example |
|----------|--------------|----------|
| **Array of Structures** | Each element is a structure containing multiple data types | `struct Student students[5];` |
| **Structure of Arrays** | Each member is an array storing one field for all records | `struct { int roll[5]; float marks[5]; } data;` |

💡 *Array of Structures is easier to manage and understand in most cases.*

---

## 🚀 Real-Life Use Case Example

### Student Management Example

```c
#include <stdio.h>
#include <string.h>

struct Student {
    char name[30];
    int roll;
    float marks;
};

int main() {
    struct Student students[3] = {
        {"Arjun", 1, 85.0},
        {"Meera", 2, 90.5},
        {"Ravi", 3, 78.5}
    };

    float total = 0;
    for (int i = 0; i < 3; i++) total += students[i].marks;

    printf("Average Marks = %.2f\n", total / 3);
    return 0;
}
```

**Output:**
```
Average Marks = 84.67
```

---

## 🧠 Summary

| Concept | Description |
|----------|--------------|
| Array of Structures | Stores multiple structure variables together |
| Access Members | Use `array[i].member` |
| Input/Output | Use loops with `scanf`/`printf` |
| With Functions | Pass array to process multiple records |
| Use Case | Managing student, employee, or product records |

---

## ✅ Key Takeaways

- Array of structures helps manage **multiple records** efficiently.  
- Use **loops** for reading and displaying data.  
- Pass structure arrays to **functions** for better modularity.  
- Works great for **real-world applications** like databases, reports, and management systems.

---

