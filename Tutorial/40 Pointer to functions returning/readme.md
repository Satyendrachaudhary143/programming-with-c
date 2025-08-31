# 🔹 Pointer to Function Returning Pointer in C

## 📌 Concept
- Normally, a function can **return a value** (e.g., `int`, `float`, etc.).
- Functions can also **return a pointer** (address of a variable, array, or dynamically allocated memory).
- A **pointer to such a function** can be used to store its address and call it dynamically.

---

## 🔹 Syntax
```c
data_type *functionName(parameters);    // function returning pointer

data_type *(*funcPtr)(parameters);      // pointer to function returning pointer
```

Example:
```c
int* myFunction(int a);
int* (*funcPtr)(int);
```
Here:
- `myFunction` returns `int*` (pointer to int).
- `funcPtr` is a pointer to a function that takes `int` and returns `int*`.

---

## 1️⃣ Example: Function Returning Pointer
```c
#include <stdio.h>

int* getSquare(int x) {
    static int result;   // must be static to persist after function ends
    result = x * x;
    return &result;      // return pointer to result
}

int main() {
    int* p = getSquare(5);
    printf("Square = %d\n", *p);
    return 0;
}
```

👉 Output:
```
Square = 25
```

---

## 2️⃣ Example: Pointer to Function Returning Pointer
```c
#include <stdio.h>

int* getDouble(int x) {
    static int val;
    val = 2 * x;
    return &val;
}

int main() {
    // declare a pointer to function returning int*
    int* (*funcPtr)(int);

    funcPtr = getDouble;   // assign function
    int* result = funcPtr(10); // call function via pointer

    printf("Double = %d\n", *result);
    return 0;
}
```

👉 Output:
```
Double = 20
```

---

## 3️⃣ Example: Returning Pointer to Array Element
```c
#include <stdio.h>

int* getElement(int arr[], int index) {
    return &arr[index];   // return address of element
}

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};
    int* (*funcPtr)(int[], int) = getElement;

    int* p = funcPtr(numbers, 3);
    printf("Element at index 3 = %d\n", *p);

    return 0;
}
```

👉 Output:
```
Element at index 3 = 40
```

---

## 4️⃣ Example: Dynamic Memory Allocation (malloc)
```c
#include <stdio.h>
#include <stdlib.h>

int* allocateMemory(int n) {
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        arr[i] = i + 1;
    }
    return arr;
}

int main() {
    int* (*funcPtr)(int) = allocateMemory;
    int* arr = funcPtr(5);

    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
```

👉 Output:
```
1 2 3 4 5
```

---

## ⚖️ Advantages
✅ Useful in **memory allocation functions** (`malloc`, `calloc`)  
✅ Allows **dynamic selection of functions** returning data  
✅ Helpful in **callback systems returning data**  

---

## ⚠️ Disadvantages
❌ Hard to read syntax (nested `*` and `()`)  
❌ Misuse can lead to **dangling pointers** or memory leaks  
❌ Debugging becomes tricky  

---

# 🎯 Summary
- A function can **return a pointer**.
- A **pointer to such a function** can also be declared.
- Syntax is tricky:  
  - `int* f(int);` → function returning `int*`  
  - `int* (*fp)(int);` → pointer to function returning `int*`  
- Very useful in **dynamic memory management, callbacks, and data handling**.