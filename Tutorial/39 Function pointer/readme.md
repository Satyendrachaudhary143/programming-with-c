# 🔹 Function Pointers in C (Advanced)

## 📌 What is a Function Pointer?
- A **function pointer** is a pointer that points to the **address of a function**.  
- Just like we have pointers to variables, we can also have **pointers to functions**.  
- Function pointers allow us to:
  - Call functions dynamically at runtime
  - Pass functions as arguments
  - Implement callback functions
  - Build tables of functions (e.g., menu-driven programs)

---

## 🔹 Syntax
```c
return_type (*pointer_name)(parameter_list);
```

Example:
```c
int (*funcPtr)(int, int);
```
Here `funcPtr` is a pointer to a function that takes two `int` parameters and returns an `int`.

---

## 1️⃣ Example: Basic Function Pointer
```c
#include <stdio.h>

void greet() {
    printf("Hello from Function!\n");
}

int main() {
    void (*funcPtr)();   // declare function pointer
    funcPtr = greet;     // assign address of greet to funcPtr
    funcPtr();           // call using pointer
    return 0;
}
```

👉 Output:
```
Hello from Function!
```

---

## 2️⃣ Example: Function Pointer with Parameters
```c
#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*operation)(int, int);
    operation = add;

    int result = operation(5, 7);  // call add using function pointer
    printf("Result = %d\n", result);

    return 0;
}
```

👉 Output:
```
Result = 12
```

---

## 3️⃣ Example: Passing Function Pointer as Argument (Callback)
```c
#include <stdio.h>

void processNumbers(int a, int b, int (*func)(int, int)) {
    int result = func(a, b); // call the function via pointer
    printf("Result = %d\n", result);
}

int add(int x, int y) { return x + y; }
int multiply(int x, int y) { return x * y; }

int main() {
    processNumbers(3, 4, add);       // pass add function
    processNumbers(3, 4, multiply);  // pass multiply function
    return 0;
}
```

👉 Output:
```
Result = 7
Result = 12
```

⚡ This is called a **callback function**.

---

## 4️⃣ Example: Array of Function Pointers
```c
#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    // array of 3 function pointers
    int (*operations[3])(int, int) = {add, subtract, multiply};

    printf("Add: %d\n", operations[0](10, 5));
    printf("Subtract: %d\n", operations[1](10, 5));
    printf("Multiply: %d\n", operations[2](10, 5));

    return 0;
}
```

👉 Output:
```
Add: 15
Subtract: 5
Multiply: 50
```

---

## 5️⃣ Example: Menu-Driven Program using Function Pointers
```c
#include <stdio.h>

int add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }
int multiply(int a, int b) { return a * b; }

int main() {
    int choice, x, y;
    int (*funcPtr[3])(int, int) = {add, subtract, multiply};

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Choose operation: 0=Add, 1=Subtract, 2=Multiply: ");
    scanf("%d", &choice);

    if (choice >= 0 && choice < 3) {
        printf("Result = %d\n", funcPtr[choice](x, y));
    } else {
        printf("Invalid choice\n");
    }

    return 0;
}
```

👉 Sample Run:
```
Enter two numbers: 10 5
Choose operation: 0=Add, 1=Subtract, 2=Multiply: 2
Result = 50
```

---

# ⚖️ Advantages of Function Pointers
✅ Call functions dynamically  
✅ Implement callbacks (important in GUI, drivers, APIs)  
✅ Create **plugin-like systems**  
✅ Reduce code duplication in menu-driven programs  

---

# ⚠️ Disadvantages
❌ Can make code **harder to read**  
❌ Risk of **segmentation fault** if pointer not initialized properly  
❌ Debugging is harder compared to normal function calls  

---

# 🎯 Summary
- A **function pointer** holds the address of a function.  
- Useful for **callbacks**, **dynamic function calls**, and **function tables**.  
- Syntax: `return_type (*ptr)(params)`  
- Can be used in **arrays, callbacks, and menus** for flexible program design.