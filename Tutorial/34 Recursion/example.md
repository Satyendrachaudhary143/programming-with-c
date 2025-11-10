# 🔁 Recursion in C (Step-by-Step Explanation)

In C programming, **recursion** is a technique where a function **calls itself** directly or indirectly to solve a problem.

It is a powerful concept used to break complex problems into **smaller, simpler sub-problems**.

---

## 🧠 What Is Recursion?

A **recursive function** is a function that calls itself until a specific **base condition** is met.

Without a base condition, recursion will continue infinitely and cause a **stack overflow error**.

---

## 🧩 Syntax of Recursive Function

```c
return_type function_name(parameters) {
    if (base_condition) {
        // stop recursion
        return value;
    } else {
        // recursive call
        return function_name(modified_parameters);
    }
}
```

---

## 🧮 Example: Factorial Using Recursion

The factorial of a number `n` is defined as:

```
n! = n × (n - 1) × (n - 2) × ... × 1
```

And mathematically:

```
n! = n × (n - 1)!
```

with the base condition:

```
0! = 1
```

---

### ✅ C Program

```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1; // base condition
    } else {
        return n * factorial(n - 1); // recursive call
    }
}

int main() {
    int num = 5;
    int result = factorial(num);
    printf("Factorial of %d is %d\n", num, result);
    return 0;
}
```

---

## 🪜 Step-by-Step Execution for `factorial(5)`

Let’s trace what happens **step by step**:

| Step | Function Call | Operation | Return Value |
|------|----------------|------------|---------------|
| 1 | `factorial(5)` | → 5 × factorial(4) | waits for factorial(4) |
| 2 | `factorial(4)` | → 4 × factorial(3) | waits for factorial(3) |
| 3 | `factorial(3)` | → 3 × factorial(2) | waits for factorial(2) |
| 4 | `factorial(2)` | → 2 × factorial(1) | waits for factorial(1) |
| 5 | `factorial(1)` | → 1 × factorial(0) | waits for factorial(0) |
| 6 | `factorial(0)` | Base case → returns 1 | returns 1 |

Now the **return process begins** (unwinding the recursion stack):

| Returning From | Expression | Result |
|----------------|-------------|---------|
| factorial(1) | 1 × 1 | = 1 |
| factorial(2) | 2 × 1 | = 2 |
| factorial(3) | 3 × 2 | = 6 |
| factorial(4) | 4 × 6 | = 24 |
| factorial(5) | 5 × 24 | = 120 |

✅ Final Output → `Factorial of 5 is 120`

---

## 🧩 How It Works in Memory (Stack Behavior)

Each function call is **pushed onto the call stack** until it reaches the base case.  
Then, results are **returned (popped)** one by one in reverse order.

```
factorial(5)
 └── factorial(4)
      └── factorial(3)
           └── factorial(2)
                └── factorial(1)
                     └── factorial(0)
```

When the base case returns `1`, the recursion starts **unwinding** upward:
```
factorial(1) → 1 × 1 = 1  
factorial(2) → 2 × 1 = 2  
factorial(3) → 3 × 2 = 6  
factorial(4) → 4 × 6 = 24  
factorial(5) → 5 × 24 = 120
```

---

## ⚠️ Important Points

- Every recursion must have a **base case**.  
- Each recursive call adds a new **stack frame**.  
- If base case is missing → program will crash (infinite recursion).  
- Recursive solutions are elegant but may use **more memory** than loops.  

---

## 🧮 Another Example: Fibonacci Series Using Recursion

```c
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n = 6;
    printf("Fibonacci sequence up to %d terms:\n", n);
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
```

Output:
```
Fibonacci sequence up to 6 terms:
0 1 1 2 3 5
```

---

## 📌 Summary

| Concept | Description |
|----------|--------------|
| **Recursion** | Function calling itself |
| **Base Case** | Condition to stop recursion |
| **Recursive Case** | Function calls itself with smaller input |
| **Stack Behavior** | Each call stored in memory until base case |
| **Example** | Factorial, Fibonacci, Tower of Hanoi, etc. |

---

✅ **In simple words:**  
Recursion works by solving **smaller versions of the same problem** repeatedly until it reaches the **simplest form (base case)** — then it builds the final answer as it returns.

---
