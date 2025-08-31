# 🌍 Scope of Variables in C

## 📌 What is Scope?
The **scope of a variable** in C defines the part of the program where the variable can be **accessed and used**.  
Variables in C mainly have **two scopes**:

1. **Local Variables**  
2. **Global Variables**

---

## 🔹 1. Local Variables
- Declared **inside a function or block** (between `{ }`).  
- Exist only while the function is running.  
- **Accessible only within that function/block**.  
- Automatically destroyed once the function exits.  

### Example:
```c
#include <stdio.h>

void display() {
    int x = 10; // Local variable
    printf("Value of local x = %d\n", x);
}

int main() {
    display();
    // printf("%d", x);  // ❌ Error: x is not accessible here
    return 0;
}
```

👉 Output:
```
Value of local x = 10
```

---

## 🔹 2. Global Variables
- Declared **outside of all functions** (at the top of the program).  
- Accessible by **all functions** in the program.  
- Exists throughout the program execution.  
- Stored in **global memory area**.  

### Example:
```c
#include <stdio.h>

int g = 100; // Global variable

void func1() {
    printf("In func1, g = %d\n", g);
}

void func2() {
    g = g + 50; // Modified globally
    printf("In func2, g = %d\n", g);
}

int main() {
    printf("In main, g = %d\n", g);
    func1();
    func2();
    printf("Back in main, g = %d\n", g);
    return 0;
}
```

👉 Output:
```
In main, g = 100
In func1, g = 100
In func2, g = 150
Back in main, g = 150
```

---

## 🔹 Local vs Global Variable (Comparison)

| Feature            | Local Variable                              | Global Variable                   |
|--------------------|---------------------------------------------|-----------------------------------|
| **Declaration**    | Inside a function/block                     | Outside all functions             |
| **Scope**          | Only within the function/block              | Accessible by all functions       |
| **Lifetime**       | Created when function is called, destroyed after return | Exists till program ends |
| **Memory Location**| Stack memory                                | Global memory area                |
| **Default Value**  | Garbage value (if not initialized)          | 0 (if not initialized)            |

---

## 🔹 Example: Local vs Global Together
```c
#include <stdio.h>

int g = 20; // Global variable

void test() {
    int g = 50; // Local variable (shadows global)
    printf("Inside test, g = %d\n", g);
}

int main() {
    printf("In main, global g = %d\n", g);
    test();
    printf("Back in main, global g = %d\n", g);
    return 0;
}
```

👉 Output:
```
In main, global g = 20
Inside test, g = 50
Back in main, global g = 20
```

⚡ Note: Local variable with the same name as a global variable **shadows** (hides) the global variable inside its scope.

---

# 📝 Summary
- **Local Variables** → Declared inside function, accessible only there, destroyed after use.  
- **Global Variables** → Declared outside functions, accessible everywhere, exist for program lifetime.  
- If local and global have the same name → local **overrides** inside the function.