# Strings in C

In C programming, a **string** is a sequence of characters terminated by a special character **`'\0'` (null character)**.  
Unlike some languages, **C does not have a built-in string type**. Instead, strings are represented as arrays of `char`.

---

## 1. Declaration of Strings

### Syntax:
```c
char str[size];
```

### Example:
```c
char name[10];   // Declares a string of size 10
```
### 2. Initialization of Strings
### Method 1: Character Array
```c
char str[6] = {'H','e','l','l','o','\0'};
```
### Method 2: String Literal
```c
char str[] = "Hello";   // Automatically adds '\0'
```
### 3. Input and Output of Strings
####  (a) Using scanf (⚠️ Stops at space)
```c
#include <stdio.h>
int main() {
    char name[20];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Hello %s", name);
    return 0;
}
```

#### (b) Using gets() (⚠️ Deprecated, unsafe)
```c
char str[50];
gets(str);
```

#### (c) Using fgets() (Safe)
```c
#include <stdio.h>
int main() {
    char name[50];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);
    printf("Hello %s", name);
    return 0;
}
```

#### 4. Strings as Arrays vs Pointers
```c
char str1[] = "Hello";     // Stored in array, modifiable
char *str2 = "World";      // Stored in string literal, read-only
```

#### 5. Common String Functions (string.h)

#### C provides many string-handling functions in <string.h>.
|Function|	Purpose	| Example|
|---|---|---|
|strlen(s)|	Returns length of string|	strlen("Hello") → 5|
|strcpy(dest, src)|	Copies string	|strcpy(a, b);|
|strncpy(dest, src, n)|	Copies first n chars|	
|strcat(dest, src)|	Concatenates strings|	
|strncat(dest, src, n)|	Concatenates n chars|	
|strcmp(s1, s2)|	Compares strings (0 = equal)	
|strncmp(s1, s2, n)	|Compares first n chars	
|strchr(s, ch)|	Finds first occurrence of char	
|strrchr(s, ch)|	Finds last occurrence of char	
|strstr(s1, s2)	|Finds substring	
|strtok(s, delim)|	Splits string using delimiter	
### 6. Examples of String Functions
### (a) Find Length
```c
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "Hello";
    printf("Length = %lu", strlen(str));
    return 0;
}
```
### (b) Copy String
```c
#include <stdio.h>
#include <string.h>
int main() {
    char s1[20], s2[20] = "World";
    strcpy(s1, s2);
    printf("Copied String: %s", s1);
    return 0;
}
```

### (c) Concatenation
```c
#include <stdio.h>
#include <string.h>
int main() {
    char s1[20] = "Hello ";
    char s2[] = "World";
    strcat(s1, s2);
    printf("Concatenated: %s", s1);
    return 0;
}
```

### (d) Comparison
```c
#include <stdio.h>
#include <string.h>
int main() {
    char a[] = "abc";
    char b[] = "xyz";
    if (strcmp(a, b) == 0)
        printf("Strings are equal");
    else
        printf("Strings are different");
    return 0;
}
```
### 7. Manual String Operations (Without <string.h>)
### (a) Find Length
```c
int length = 0;
while(str[length] != '\0') {
    length++;
}
```

### (b) Copy String
```c
for(int i=0; s2[i] != '\0'; i++) {
    s1[i] = s2[i];
}
s1[i] = '\0';
```
### 8. Array of Strings (2D Char Array)
```c
#include <stdio.h>
int main() {
    char fruits[3][10] = {"Apple", "Mango", "Banana"};
    
    for (int i = 0; i < 3; i++) {
        printf("%s\n", fruits[i]);
    }
    return 0;
}
```
### 9. Advanced: String with strtok() (Tokenization)
```c
#include <stdio.h>
#include <string.h>
int main() {
    char str[] = "C,Java,Python";
    char *token = strtok(str, ",");
    
    while (token != NULL) {
        printf("%s\n", token);
        token = strtok(NULL, ",");
    }
    return 0;
}
```

### Output:
```c
C
Java
Python
```
### Summary

- Strings in C are char arrays ending with \0.

- Declared as: char str[20]; or char *ptr = "Hello";

- Input/output with: scanf, fgets

- Important functions: strlen, strcpy, strcat, strcmp, strchr, strtok

- Advanced usage: array of strings, tokenization, manual operations

✅ Strings are widely used in handling text, files, and data structures.