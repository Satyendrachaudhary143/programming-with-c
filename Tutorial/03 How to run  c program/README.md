# 🧠 Understanding C Program Execution Flow

---

## 📁 1. Source File (`.c`)

- This is the file where you write your C code.
- It contains human-readable instructions written in the C language.
- Example: `hello.c`

```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```
## ⚙️ 2. Compilation
- The source file is compiled by a C compiler (like gcc, clang, or tcc).
- The compiler translates the .c file into machine code that your computer can execute.
- This process checks for syntax errors and generates an object file (.o or .obj) as an intermediate step.
```c
gcc hello.c -o hello
```


- hello.c: Source file
- -o hello: Output file name (executable)

## 🔧 3. Executable File (.exe on Windows, no extension on Linux/macOS)
- This is the final product of compilation.
- It contains binary machine code.
- You can run this file directly on your system.
```
./hello   # On Linux/macOS
hello.exe # On Windows
```


## 🧩 Summary of File Types


 | File Type | Extension | Description | 
 |-----------|-----------|-------------|
| Source File | .c | Human-readable C code | 
| Header File | .h | Contains declarations used in .c files | 
| Object File | .o/.obj | Intermediate machine code (not executable) | 
| Executable File | .exe/none | Final binary that runs on your system | 


## 🛠️ Tools You Can Use
| Tool | Purpose | Command Example |
|------|---------|-----------------| 
| gcc | GNU Compiler Collection | gcc hello.c -o hello | 
| clang | LLVM-based compiler | clang hello.c -o hello | 
| tcc | Tiny C Compiler (lightweight) | tcc -o hello hello.c | 



## 🧪 Optional: Step-by-Step Compilation
If you want to see intermediate steps:
gcc -c hello.c      # Generates hello.o (object file)
gcc hello.o -o hello # Links object file to create executable



## 🧵 Behind the Scenes
- Preprocessing: Handles #include, #define, etc.
- Compilation: Converts code to assembly.
- Assembly: Converts assembly to machine code.
- Linking: Combines object files and libraries into executable.


