# 📦 Passing Arrays to Functions in C

## 📌 Why Pass Arrays to Functions?
- Arrays allow storing multiple values under a single variable.  
- Sometimes we need to **process arrays inside functions** (e.g., sum, search, sort).  
- In C, arrays are always passed **by reference** (function receives the memory address of the first element).  
- So, any modification inside the function affects the **original array**.

---

## 🔹 Syntax
```c
return_type function_name(data_type array_name[], int size);
```
OR
```c
return_type function_name(data_type *array_name, int size);
```

Both forms are valid (because array name acts as a pointer).

---

## 1️⃣ Example: Printing Array Elements
```c
#include <stdio.h>

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int size = 5;
    printArray(numbers, size);
    return 0;
}
```

👉 Output:
```
10 20 30 40 50
```

---

## 2️⃣ Example: Modifying Array Inside Function
```c
#include <stdio.h>

void modifyArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = arr[i] * 2; // modify original array
    }
}

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int size = 5;

    modifyArray(numbers, size);

    // printing modified array
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    return 0;
}
```

👉 Output:
```
2 4 6 8 10
```

⚡ Notice: The **original array is changed** because arrays are passed by reference.

---

## 3️⃣ Example: Finding Sum of Array Elements
```c
#include <stdio.h>

int sumArray(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int numbers[] = {5, 10, 15, 20};
    int size = 4;

    int result = sumArray(numbers, size);
    printf("Sum of array elements = %d", result);
    return 0;
}
```

👉 Output:
```
Sum of array elements = 50
```

---

## 4️⃣ Example: Passing 2D Array to Function
```c
#include <stdio.h>

void printMatrix(int arr[3][3], int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printMatrix(matrix, 3, 3);
    return 0;
}
```

👉 Output:
```
1 2 3
4 5 6
7 8 9
```

---

# 📝 Key Points
- Arrays in C are passed **by reference**, not by value.  
- Any changes inside the function will **affect the original array**.  
- You can pass arrays to functions:
  - **1D arrays** → as `arr[]` or `*arr`.  
  - **2D arrays** → must specify column size, e.g., `arr[][3]`.  
- Passing arrays makes functions reusable for **searching, sorting, matrix operations, etc.**

---

# 🎯 Summary
- Arrays can be passed to functions using their **name** (which acts as a pointer).  
- Functions can **read and modify** array elements.  
- Works for **1D, 2D, and multi-dimensional arrays**.