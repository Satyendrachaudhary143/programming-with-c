# 🧭 Pointers in C 

Pointers are one of the most powerful (and sometimes confusing) features of the C language.  
A **pointer** is a variable that **stores the memory address** of another variable.

This guide explains pointers from basics to advanced pointer types with clear examples and step-by-step explanation.

---

## 🔹 Table of Contents

1. What is a Pointer? (Basic idea)  
2. Pointer Syntax: declare, assign, dereference  
3. `NULL` and uninitialized pointers  
4. Pointer arithmetic  
5. Pointers and arrays — differences and relationships  
   - Array name as pointer  
   - Pointer to array (`int (*p)[N]`)  
   - Array of pointers (`char *arr[]`)  
   - Pointer to first element (`int *p = arr;`)  
6. Pointer to pointer (`T **`)  
7. Function pointers  
8. `void *` (generic pointer)  
9. `const` with pointers (`const T *`, `T * const`, `const T * const`)  
10. Dynamic memory and pointers (`malloc`, `free`)  
11. Common mistakes & best practices  
12. Summary

---

## 1. What is a Pointer?

- A pointer holds the **address** of another variable.
- If `int x = 10;`, a pointer to `x` would hold the memory address where `x` is stored.

### Example

```c
int x = 10;
int *p = &x; // p stores the address of x
```

- `&x` → address of `x`  
- `int *p` → `p` is a pointer to an `int`  
- `*p` → value at the address (dereference). `*p` is `10` here.

---

## 2. Pointer Syntax: declare, assign, dereference

```c
int a = 5;
int *p;    // declaration
p = &a;    // assign address
printf("%d\n", *p); // dereference -> prints 5

// You can change the value via pointer
*p = 20;   // now a == 20
```

Important: `*` in declaration (`int *p`) means "p is a pointer to int". In expressions `*p` means "value pointed by p".

---

## 3. `NULL` and Uninitialized Pointers

- Always initialize pointers. Uninitialized pointers contain garbage addresses.
- Use `NULL` for pointer that points to nothing:

```c
int *p = NULL;
if (p != NULL) {
    // safe to dereference
}
```

Never dereference a `NULL` or uninitialized pointer — causes crash.

---

## 4. Pointer Arithmetic

Pointer arithmetic moves in units of the pointed type size.

```c
int arr[3] = {10, 20, 30};
int *p = arr;      // same as &arr[0]
p++;               // now points to arr[1]
printf("%d\n", *p); // prints 20
```

- `p + 1` advances `sizeof(int)` bytes.
- Valid pointer arithmetic: add/subtract integers, subtract pointers (same array), compare pointers within same array.

---

## 5. Pointers and Arrays — Relationships & Differences

### 5.1 Array name acts like a pointer to first element

```c
int arr[5];
int *p = arr;  // arr decays to &arr[0]
```

But `arr` is not a variable — you cannot assign to `arr` (`arr = p` is invalid).

### 5.2 Pointer to first element (`int *p`)

```c
int arr[3] = {1,2,3};
int *p = arr; // p == &arr[0]
```

Use `p[i]` just like `arr[i]`.

### 5.3 Array of pointers (`char *arr[]`)

An **array of pointers** stores multiple pointers (often to different strings).

```c
const char *words[] = {"apple", "banana", "cherry"};
// words[0] is a pointer to "apple"
```

Useful when strings have different lengths.

### 5.4 Pointer to array (`int (*p)[N]`)

A **pointer to an array** holds address of the whole array (useful for multi-dimensional arrays).

```c
int matrix[3][4];
int (*p)[4] = matrix; // p points to an array of 4 ints
// p + 1 moves to next row (4 ints ahead)
```

Note: `int (*p)[4]` is not the same as `int *p`.

---

## 6. Pointer to Pointer (`T **`)

A pointer that stores address of another pointer.

```c
int x = 5;
int *p = &x;
int **pp = &p;

printf("%d\n", **pp); // prints 5
```

Commonly used for dynamic 2D arrays or functions that modify caller’s pointer (e.g., `void func(int **p)`).

---

## 7. Function Pointers

Pointers can store addresses of functions.

```c
int add(int a, int b) { return a + b; }

int (*fp)(int, int) = add; // fp points to add
int res = fp(2, 3);        // call via fp -> 5
```

Useful for callbacks and implementing function tables.

---

## 8. `void *` — Generic Pointer

`void *` can point to any data type but cannot be directly dereferenced without casting.

```c
int x = 10;
void *vp = &x;
int *ip = (int *)vp;
printf("%d\n", *ip); // prints 10
```

Commonly used in generic APIs (e.g., `malloc` returns `void *`).

---

## 9. `const` with Pointers

- `const T *p` : pointer to const T — you cannot change `*p` through `p`.
- `T * const p` : const pointer — pointer value cannot change (but `*p` can).
- `const T * const p` : pointer is const and points to const data.

Examples:

```c
const int *p1; // *p1 cannot be changed via p1
int * const p2 = &x; // p2 always points to same address
const int * const p3 = &x; // both pointer and data are const
```

---

## 10. Dynamic Memory and Pointers (`malloc`, `free`)

Heap memory is managed manually in C.

```c
#include <stdlib.h>

int *p = malloc(5 * sizeof(int)); // allocate array of 5 ints
if (p == NULL) { /* handle error */ }
p[0] = 10;
free(p); // release memory when done
```

Always `free` what you `malloc`. Avoid memory leaks and double-free.

---

## 11. Common Mistakes & Best Practices

**Mistakes**
- Dereferencing `NULL` or uninitialized pointer → crash.
- Writing past allocated memory → undefined behavior.
- Freeing memory twice → undefined behavior.
- Mixing pointer types without proper cast (dangerous).

**Best Practices**
- Initialize pointers (set to `NULL` if no address).
- After `free(p)`, set `p = NULL`.
- Use `sizeof(*p)` when allocating: `p = malloc(n * sizeof *p);`
- Prefer `const` when you don't want to modify data.
- Check `malloc` return value.
- Keep pointer ownership clear (who frees memory?).

---

## 12. Examples — Quick Reference

### Example: Pointer to array (2D row pointer)

```c
int matrix[2][3] = { {1,2,3}, {4,5,6} };
int (*row)[3] = matrix; // pointer to array of 3 ints
printf("%d\n", row[1][2]); // prints 6
```

### Example: Array of pointers (strings)

```c
const char *names[] = {"Alice", "Bob", "Charlie"};
printf("%s\n", names[2]); // prints Charlie
```

### Example: Pointer to pointer (dynamic 2D)

```c
int rows = 3, cols = 4;
int **mat = malloc(rows * sizeof *mat);
for (int i = 0; i < rows; ++i) {
    mat[i] = malloc(cols * sizeof *mat[i]);
}
// use mat[i][j]
for (int i = 0; i < rows; ++i) free(mat[i]);
free(mat);
```

---

## ✅ Summary

- Pointer = stores **address** of variable.  
- Use `&` to get address, `*` to dereference.  
- Arrays and pointers are closely related but not identical.  
- Know `void *`, function pointers, pointer-to-array, array-of-pointers, and pointer-to-pointer.  
- Always initialize pointers, manage memory carefully, and prefer `const` when appropriate.

---

