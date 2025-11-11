# 🧩 Enumeration (enum) in C

## 📘 Introduction

An **Enumeration** (or `enum`) in C is a **user-defined data type** that assigns names to **integer constants**.  
It makes your code more readable and meaningful instead of using raw numbers (magic numbers).

---

## 🧠 Why Use `enum`?

Enums are useful when you have a **set of related constants** such as:
- Days of the week  
- Months  
- Error codes  
- Directions (UP, DOWN, LEFT, RIGHT)

✅ Instead of writing:
```c
int day = 3;  // What does 3 mean?
```

You can write:
```c
enum Weekday day = WEDNESDAY;
```
Much clearer and easier to understand!

---

## 🧩 Syntax of `enum`

```c
enum EnumName {
    constant1,
    constant2,
    constant3,
    ...
};
```

Example:
```c
enum Weekday {
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY,
    SUNDAY
};
```

By default:
```
MONDAY = 0
TUESDAY = 1
WEDNESDAY = 2
...
```

You can also assign custom values:
```c
enum Weekday {
    MONDAY = 1,
    TUESDAY,
    WEDNESDAY = 5,
    THURSDAY,
    FRIDAY
};
```
Then values will be:
```
MONDAY = 1
TUESDAY = 2
WEDNESDAY = 5
THURSDAY = 6
FRIDAY = 7
```

---

## ✅ Example 1: Basic Enum Usage

```c
#include <stdio.h>

enum Day {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Day today;

    today = WEDNESDAY;

    printf("Day number: %d\n", today);
    return 0;
}
```

**Output:**
```
Day number: 3
```

🧠 **Explanation:**
- `SUNDAY` starts with 0 by default.
- `WEDNESDAY` is the 3rd value in the list (count starts from 0).

---

## 🧩 Example 2: Enum with Custom Values

```c
#include <stdio.h>

enum Level {
    LOW = 1,
    MEDIUM = 5,
    HIGH = 10
};

int main() {
    enum Level l = HIGH;
    printf("Level: %d\n", l);
    return 0;
}
```

**Output:**
```
Level: 10
```

---

## ⚙️ Example 3: Using Enum in Conditional Statements

```c
#include <stdio.h>

enum TrafficLight {
    RED,
    YELLOW,
    GREEN
};

int main() {
    enum TrafficLight signal;

    signal = RED;

    if (signal == RED)
        printf("STOP!\n");
    else if (signal == YELLOW)
        printf("READY TO GO!\n");
    else
        printf("GO!\n");

    return 0;
}
```

**Output:**
```
STOP!
```

🧠 **Explanation:**
- Enums are just integers internally.
- You can compare them using `==`, `>`, `<`, etc.

---

## 💡 Example 4: Enum in Switch Case

Enums work beautifully with **switch statements**, making code much cleaner.

```c
#include <stdio.h>

enum Operation {
    ADD = 1,
    SUB,
    MUL,
    DIV
};

int main() {
    enum Operation op = MUL;
    int a = 10, b = 5, result;

    switch (op) {
        case ADD:
            result = a + b;
            break;
        case SUB:
            result = a - b;
            break;
        case MUL:
            result = a * b;
            break;
        case DIV:
            result = a / b;
            break;
        default:
            printf("Invalid Operation!\n");
            return 1;
    }

    printf("Result = %d\n", result);
    return 0;
}
```

**Output:**
```
Result = 50
```

---

## 🧮 Example 5: Enum with `typedef`

You can use `typedef` to simplify your enum declaration (no need to write `enum` every time).

```c
#include <stdio.h>

typedef enum {
    JAN = 1, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC
} Month;

int main() {
    Month current = JUL;
    printf("Current month number: %d\n", current);
    return 0;
}
```

**Output:**
```
Current month number: 7
```

---

## 🧩 Example 6: Enum with Structure

Enums are often used **inside structures** to represent state or type clearly.

```c
#include <stdio.h>

enum Gender { MALE, FEMALE };

struct Person {
    char name[30];
    enum Gender gender;
};

int main() {
    struct Person p1 = {"Alice", FEMALE};

    printf("Name: %s\n", p1.name);
    printf("Gender: %s\n", (p1.gender == FEMALE) ? "Female" : "Male");
    return 0;
}
```

**Output:**
```
Name: Alice
Gender: Female
```

---

## 🧠 Enum Memory & Internal Working

- Enums are stored as **integers (int)** in memory.
- You can think of them as **integer labels with names**.
- The **default type** of enum constants is `int`, but you can cast them if needed.

Example:
```c
enum Status { ON = 1, OFF = 0 };
```
Memory representation:
```
ON  → 1
OFF → 0
```

---

## 🧮 Enum vs `#define`

| Feature | `enum` | `#define` |
|----------|----------|-----------|
| Type | Has a specific type (`int`) | No type, simple text replacement |
| Scope | Scoped within block or file | Global (visible everywhere) |
| Debugging | Easier (shows names in debugger) | Harder (just numbers) |
| Memory | Uses memory like int | No memory (macro) |
| Example | `enum Color {RED, GREEN}` | `#define RED 0` |

---

## ⚙️ Common Uses of Enums

✅ Use enums for:
- **Modes**: `enum Mode { ON, OFF }`
- **Status codes**: `enum Status { SUCCESS, FAILURE }`
- **Menu options**: `enum Menu { PLAY, PAUSE, EXIT }`
- **Days, months, directions, colors, etc.**

---

## 🧾 Summary

| Concept | Description | Example |
|----------|--------------|----------|
| Definition | Named constants using integers | `enum Day { MON, TUE }` |
| Default Values | Start from 0, auto-increment | MON=0, TUE=1 |
| Custom Values | Manually assign integers | `MON=1, TUE=5` |
| Memory Type | Stored as `int` | 4 bytes (typically) |
| Use Case | Replace numbers with names | Days, status, colors |
| Advantage | Improves readability | Easy to debug |

---

## 🚀 Key Takeaways

- **Enum** = a set of **named integer constants**.  
- Increases **code readability and maintainability**.  
- Default values start at **0**, can be customized.  
- Can be used in **switch**, **if**, and **structures**.  
- Prefer **enum over #define** for clarity and type safety.  

---
