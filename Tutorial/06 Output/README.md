# 🖨️ Output in C Language

## 📌 What is Output?

In C, **output** refers to displaying data or results to the user—typically on the screen. This is done using **standard output functions**, most commonly `printf()`.

---

## 🛠️ Output Function: `printf()`

### ✅ Syntax:
```c
printf("format string", values);

```
### ✅ Example:
```c
#include <stdio.h>

int main() {
    int x = 10;
    printf("The value of x is %d\n", x);
    return 0;
}
```
### 🧾 Explanation:
- ` "The value of x is %d\n"
` is the format string.
- `- %d` is a placeholder for an integer.
- `X` is the value to be printed.
- `\n` moves the cursor to the next line.

## 🖥️ Where Does Output Show?
When you run a C program:
-	The output appears in the terminal, command prompt, or console window of your development environment.
-	If you're using an IDE like Code::Blocks, Dev C++, or VS Code, the output shows in the output pane or terminal.
- 	On Linux/macOS, it appears in the shell (e.g., Bash, Zsh).
- 	On Windows, it appears in cmd.exe or PowerShell, depending on how you run the program.

## 🔍 Example Output
For the code above, the output will be:
```c
The value of x is 10
```


### 🧠 Bonus Tip
You can also use:
 - puts("text");	 → simpler output, no format specifiers.
- putchar('A');	 → prints a single character.

