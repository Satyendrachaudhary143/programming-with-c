C Language Practice — 100 Questions with Full Answers

Topics covered: variables, algorithm, compiler, syntax, data types, escape sequences, const, input, comments.

## Contents

1. Theory Questions (50)
2. Coding Practice (50)

---

## 1. Theory Questions (50) — Questions with Full Answers

### Variables (6)

**Q1. What is a variable in C?**

**Answer:** A variable in C is a named location in memory that stores a value of a specific data type. Each variable has a name (identifier), a data type (like int, float, char), and occupies some memory. You can read from and write to variables during program execution.

**Explanation:** Variables are abstractions that let programmers refer to memory by names rather than addresses. Declaring a variable tells the compiler to allocate space and associate a type with that space.

---

**Q2. Name the rules for naming variables in C.**

**Answer:**
2. They must begin with a letter or underscore, not a digit.
3. C identifiers are case-sensitive (count and Count are different).
4. Reserved keywords (like int, return) cannot be used as variable names.
5. No spaces or special characters (like @, #, $) allowed.

**Explanation:** Following these rules ensures programs compile and behave predictably. Starting with underscore is allowed but leading underscores followed by uppercase letters or another underscore are reserved in some implementations for the compiler/libraries.

---

**Q3. Differentiate between local and global variables.**

**Answer:**
Global variables are declared outside of any function and are accessible from any function in the same file (and possibly other files with extern). They have program lifetime (exist for entire program run).
Local variables are declared inside a function or block and are accessible only within that scope. They have automatic storage duration by default (created when execution enters the block and destroyed when leaving it).

**Explanation:** Use global variables sparingly (can cause coupling and bugs). Local variables are safer for modular code and avoid unintended interactions.

---

**Q4. What is the default value of an uninitialized int variable in C?**

**Answer:** There is no default value for an uninitialized int variable with automatic storage (local variable). Its value is indeterminate (garbage). For variables with static or global storage, the default is 0.

**Explanation:** Reading an uninitialized automatic variable leads to undefined behavior. Always initialize variables before use. Globals and static variables are zero-initialized by the runtime.

---


**Answer:** No. Variable names cannot start with a digit because identifiers must begin with a letter or underscore by the C language grammar. Starting with a digit would be parsed as a numeric literal.

**Explanation:** Example: 2count would be illegal and confuse the lexer/parser.

---

**Q6. Why is memory allocation important for variables?**

**Answer:** Variables require memory to store values. The compiler and runtime must allocate appropriate memory size based on the variable's data type. Proper memory management ensures correct storage, alignment, and program stability.

**Explanation:** Incorrect memory allocation or misuse (like buffer overflow) can corrupt memory and cause undefined behavior.

---

### Algorithm (6)

**Q7. Define an algorithm with an example.**
**Answer:** An algorithm is a step-by-step well-defined procedure for solving a problem. Example: algorithm to find the maximum of two numbers:
1. Read a and b.
2. If a > b, output a; else output b.

**Explanation:** Algorithms should be finite, clear, and correct. They are independent of implementation language.

---

**Q8. List the key characteristics of a good algorithm.**

**Answer:**
1. Correctness — produces the right output for all valid inputs.
2. Finiteness — terminates after a finite number of steps.
3. Efficiency — uses reasonable time and memory.
4. Clarity — easy to understand and implement.
5. Generality — works for a class of problems, not one specific input.

**Explanation:** Efficiency often measured in time complexity (e.g., O(n)) and space complexity.
---

**Q9. What is the difference between an algorithm and a program?**

**Answer:** An algorithm is the abstract step-by-step solution; a program is a concrete implementation of an algorithm in a programming language.

**Explanation:** Multiple programs (in different languages) can implement the same algorithm.

---

**Q10. Write an algorithm to find the largest of three numbers.**

**Answer:**
1. Read numbers a, b, c.
2. Set max = a.
3. If b > max, max = b.
4. If c > max, max = c.
5. Print max.

**Explanation:** Simple linear comparison of three values requires constant time O(1).
---

**Q11. What are flowcharts, and how are they related to algorithms?**

**Answer:** Flowcharts are graphical representations of algorithms using symbols (ovals for start/end, rectangles for operations, diamonds for decisions). They help visualize the control flow and logic of an algorithm.

**Explanation:** Flowcharts are useful for planning and communicating algorithms before coding.

---

**Q12. Why is algorithm analysis important?**

**Answer:** Algorithm analysis estimates the resources (time, memory) an algorithm uses to ensure it's practical for intended input sizes. It helps compare different algorithms and choose the most efficient.

**Explanation:** Big-O notation is a common tool for time complexity analysis.

---

### Compiler (6)

**Q13. What is a compiler?**

**Answer:** A compiler is a program that translates source code (written in a high-level language like C) into machine code (object code) or an intermediate form that can be executed by the computer.

**Explanation:** Compilation involves multiple phases — lexical analysis, syntax analysis, semantic analysis, optimization, code generation, and linking.

---

**Q14. Name three popular C compilers.**

**Answer:**
1. GCC (GNU Compiler Collection)
2. Clang/LLVM
3. MSVC (Microsoft Visual C++)

**Explanation:** Each compiler has different warnings, standards support, and optimizations.

---

**Q15. Differentiate between compiler and interpreter.**

**Answer:**
A compiler translates the whole program into machine code before execution. The output is usually an executable.
An interpreter translates and executes code line-by-line at runtime (e.g., Python interpreter).

**Explanation:** Some systems (like Java) use a mixture (compile to bytecode, then interpreted or JIT compiled).

---

**Q16. What is the role of a linker in compilation?**

**Answer:** The linker combines object files and libraries, resolves symbol references (like function calls across files), and produces an executable or library. It connects compiled modules into a runnable program.

**Explanation:** Linker can be static or dynamic (shared library linking). Missing definitions cause linker errors.

---

**Q17. What happens during lexical analysis in compilation?**

**Answer:** Lexical analysis (lexing) reads source code characters and groups them into tokens like identifiers, keywords, literals, and operators. It removes whitespace and comments. The tokens are input for the parser.

**Explanation:** Errors at this stage include invalid characters or malformed literals.

---

**Q18. Explain the difference between source code and object code.**

**Answer:**
Source code is the human-readable code written by programmers (e.g., program.c).
Object code is the compiled machine code (binary) that the processor executes or that a linker uses to create an executable.

**Explanation:** Object files typically have .o or .obj extensions.

---

### Syntax (6)

**Q19. Define syntax in programming.**

**Answer:** Syntax refers to the rules and structure that define how programs must be written in a language. It covers keywords, punctuation, statement formations, and grammar.

**Explanation:** Syntactic errors (syntax errors) are caught by the compiler before execution.

---

**Q20. What is the syntax to declare an integer variable in C?**

**Answer:**
```c
int x;
int count = 10;
```

**Explanation:** int is the type, x is the identifier, and = with an expression initializes the variable.

---

**Q21. What is a syntax error? Give an example.**

**Answer:** A syntax error is a violation of the language's rules. Example:
```c
int main() {
    printf("Hello") // missing semicolon
}
```
The missing semicolon is a syntax error.

**Explanation:** Compilers detect syntax errors and stop compilation.

---

**Q22. Why is semicolon (;) used in C?**

**Answer:** The semicolon terminates statements in C. It separates sequential statements so the compiler knows where one statement ends.

**Explanation:** Some constructs (like for) use semicolons inside their syntax as separators.

---

**Q23. What is the syntax for a for loop?**

**Answer:**
```c
for (initialization; condition; update) {
    // body
}
```
Example:
```c
for (int i = 0; i < 10; i++) {
    printf("%d\n", i);
}
```

**Explanation:** The initialization runs once, condition is checked each iteration, update runs after each iteration.

---

**Q24. Can we omit the return type in the main() function in modern C?**

**Answer:** No. In standard C (since C89/C90 and later), main must have a return type of int. Historically some old compilers allowed implicit int, but modern standards require int main().

**Explanation:** Use int main(void) or int main(int argc, char *argv[]) and return an integer (commonly 0 for success).

---

### Data Types (6)

**Q25. List all basic data types in C.**

**Answer:** Basic types: char, int, short, long, float, double, and void (as an incomplete type). There are also signed/unsigned variants and long double on many systems.

**Explanation:** Sizes are platform-dependent but common sizes are 1 byte for char, 4 bytes for int, 4 bytes for float, 8 bytes for double on many modern systems.

---

**Q26. What is the difference between float and double?**

**Answer:** float is single-precision floating-point (typically 32-bit), while double is double-precision (typically 64-bit). double provides more precision and larger range.

**Explanation:** Use double for better precision in most calculations. float saves memory but may introduce rounding errors.

---

**Q27. What is the size of char, int, float, and double on most systems?**

**Answer:** Typical sizes on many modern systems (but not guaranteed):
* char: 1 byte (8 bits)
* int: 4 bytes (32 bits)
* float: 4 bytes (32-bit IEEE 754)
* double: 8 bytes (64-bit IEEE 754)

**Explanation:** Always use sizeof(type) to determine exact sizes on a platform.

---

**Q28. What is a void data type?**

**Answer:** void represents the absence of type. It's used for functions that return no value (void func()), or pointers to unspecified data (void *) and for main(void) to indicate no parameters.

**Explanation:** void cannot be used to declare a variable (like void x; is invalid).

---

**Q29. Explain the concept of typecasting with an example.**

**Answer:** Typecasting converts a value from one type to another. Example:
```c
int i = 10;
float f = (float)i / 4; // cast i to float => 2.5
```
Without casting, i/4 does integer division and yields 2.

**Explanation:** Casting changes how the compiler interprets operands and the resulting operations.

---

**Q30. What is the difference between signed and unsigned integers?**

**Answer:**
Signed integers can represent both negative and positive values (e.g., -128 to 127 for signed 8-bit char).
Unsigned integers represent only non-negative values (e.g., 0 to 255 for unsigned 8-bit char) and thus have a larger positive range for the same bit width.

**Explanation:** Use unsigned when negative values are not needed and you want more positive range.

---

### Escape Sequences (6)

**Q31. What is an escape sequence?**

**Answer:** An escape sequence in C is a backslash (\) followed by one or more characters that represent a special character in a string or character literal (e.g., \n for newline).

**Explanation:** Escape sequences let you include characters that are otherwise hard to type or interpret, such as newline, tab, backslash, quotes, etc.

---

**Q32. What does \n do?**

**Answer:** \n represents a newline character. When printed, it moves the cursor to the next line.

**Explanation:** On Unix-like systems it's ASCII LF (Line Feed). On Windows text mode translations may convert \n to CR+LF.

---

**Q33. Give examples of three escape sequences other than \n.**

**Answer:**
1. \t — horizontal tab
2. \\ — backslash character
3. \" — double quote inside a string

**Explanation:** Other sequences include \\', \r, \b, \0 (null), \a (alarm/bell).

---

**Q34. What is the ASCII value of \t?**

**Answer:** The ASCII value of horizontal tab \t is 9 (decimal).

**Explanation:** ASCII control characters include tab (9), newline (10), carriage return (13), etc.

---

**Q35. What happens if we use an unknown escape sequence?**

**Answer:** Using an unknown escape sequence results in implementation-defined behavior or a warning; typically the backslash is ignored and the character is interpreted literally, or the compiler warns. For example, \q is not a standard escape.

**Explanation:** Write portable code using only standard escape sequences.

---

**Q36. Explain the purpose of \\ in C strings.**

**Answer:** \\ is the escape sequence to output a single backslash character \ in a string. Because \ starts an escape, writing \\ tells the compiler to treat it as one literal backslash.

**Explanation:** Example: printf("C:\\Program Files\\"); prints C:\Program Files\.

---

### const (6)

**Q37. What is the purpose of the const keyword in C?**

**Answer:** const marks a variable as read-only after initialization; attempts to modify it produce compile-time errors. It communicates intent and can enable compiler optimizations and safer interfaces.

**Explanation:** Example: const int MAX = 100; — MAX cannot be changed later.

---

**Q38. Can a const variable be modified? Why or why not?**

**Answer:** Directly, no — modifying a const variable is undefined or results in a compile-time error. However, with casts or pointer tricks (casting away const) you can attempt to modify it, which leads to undefined behavior if the object is actually stored in read-only memory.

**Explanation:** Respect const; it's a contract for safety. Casting away const is dangerous.

---

**Q39. Differentiate between #define and const.**

**Answer:**
#define is a preprocessor macro that performs textual substitution before compilation. It has no type and the preprocessor simply replaces tokens.
const creates a typed constant which the compiler can check for type safety.

**Explanation:** const is generally preferred for typed constants. Example:
```c
#define PI_TEXT 3.14
const double PI = 3.14;
```
PI has a type and scope; PI_TEXT is blindly substituted.

---

**Q40. Can const be used with pointers? Explain.**

**Answer:** Yes. There are variations:
* const char *p — pointer to const char: you cannot change the pointed-to char via p, but you can change p to point elsewhere.
* char * const p — constant pointer to char: p cannot point elsewhere but you can modify the pointed char.
* const char * const p — constant pointer to constant char: neither the pointer nor the data it points to can be modified.

**Explanation:** Understanding placement of const relative to * is crucial.

---

**Q41. Write a statement to declare a constant integer with value 100.**

**Answer:**
```c
const int MAX = 100;
```

**Explanation:** This variable must be initialized at declaration if you plan to use it as const.

---

**Q42. Can const variables be initialized later?**

**Answer:** No. const variables must be initialized at the point of definition; otherwise they remain uninitialized and attempting to assign later is illegal.

**Explanation:** const int x; x = 5; is invalid.

---

### Input (4)

**Q43. What is the syntax of scanf()?**

**Answer:** Basic syntax: scanf("format", &var1, &var2, ...); Example: scanf("%d %f", &i, &f); reads an integer and a float.

**Explanation:** Use & operator to pass addresses of variables (except arrays decay to pointers).

---

**Q44. What is the difference between scanf() and gets()?**

**Answer:**
scanf() reads formatted input and stops at whitespace by default for %s.
gets() (now removed from C11) read a whole line until newline and stored it into a buffer without checking bounds — unsafe because of buffer overflow risks.

**Explanation:** Use fgets() instead of gets() for safe line input.

---

**Q45. How do you take a single character input in C?**

**Answer:** Use scanf(" %c", &ch); — note the space before %c to skip preceding whitespace (like newline). Or use getchar() to read the next character from input.

**Explanation:** scanf("%c", &ch); without a leading space may read a leftover newline.

---

**Q46. Why should we avoid using gets() in C?**

**Answer:** Because gets() cannot limit the number of characters read and therefore easily causes buffer overflows; it's removed from the modern standard (C11).

**Explanation:** Use fgets(buffer, size, stdin) instead.

---

### Comments (4)

**Q47. What is the purpose of comments in C?**

**Answer:** Comments document code, explain intent, and help other developers (or your future self) understand design choices. Comments are ignored by the compiler and do not affect program behavior.

**Explanation:** Good comments improve maintainability; excessive or stale comments can mislead.

---

**Q48. Write the syntax of single-line and multi-line comments in C.**

**Answer:** Single-line: // This is a comment (C99 onwards) Multi-line: /* This is a multi-line comment */

**Explanation:** Older C standards used only /* */, while // was adopted in C99.

---

**Q49. Can comments be nested in C?**

**Answer:** No. Traditional C comment syntax /* ... */ cannot be nested. The compiler treats the first */ as the end of the comment. // comments cannot nest either.

**Explanation:** To "comment out" blocks that contain /* */, prefer using conditional compilation #if 0 ... #endif.

---

**Q50. Do comments affect program execution time?**

**Answer:** No. Comments are removed by the compiler during preprocessing or ignored during compilation; they have no effect on runtime performance or the generated executable.

**Explanation:** They slightly increase source code size but not the compiled binary.

---

## 2. Coding Practice Questions (50)

### B. Variables (5 Questions with Full Solutions)

**Q1. Declare three variables of different types and print them.**

**Solution:**
```c
#include <stdio.h>

int main() {
    int number = 42;
    float decimal = 3.14;
    char letter = 'A';
    
    printf("Integer: %d\n", number);
    printf("Float: %.2f\n", decimal);
    printf("Character: %c\n", letter);
    
    return 0;
}
```

**Explanation:**
- We declare three variables of different data types: `int`, `float`, and `char`
- Each variable is initialized with a value
- We use `printf()` with appropriate format specifiers:
  - `%d` for integers
  - `%.2f` for floats (`.2` limits decimal places to 2)
  - `%c` for characters
- The program demonstrates how different data types are declared and printed

---

**Q2. Swap two integer variables without using a third variable.**

**Solution:**
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    
    printf("Before swap: a = %d, b = %d\n", a, b);
    
    // Method 1: Using arithmetic operations
    a = a + b;  // a = 30, b = 20
    b = a - b;  // b = 30 - 20 = 10
    a = a - b;  // a = 30 - 10 = 20
    
    printf("After swap: a = %d, b = %d\n", a, b);
    
    // Alternative Method 2: Using XOR (bitwise operation)
    int x = 15, y = 25;
    printf("Before XOR swap: x = %d, y = %d\n", x, y);
    
    x = x ^ y;  // x = 15 ^ 25
    y = x ^ y;  // y = (15 ^ 25) ^ 25 = 15
    x = x ^ y;  // x = (15 ^ 25) ^ 15 = 25
    
    printf("After XOR swap: x = %d, y = %d\n", x, y);
    
    return 0;
}
```

**Explanation:**
- **Method 1 (Arithmetic):** Uses addition and subtraction to swap values
  - Step 1: `a = a + b` stores the sum in `a`
  - Step 2: `b = a - b` gives us the original value of `a` in `b`
  - Step 3: `a = a - b` gives us the original value of `b` in `a`
- **Method 2 (XOR):** Uses bitwise XOR operation
  - XOR has the property: `(a ^ b) ^ b = a`
  - This method works only for integers and is more efficient
- Both methods avoid using a temporary variable, saving memory

---

**Q3. Store the ASCII value of a character entered by the user.**

**Solution:**
```c
#include <stdio.h>

