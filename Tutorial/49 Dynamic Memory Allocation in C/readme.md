# 🧩 Dynamic Memory Allocation in C

## 📘 Introduction

In C, **Dynamic Memory Allocation (DMA)** allows you to **allocate memory at runtime** (while the program is running) instead of at compile-time.

🧠 Normally, memory for variables and arrays is fixed when you write the program.  
But with dynamic memory, you can decide **how much memory to use while the program is running** — useful when the size of data is unknown.

---

## 🧠 Why Use Dynamic Memory?

✅ Static memory allocation:
```c
int arr[10]; // fixed size
```

- Size must be known at compile-time.  
- Wastes memory if not fully used.  

✅ Dynamic memory allocation:
```c
int *arr;
arr = (int *)malloc(n * sizeof(int));
```

- Memory allocated **based on user input or logic**.  
- Uses **heap memory** instead of stack.  
- Can be resized or freed later.

---

## 🧩 Header File

All dynamic memory functions are declared in:

```c
#include <stdlib.h>
```

---

## 🧠 Memory Allocation Functions

| Function | Purpose | Syntax |
|-----------|----------|---------|
| `malloc()` | Allocates single block of memory | `ptr = (type*) malloc(size_in_bytes);` |
| `calloc()` | Allocates multiple blocks (initialized to 0) | `ptr = (type*) calloc(num, size);` |
| `realloc()` | Reallocates (resizes) memory block | `ptr = (type*) realloc(ptr, new_size);` |
| `free()` | Frees (deallocates) allocated memory | `free(ptr);` |

---

## ✅ Example 1: Using `malloc()`

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) malloc(n * sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &ptr[i]);
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr); // free memory
    return 0;
}
```

**Output:**
```
Enter number of elements: 3
Enter 3 integers:
10
20
30

You entered:
10 20 30
```

🧠 **Explanation:**
- `malloc()` allocates a memory block large enough for `n` integers.  
- `ptr` stores the address of the first byte.  
- `free(ptr)` releases the memory.

---

## ✅ Example 2: Using `calloc()`

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, *ptr;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = (int*) calloc(n, sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated!\n");
        return 1;
    }

    printf("Default values after calloc():\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", ptr[i]);
    }

    free(ptr);
    return 0;
}
```

**Output:**
```
Enter number of elements: 5
Default values after calloc():
0 0 0 0 0
```

🧠 **Difference:**  
- `malloc()` gives **garbage values**,  
- `calloc()` gives **zero-initialized** memory.

---

## ✅ Example 3: Difference Between malloc() and calloc()

| Feature | `malloc()` | `calloc()` |
|----------|-------------|-------------|
| Full Form | Memory Allocation | Contiguous Allocation |
| Initialization | Garbage values | Initialized to 0 |
| Syntax | `malloc(size)` | `calloc(num, size)` |
| Returns | `void*` | `void*` |
| Speed | Slightly faster | Slightly slower |
| Use Case | Single large block | Multiple elements |

---

## ✅ Example 4: Using `realloc()` (Resize Memory)

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr, n;

    n = 3;
    ptr = (int*) malloc(n * sizeof(int));
    printf("Enter 3 numbers: ");
    for (int i = 0; i < n; i++) scanf("%d", &ptr[i]);

    // Resize memory
    n = 5;
    ptr = (int*) realloc(ptr, n * sizeof(int));
    printf("Enter 2 more numbers: ");
    for (int i = 3; i < n; i++) scanf("%d", &ptr[i]);

    printf("\nAll numbers: ");
    for (int i = 0; i < n; i++) printf("%d ", ptr[i]);

    free(ptr);
    return 0;
}
```

**Output:**
```
Enter 3 numbers: 1 2 3
Enter 2 more numbers: 4 5
All numbers: 1 2 3 4 5
```

🧠 `realloc()` preserves the existing data and expands or shrinks memory as needed.

---

## ✅ Example 5: Using `free()`

Always **release dynamically allocated memory** using `free()` once it’s no longer needed.

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*) malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++) ptr[i] = i + 1;

    printf("Before free(): %d\n", ptr[2]);
    free(ptr);
    // After free, memory is released; accessing ptr is unsafe
    return 0;
}
```

🧠 **Note:** After calling `free()`, set pointer to `NULL` to avoid *dangling pointer* problems.

---

## ⚙️ Example 6: Dynamic 2D Array

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows = 2, cols = 3;
    int **matrix;

    // Allocate memory for rows
    matrix = (int**) malloc(rows * sizeof(int*));

    // Allocate memory for each column
    for (int i = 0; i < rows; i++) {
        matrix[i] = (int*) malloc(cols * sizeof(int));
    }

    // Assign values
    int count = 1;
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            matrix[i][j] = count++;

    // Display
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            printf("%d ", matrix[i][j]);
        printf("\n");
    }

    // Free memory
    for (int i = 0; i < rows; i++) free(matrix[i]);
    free(matrix);

    return 0;
}
```

**Output:**
```
1 2 3
4 5 6
```

🧠 Memory allocated dynamically for both **rows and columns**, then freed properly.

---

## 🧮 Memory Layout

```
Stack  → function variables
Heap   → dynamically allocated memory (malloc, calloc)
Code   → program instructions
Static → global/static variables
```

🧠 Memory allocated using `malloc()` and `calloc()` comes from **heap memory**.

---

## 🧾 Common Mistakes

| Mistake | Explanation |
|----------|--------------|
| Forgetting `free()` | Causes **memory leaks** |
| Accessing after `free()` | Causes **undefined behavior** |
| Using uninitialized pointer | Can crash program |
| Wrong `sizeof()` value | Allocates wrong size |
| Missing typecast (in C++) | Required only in C++ (not C) |

---

## 🧠 Summary

| Function | Purpose | Initialized | Example |
|-----------|----------|--------------|----------|
| `malloc()` | Allocate memory | ❌ No | `malloc(n * sizeof(int))` |
| `calloc()` | Allocate & clear | ✅ Yes (0) | `calloc(n, sizeof(int))` |
| `realloc()` | Resize memory | Keeps old data | `realloc(ptr, newSize)` |
| `free()` | Deallocate memory | N/A | `free(ptr)` |

---

## 🚀 Key Takeaways

- Dynamic memory = flexible runtime memory allocation.  
- Use `malloc()` for simple allocation, `calloc()` for zeroed memory.  
- Use `realloc()` to **resize arrays dynamically**.  
- Always call `free()` to prevent memory leaks.  
- Heap memory gives **flexibility and efficiency** in large programs.

---


