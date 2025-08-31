## Structure of a C Program (With Full Explanation)

A basic C program has a specific structure. Here’s a simple example and a detailed explanation of each part:

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

### 1. `#include <stdio.h>`
- This is a **preprocessor directive**.
- `#include` tells the compiler to include the contents of another file before actual compilation starts.
- `<stdio.h>` stands for **Standard Input Output Header** file. It contains functions for input and output, like `printf()` and `scanf()`.
- Without including this file, you cannot use standard input/output functions in your program.

### 2. `int main()`
- Every C program must have a `main` function. This is where the program starts executing.
- `int` means the function returns an integer value to the operating system when the program ends.
- The parentheses `()` can contain arguments, but for beginners, you can leave them empty.

### 3. `{ ... }` (Curly Braces)
- Curly braces define the **body** of the function.
- All statements inside `{}` are part of the `main` function and will be executed.

### 4. `printf("Hello, World!\n");`
- `printf` is a function used to print text to the screen.
- The text inside quotes is what will be displayed.
- `\n` is a newline character (moves the cursor to the next line).
- Every statement in C ends with a semicolon `;`.

### 5. `return 0;`
- This statement ends the `main` function and returns the value `0` to the operating system.
- Returning 0 usually means the program ran successfully.

---

## How C Code is Converted to Low-Level (Compilation Process)

1. **Writing the Code:**
   - You write your C code in a text editor and save it with a `.c` extension.
2. **Preprocessing:**
   - The preprocessor handles lines starting with `#` (like `#include`). It includes header files and processes macros.
3. **Compilation:**
   - The compiler translates your C code into assembly code (a low-level language).
4. **Assembly:**
   - The assembler converts the assembly code into machine code (binary instructions).
5. **Linking:**
   - The linker combines your code with code from libraries (like the code for `printf` in `stdio.h`) to create an executable file.
6. **Execution:**
   - You run the executable file, and the computer performs the instructions you wrote.

### Diagram: C Program Compilation Flow
- Source Code (`.c`) → Preprocessor → Compiler → Assembler → Linker → Executable File

---

