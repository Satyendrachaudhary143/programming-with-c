# 🗂️ Storage Classes in C

## 📌 What are Storage Classes?
Storage classes in C define:
1. **Scope** (where the variable is accessible)  
2. **Lifetime** (how long the variable exists in memory)  
3. **Storage location** (memory area where it is stored)  
4. **Default initial value**

There are **4 main storage classes** in C:

- `auto`  
- `static`  
- `extern`  
- `register`  

---

## 🔹 1. auto (Automatic Storage Class)
- **Default storage class** for local variables.  
- Stored in **stack memory**.  
- Exists only during function execution.  
- Value is **garbage** if not initialized.  

### Example:
```c
#include <stdio.h>

int main() {
    auto int x = 10; // auto keyword is optional
    printf("x = %d\n", x);
    return 0;
}
```

👉 Output:
```
x = 10
```

⚡ Note: Writing `auto` is optional because **all local variables are auto by default**.

---

## 🔹 2. static (Static Storage Class)
- Stored in **global memory area** (not stack).  
- **Lifetime = entire program execution**, even if declared inside a function.  
- Retains its **previous value** between function calls.  
- Default initial value = `0`.  

### Example:
```c
#include <stdio.h>

void counter() {
    static int count = 0; // retains value between calls
    count++;
    printf("Count = %d\n", count);
}

int main() {
    counter();
    counter();
    counter();
    return 0;
}
```

👉 Output:
```
Count = 1
Count = 2
Count = 3
```

⚡ Unlike normal local variables, `static` variables are **not re-created** each time the function runs.

---

## 🔹 3. extern (External Storage Class)
- Used to **declare a global variable** defined in another file or scope.  
- Does not allocate memory, just provides **reference**.  
- Default value = `0`.  
- Useful when **sharing variables between multiple files**.  

### Example (Single file demonstration):
```c
#include <stdio.h>

int g = 50;  // global variable

void show() {
    extern int g;  // refers to global g
    printf("g = %d\n", g);
}

int main() {
    show();
    return 0;
}
```

👉 Output:
```
g = 50
```

⚡ In **multi-file programs**, `extern` is often used to access variables defined in another file.

---

## 🔹 4. register (Register Storage Class)
- Suggests storing variable in **CPU register** instead of RAM (for fast access).  
- Limited number of CPU registers available → only small variables (like `int`, `char`) are stored.  
- Cannot use **& (address-of operator)** with register variables (since they may not be in RAM).  
- Default value = garbage.  

### Example:
```c
#include <stdio.h>

int main() {
    register int i; // stored in CPU register (if available)
    for (i = 1; i <= 5; i++) {
        printf("%d ", i);
    }
    return 0;
}
```

👉 Output:
```
1 2 3 4 5
```

---

# 📝 Storage Classes Comparison Table

| Storage Class | Scope                  | Lifetime                | Memory Location   | Default Value |
|---------------|------------------------|-------------------------|------------------|---------------|
| **auto**      | Local to function/block| Until function ends     | Stack            | Garbage       |
| **static**    | Local to function but value persists | Entire program | Global memory    | 0             |
| **extern**    | Global (visible to all files) | Entire program | Global memory    | 0             |
| **register**  | Local to function/block| Until function ends     | CPU Register (if available) | Garbage |

---

# 🎯 Summary
- **auto** → Default local variable, temporary.  
- **static** → Remembers value across function calls.  
- **extern** → Used to access global variables across files.  
- **register** → Stored in CPU registers for faster access.