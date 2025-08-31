# Arrays in C

In C programming, **Arrays** are a collection of elements of the same data type stored in **contiguous memory locations**.  
They allow efficient storage and manipulation of multiple values using a single variable name.

---

## 1. Definition of Array
An **array** is a collection of variables of the same type, accessed using a single name and an **index**.

👉 Example: A list of 5 integers can be stored in an array instead of 5 separate variables.

---

## 2. Declaration of Array
Syntax:
```c
data_type array_name[size];
```

Example:
```c
int numbers[5];   // Declares an array of 5 integers
char name[20];    // Declares an array of 20 characters
```

---

## 3. Initialization of Array
Arrays can be initialized during declaration or later.

### Method 1: Direct Initialization
```c
int arr[5] = {10, 20, 30, 40, 50};
```

### Method 2: Partial Initialization
```c
int arr[5] = {10, 20};   // Remaining values will be 0
```

### Method 3: Without Size (auto-detect)
```c
int arr[] = {1, 2, 3, 4};
```

---

## 4. Types of Arrays
1. **Single-dimensional array (1D array)**  
   → Stores elements in a linear form.  
   Example: `int arr[5];`

2. **Multi-dimensional array (2D, 3D, …)**  
   → Stores elements in a table or matrix-like structure.  
   Example: `int arr[3][3];`

---

## 5. Single-Dimensional Array (1D Array)

### Example:
```c
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    
    // Accessing elements
    printf("First element: %d\n", arr[0]);
    printf("Third element: %d\n", arr[2]);

    return 0;
}
```

---

## 6. Multi-Dimensional Array (2D Array)

A **2D array** is like a **matrix (rows × columns)**.

### Example:
```c
#include <stdio.h>
int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    // Accessing elements
    printf("Element at [0][1]: %d\n", matrix[0][1]); // Output: 2
    printf("Element at [1][2]: %d\n", matrix[1][2]); // Output: 6

    return 0;
}
```

---

## 7. Iteration of Arrays

### (a) Iterating Single-Dimensional Array
```c
#include <stdio.h>
int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    printf("Array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
```

**Output:**
```
10 20 30 40 50
```

---

### (b) Iterating Multi-Dimensional Array
```c
#include <stdio.h>
int main() {
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    printf("Matrix elements:\n");
    for (int i = 0; i < 2; i++) {        // Rows
        for (int j = 0; j < 3; j++) {    // Columns
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
```

**Output:**
```
1 2 3
4 5 6
```

---

## 8. Higher-Dimensional Arrays (Advanced)
C allows 3D or higher-dimensional arrays, but they are rarely used in practice.  
They can be imagined as arrays of arrays of arrays.

Example (3D Array):
```c
int cube[2][2][2] = {
    { {1, 2}, {3, 4} },
    { {5, 6}, {7, 8} }
};
```

---

# Summary

| Concept | Description |
|---------|-------------|
| Array | Collection of similar data stored in contiguous memory |
| Declaration | `int arr[5];` |
| Initialization | `int arr[5] = {1,2,3,4,5};` |
| Types | 1D, 2D, 3D, … |
| Iteration | Using loops (`for`, `while`) to access elements |

✅ Arrays are fundamental in C and form the base for **data structures (stack, queue, matrix, strings, etc.)**.

---
