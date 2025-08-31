# 🔄 Recursion vs Iteration in C

## 📌 Recursion
- A function calling itself directly or indirectly.  
- Problem is solved by breaking it into **smaller sub-problems** until a base case is reached.  
- Uses **function call stack** to keep track of each recursive call.  

### ✅ Advantages
- Code is **simpler** and **easier to understand** for problems like factorial, Fibonacci, tree traversal.  
- Natural fit for problems with recursive structure.  

### ❌ Disadvantages
- Slower due to repeated function calls.  
- Consumes more memory (stack frames).  
- Risk of **stack overflow** if base case is missing.  

### Example (Factorial using Recursion)
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;  // Base case
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    printf("Factorial of 5 = %d", factorial(5));
    return 0;
}
```

👉 Output: `Factorial of 5 = 120`

---

## 📌 Iteration
- A process of repeatedly executing a block of code using **loops** (`for`, `while`, `do-while`).  
- Problem is solved step by step until a condition fails.  
- Uses **loop control statements** instead of stack.  

### ✅ Advantages
- Faster execution (no extra function calls).  
- Efficient in terms of memory.  
- Suitable for repetitive tasks.  

### ❌ Disadvantages
- Code may become **longer** and less intuitive for recursive problems.  
- Difficult to apply on problems naturally recursive (like tree traversal).  

### Example (Factorial using Iteration)
```c
#include <stdio.h>

int factorial(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    printf("Factorial of 5 = %d", factorial(5));
    return 0;
}
```

👉 Output: `Factorial of 5 = 120`

---

# 📝 Comparison Table: Recursion vs Iteration

| Feature              | Recursion                              | Iteration                           |
|----------------------|----------------------------------------|-------------------------------------|
| **Definition**       | Function calls itself                  | Repeats using loops                 |
| **Termination**      | Base case                              | Loop condition                      |
| **Memory Usage**     | High (stack frames for each call)      | Low (single loop control variable)  |
| **Speed**            | Slower due to overhead                 | Faster                              |
| **Code Readability** | Shorter, elegant for recursive problems| Longer, may be less intuitive       |
| **Risk**             | Stack overflow if no base case         | Infinite loop if no proper condition|
| **Best For**         | Factorial, Fibonacci, Tree Traversal   | Multiplication tables, array iteration |

---

# 🎯 Summary
- **Recursion** = Elegant, natural for hierarchical problems, but memory-heavy.  
- **Iteration** = Faster, memory-efficient, but less intuitive for recursive problems.  
- Both can often solve the same problem, but the choice depends on **problem type** and **performance needs**.