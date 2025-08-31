# 🔄 Recursion in C

## 📌 What is Recursion?
**Recursion** in C is a process where a function calls itself directly or indirectly to solve a problem.  
It works by breaking a big problem into smaller sub-problems until a base condition (stopping point) is reached.

👉 Every recursive function must have:
1. **Base case** → The condition where recursion stops.
2. **Recursive case** → The part where the function calls itself.

---

## 🎯 Why Do We Need Recursion?
- To solve problems that are **naturally hierarchical** (e.g., tree, graph).
- To break complex problems into **simpler sub-problems**.
- Useful in tasks like **factorial, Fibonacci, searching, sorting, backtracking, tree traversals**.

---

## ✅ Advantages of Recursion
- Code becomes **cleaner** and more **readable** for problems that are recursive by nature.
- Reduces complex loops and makes problem-solving **elegant**.
- Helpful for problems like **divide & conquer** algorithms (Merge Sort, Quick Sort).

---

## ❌ Disadvantages of Recursion
- Uses **more memory** (stack frames for each function call).
- May lead to **stack overflow** if recursion is too deep.
- Often **slower** compared to iteration due to repeated function calls.

---

# 🔹 Examples of Recursion in C

---

## 1️⃣ Factorial of a Number
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0)  // Base case
        return 1;
    return n * factorial(n - 1);  // Recursive case
}

int main() {
    int num = 5;
    printf("Factorial of %d = %d", num, factorial(num));
    return 0;
}
```
👉 Output: `Factorial of 5 = 120`

---

## 2️⃣ Fibonacci Series
```c
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0) return 0;  // Base case
    if (n == 1) return 1;
    return fibonacci(n-1) + fibonacci(n-2); // Recursive case
}

int main() {
    int i;
    for (i = 0; i < 7; i++) {
        printf("%d ", fibonacci(i));
    }
    return 0;
}
```
👉 Output: `0 1 1 2 3 5 8`

---

## 3️⃣ Sum of Natural Numbers
```c
#include <stdio.h>

int sum(int n) {
    if (n == 0)  // Base case
        return 0;
    return n + sum(n - 1);  // Recursive case
}

int main() {
    int n = 5;
    printf("Sum of first %d numbers = %d", n, sum(n));
    return 0;
}
```
👉 Output: `Sum of first 5 numbers = 15`

---

## 4️⃣ Reverse a String
```c
#include <stdio.h>
#include <string.h>

void reverse(char str[], int i, int n) {
    if (i == n) return;  // Base case
    reverse(str, i+1, n);  // Recursive call
    printf("%c", str[i]);
}

int main() {
    char str[] = "CProgramming";
    reverse(str, 0, strlen(str));
    return 0;
}
```
👉 Output: `gnimmargorPC`

---

## 5️⃣ Tower of Hanoi
```c
#include <stdio.h>

void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 0) return;  // Base case
    towerOfHanoi(n - 1, from, aux, to);  // Move n-1 disks
    printf("Move disk %d from %c to %c\n", n, from, to);
    towerOfHanoi(n - 1, aux, to, from);  // Move n-1 disks
}

int main() {
    int n = 3;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
```
👉 Output:
```
Move disk 1 from A to C
Move disk 2 from A to B
Move disk 1 from C to B
Move disk 3 from A to C
Move disk 1 from B to A
Move disk 2 from B to C
Move disk 1 from A to C
```

---

# 📝 Summary
- **Recursion** = Function calling itself.
- Needs **base case** to stop infinite calls.
- Useful for problems like factorial, Fibonacci, sum, string reversal, Tower of Hanoi.
- **Pros**: Clean, elegant, easier for tree/graph problems.  
- **Cons**: Memory heavy, slower, may cause stack overflow.