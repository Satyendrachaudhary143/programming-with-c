# 📚 Array of Strings in C

In C programming, an **array of strings** is a way to store multiple text values (character arrays) together. Since C doesn't have a built-in `string` type like some other languages, strings are represented as arrays of characters terminated by a null character (`'\0'`).

---

## 🧠 What Is an Array of Strings?

An array of strings is essentially a **2D character array** or an **array of character pointers**, where each element represents a separate string.

---

## ✅ Syntax Options

### 🟩 1. Using a 2D Character Array (Fixed Size Strings)

```c
char names[3][20] = {
    "Aman",
    "Raman",
    "Ram"
};
```

➡️ `names[3][20]` means 3 strings, each up to 19 characters + `'\0'`  
➡️ Memory is **statically allocated**  
➡️ Strings **can be modified**

---

### 🟦 2. Using an Array of Pointers (Flexible Size)

```c
const char *names[] = {
    "Aman",
    "Raman",
    "Ram"
};
```

➡️ Each element is a **pointer to a string literal**  
➡️ More **memory-efficient**  
➡️ Strings are **read-only** (cannot be modified)

---

## 🔍 Accessing Strings

You can access individual strings using indexing:

```c
printf("%s\n", names[0]);  // prints "Aman"
```

You can also loop through the array:

```c
for (int i = 0; i < 3; i++) {
    printf("Name %d: %s\n", i + 1, names[i]);
}
```

---

## 🧪 Example: User Input into Array of Strings

```c
#include <stdio.h>
#include <string.h>

int main() {
    char names[3][50];

    for (int i = 0; i < 3; i++) {
        printf("Enter name %d: ", i + 1);
        fgets(names[i], sizeof(names[i]), stdin);
        names[i][strcspn(names[i], "\n")] = '\0'; // Remove newline
    }

    printf("\nYou entered:\n");
    for (int i = 0; i < 3; i++) {
        printf("%s\n", names[i]);
    }

    return 0;
}
```

---

## 🧠 Memory Comparison

| Feature | 2D Array (`char arr[][]`) | Pointer Array (`char *arr[]`) |
|----------|---------------------------|-------------------------------|
| **Memory Allocation** | Fixed | Dynamic (more flexible) |
| **Modifiable Strings** | ✅ Yes | ❌ No (string literals) |
| **Memory Efficient** | ❌ No | ✅ Yes |
| **Suitable for Input** | ✅ Yes | ❌ No (unless dynamically allocated) |

---

## ⚠️ Common Mistakes

- ❌ Forgetting the null terminator `'\0'`  
- ❌ Using `fgets()` without removing newline  
- ❌ Trying to modify string literals in pointer arrays  
- ❌ Not allocating enough space for each string in 2D arrays  

---

## ✅ Best Practices

- Use **2D arrays** when you need to modify strings or take input  
- Use **pointer arrays** for static, read-only string lists  
- Always **validate input** and handle newline characters  
- Prefer `fgets()` over `scanf("%s")` for safer input  

---

## 📌 Summary

- Strings in C are **arrays of characters**  
- **Array of strings** = multiple character arrays  
- Choose between **2D arrays** and **pointer arrays** based on your use case  
- Handle **memory and input carefully** to avoid bugs  

---
