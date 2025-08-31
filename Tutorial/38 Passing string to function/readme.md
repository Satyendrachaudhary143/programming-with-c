# 📦 Passing Strings to Functions in C

## 📌 Why Pass Strings?
- A **string in C** is an array of characters ending with a **null character `'\0'`**.  
- Just like normal arrays, strings can be **passed to functions** for processing.  
- Since arrays are passed **by reference**, modifications inside the function affect the original string.

---

## 🔹 Syntax
```c
return_type function_name(char str[]);
```
OR
```c
return_type function_name(char *str);
```

Both are valid, because **string name acts as a pointer** to the first character.

---

## 1️⃣ Example: Printing a String
```c
#include <stdio.h>

void printString(char str[]) {
    printf("String: %s\n", str);
}

int main() {
    char name[] = "Hello C";
    printString(name);
    return 0;
}
```

👉 Output:
```
String: Hello C
```

---

## 2️⃣ Example: Modifying String Inside Function
```c
#include <stdio.h>

void toUpperCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32; // convert lowercase → uppercase
        }
    }
}

int main() {
    char text[] = "welcome";
    toUpperCase(text);
    printf("Modified String: %s\n", text);
    return 0;
}
```

👉 Output:
```
Modified String: WELCOME
```

⚡ Notice: The original string was **modified** because it was passed by reference.

---

## 3️⃣ Example: Finding String Length (Custom `strlen`)
```c
#include <stdio.h>

int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    char word[] = "Programming";
    int len = stringLength(word);
    printf("Length of string = %d", len);
    return 0;
}
```

👉 Output:
```
Length of string = 11
```

---

## 4️⃣ Example: Concatenating Two Strings
```c
#include <stdio.h>

void concatenate(char str1[], char str2[]) {
    int i = 0, j = 0;

    // Move to end of first string
    while (str1[i] != '\0') {
        i++;
    }

    // Append second string
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0'; // add null terminator
}

int main() {
    char str1[50] = "Hello ";
    char str2[] = "World!";

    concatenate(str1, str2);
    printf("Concatenated String: %s", str1);
    return 0;
}
```

👉 Output:
```
Concatenated String: Hello World!
```

---

## 5️⃣ Example: Passing String as Pointer
```c
#include <stdio.h>

void printCharacters(char *str) {
    while (*str != '\0') {
        printf("%c ", *str);
        str++;
    }
}

int main() {
    char name[] = "C Language";
    printCharacters(name);
    return 0;
}
```

👉 Output:
```
C   L   a   n   g   u   a   g   e
```

---

# 📝 Key Points
- Strings in C are **character arrays** ending with `'\0'`.  
- Strings are passed to functions **by reference**.  
- You can:
  - Read strings  
  - Modify strings  
  - Perform operations like **length, copy, concatenate, reverse, etc.**  
- Function can use either:
  - `char str[]`  
  - `char *str`

---

# 🎯 Summary
- Passing strings to functions is similar to passing arrays.  
- Any modifications made inside the function will affect the **original string**.  
- Very useful for building custom functions like `strlen()`, `strcpy()`, `strcat()`, etc.