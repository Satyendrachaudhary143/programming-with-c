# 📌 Parameters in C

In C programming, **parameters** are variables that are defined in the function definition and are used to receive values from the calling function. They act as placeholders for the input data provided to a function.

---

## 🔹 Example of Parameters

```c
#include <stdio.h>

// Function with parameters
void greet(char name[]) {
    printf("Hello, %s!\n", name);
}

int main() {
    greet("Satyendra");  // "Satyendra" is passed as an argument
    return 0;
}
```

👉 Here, `char name[]` is a **parameter** of the function `greet()`.

---

# 🔹 Parameter Passing Methods in C

C supports two main ways to pass arguments to a function:

---

## 1️⃣ Pass by Value
- In **pass by value**, a **copy** of the actual argument is passed to the function.  
- Any changes made inside the function **do not affect** the original variable.  
- This is the default method in C.

### Example:
```c
#include <stdio.h>

void changeValue(int x) {
    x = 50;  // Change local copy
    printf("Inside function: x = %d\n", x);
}

int main() {
    int a = 10;
    changeValue(a);
    printf("Outside function: a = %d\n", a);
    return 0;
}
```

### Output:
```
Inside function: x = 50
Outside function: a = 10
```

👉 The original variable `a` remains unchanged.

---

## 2️⃣ Pass by Reference (using pointers)
- In **pass by reference**, the **address of the variable** is passed to the function.  
- The function works with the original variable using its memory address.  
- Any changes inside the function **directly affect** the original variable.  
- In C, this is achieved using **pointers**.

### Example:
```c
#include <stdio.h>

void changeValue(int *x) {
    *x = 50;  // Change original value through pointer
    printf("Inside function: *x = %d\n", *x);
}

int main() {
    int a = 10;
    changeValue(&a);
    printf("Outside function: a = %d\n", a);
    return 0;
}
```

### Output:
```
Inside function: *x = 50
Outside function: a = 50
```

👉 The original variable `a` is modified.

---

# 📝 Summary

| Method                | What is Passed?          | Changes Affect Original? | Usage in C          |
|------------------------|--------------------------|--------------------------|---------------------|
| **Pass by Value**      | Copy of value           | ❌ No                    | Default method      |
| **Pass by Reference**  | Address of variable     | ✅ Yes                   | Using pointers      |

---

# 🎯 Real-Life Analogy
- **Pass by Value** → Giving a **photocopy** of a document. Changes to the copy don’t affect the original.  
- **Pass by Reference** → Giving the **original document**. Any changes affect the actual document.