int main() {
    char character;
    int ascii_value;
    
    printf("Enter a character: ");
    scanf(" %c", &character);  // Note the space before %c to handle whitespace
    
    // Method 1: Direct assignment (implicit conversion)
    ascii_value = character;
    
    // Method 2: Explicit casting
    // ascii_value = (int)character;
    
    printf("Character: %c\n", character);
    printf("ASCII value: %d\n", ascii_value);
    printf("ASCII value in hex: 0x%X\n", ascii_value);
    
    // Demonstrate reverse operation
    printf("Character from ASCII %d: %c\n", ascii_value, ascii_value);
    
    return 0;
}
```

**Explanation:**
- We declare a `char` variable to store the input character and an `int` variable for the ASCII value
- `scanf(" %c", &character)` reads a single character (the space before `%c` skips any leading whitespace)
- When we assign `character` to `ascii_value`, C automatically converts the char to its ASCII integer value
- We can also use explicit casting: `(int)character`
- The program shows the character, its ASCII value in decimal and hexadecimal
- We demonstrate that we can convert back from ASCII value to character

---

**Q4. Demonstrate the difference between signed and unsigned integers.**

**Solution:**
```c
#include <stdio.h>
#include <limits.h>

int main() {
    // Declare signed and unsigned variables
    signed int signed_num = -100;
    unsigned int unsigned_num = 100;
    
    printf("Signed integer: %d\n", signed_num);
    printf("Unsigned integer: %u\n", unsigned_num);
    
    // Demonstrate range differences
    printf("\n--- Range Demonstration ---\n");
    printf("Signed int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int range: 0 to %u\n", UINT_MAX);
    
    // Show what happens with overflow
    printf("\n--- Overflow Demonstration ---\n");
    unsigned int u_max = UINT_MAX;
    printf("Unsigned max: %u\n", u_max);
    u_max = u_max + 1;  // This will wrap around to 0
    printf("After adding 1: %u\n", u_max);
    
    signed int s_max = INT_MAX;
    printf("Signed max: %d\n", s_max);
    s_max = s_max + 1;  // This will wrap around to INT_MIN
    printf("After adding 1: %d\n", s_max);
    
    // Demonstrate negative values
    printf("\n--- Negative Values ---\n");
    signed int negative = -50;
    printf("Signed negative: %d\n", negative);
    
    // Converting negative signed to unsigned (dangerous!)
    unsigned int converted = (unsigned int)negative;
    printf("Converted to unsigned: %u\n", converted);
    printf("This shows why unsigned can be dangerous!\n");
    
    return 0;
}
```

**Explanation:**
- **Signed integers** can represent both positive and negative values
- **Unsigned integers** can only represent non-negative values (0 and positive)
- The range of unsigned integers is larger on the positive side because they don't need to represent negative values
- **Overflow behavior:**
  - Unsigned integers wrap around to 0 when they exceed their maximum
  - Signed integers wrap around to their minimum value when they exceed their maximum
- **Type conversion:** Converting negative signed values to unsigned can lead to unexpected large positive numbers
- Always use the appropriate format specifier: `%d` for signed, `%u` for unsigned

---

**Q5. Increment and decrement a variable and display results.**

**Solution:**
```c
#include <stdio.h>

