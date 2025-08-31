# 💬 Comments in C Language

## 🧠 What is a Comment?

A **comment** is a piece of text in your code that is **ignored by the compiler**. It's written for **humans**, not machines. Comments help explain what the code does, why certain decisions were made, or to temporarily disable code during debugging.

---

## ✍️ Types of Comments in C

### 1. **Single-line Comment**
```c
// This is a single-line comment
```
### 2. Multi-line Comment
```c
/* This is a 
   multi-line comment */
   ```


## 🎯 Why Use Comments?
- 	**🧾 Documentation:** Explain complex logic or decisions.
- 	**🛠️ Debugging:** Temporarily disable code without deleting it.
- 	**👥** Collaboration: Help other developers understand your code.
- 	**🧪** Testing: Mark sections for future testing or review.
-  	**📚 Learning:** Useful for beginners to understand step-by-step logic.

## ✅ Advantages of Using Comments
|Advantage  |Description  | 
|------|-----| 
|🧩 Code Clarity  | Makes code easier to read and understand. | 
|🔍 Easier Maintenance | Helps in updating or modifying code later. | 
|👨‍💻 Team Communication  | Facilitates collaboration in multi-developer projects. | 
| 🧪 Debugging Aid | Allows selective disabling of code during troubleshooting. | 
|📘 Educational Value |Helps learners grasp logic and flow more easily.|
--

## 🚫 Best Practices & What to Avoid
- 	❌ Don’t over-comment obvious code ( `is int x = 5; // x is 5 ` redundant).
- 	✅ Keep comments concise and relevant.
- 	✅ Update comments when code changes.
- 	✅ Use comments to explain why, not just what.

### 🧵 Example

```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;

    // Calculate the sum of a and b
    int sum = a + b;

    /* Print the result to the console
       This helps verify the output */
    printf("Sum = %d\n", sum);

    return 0;
}
```

```c 
💡 Tip for Documentation Lovers: Use comments to outline function purposes, parameter roles, and expected outputs. This makes your code self-explanatory and beginner-friendly.

``