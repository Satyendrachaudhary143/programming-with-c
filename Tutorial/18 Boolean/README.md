# Boolean in C

## 🧠 What is a Boolean?

In programming, a **Boolean** represents a value that can be either `true` or `false`. It is commonly used for decision-making, conditions, and logical operations.

## ⚙️ Boolean in C Language

Unlike languages like C++ or JavaScript, **C does not have a built-in Boolean type** in its original standard (C89/C90). However, you can simulate Boolean behavior using integers or include the `stdbool.h` header introduced in **C99**.

### ✅ Using `stdbool.h` (C99 and later)

```c
#include <stdbool.h>

bool isActive = true;
if (isActive) {
    printf("The system is active.\n");
}
```
- `bool` becomes an alias for 	`int`
- `true` is defined as `1`
- `false` is defined as `0`
```c
int isActive = 1; // 1 for true, 0 for false
if (isActive) {
    printf("The system is active.\n");
}
```
- Any non-zero value is considered true
- Zero (0) is considered false

### 🔍 Summary
| Feature |With  `stdbool.h` |Without `stdbool.h` | 
|---|---|---|
|type|`bool`|`int`|
| True value | true  | Any non-zero value | 
| False value | true |  0| 
| Readability | High | Moderate | 
 

### 📌 Tip
Use stdbool.h for better readability and semantic clarity in your code, especially when writing conditionals or documenting logic.