int main() {
    int number = 10;
    
    printf("Initial value: %d\n", number);
    
    // Pre-increment (++number)
    printf("Pre-increment ++number: %d\n", ++number);
    printf("Value after pre-increment: %d\n", number);
    
    // Post-increment (number++)
    printf("Post-increment number++: %d\n", number++);
    printf("Value after post-increment: %d\n", number);
    
    // Pre-decrement (--number)
    printf("Pre-decrement --number: %d\n", --number);
    printf("Value after pre-decrement: %d\n", number);
    
    // Post-decrement (number--)
    printf("Post-decrement number--: %d\n", number--);
    printf("Value after post-decrement: %d\n", number);
    
    // Demonstrate the difference in expressions
    printf("\n--- Expression Examples ---\n");
    int a = 5, b = 5;
    int result1 = ++a;  // a becomes 6, result1 = 6
    int result2 = b++;  // b becomes 6, result2 = 5
    
    printf("Pre-increment: ++a = %d, a = %d\n", result1, a);
    printf("Post-increment: b++ = %d, b = %d\n", result2, b);
    
    // Show in loops
    printf("\n--- Loop Example ---\n");
    printf("Using pre-increment:\n");
    for(int i = 0; i < 3; ++i) {
        printf("i = %d\n", i);
    }
    
    printf("Using post-increment:\n");
    for(int j = 0; j < 3; j++) {
        printf("j = %d\n", j);
    }
    
    return 0;
}
```

**Explanation:**
- **Pre-increment (`++number`)**: Increments the value first, then returns the new value
- **Post-increment (`number++`)**: Returns the current value first, then increments
- **Pre-decrement (`--number`)**: Decrements the value first, then returns the new value
- **Post-decrement (`number--`)**: Returns the current value first, then decrements
- **Key difference:** In expressions, pre-increment/decrement affects the value before it's used, while post-increment/decrement affects it after
- **In loops:** Both `i++` and `++i` work the same way because the increment happens at the end of the loop iteration
- **Best practice:** Use pre-increment/decrement when you don't need the old value, as it can be slightly more efficient

---


