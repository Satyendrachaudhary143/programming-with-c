
# 📘 Operators in C

## 🔹 What is an Operator?
An **operator** is a **symbol** that tells the compiler to perform a **specific operation** on one or more operands (variables, constants, or values).

👉 Example:
```c
int a = 5, b = 2;
int c = a + b;   // Here + is an operator, a and b are operands
```

---

## 🔹 Types of Operators in C

C language provides many operators. They are grouped into categories:

---

### 1. **Arithmetic Operators**
Used for mathematical calculations.

| Operator | Name             | Example (`a=10, b=5`) | Result |
|----------|------------------|-----------------------|--------|
| `+`      | Addition         | `a + b`               | 15     |
| `-`      | Subtraction      | `a - b`               | 5      |
| `*`      | Multiplication   | `a * b`               | 50     |
| `/`      | Division         | `a / b`               | 2      |
| `%`      | Modulus (remainder) | `a % b`           | 0      |

---

### 2. **Relational Operators**
Used for comparing values. Returns `true (1)` or `false (0)`.

| Operator | Name                  | Example (`a=10, b=5`) | Result |
|----------|-----------------------|-----------------------|--------|
| `==`     | Equal to              | `a == b`              | 0      |
| `!=`     | Not equal to          | `a != b`              | 1      |
| `>`      | Greater than          | `a > b`               | 1      |
| `<`      | Less than             | `a < b`               | 0      |
| `>=`     | Greater than or equal | `a >= b`              | 1      |
| `<=`     | Less than or equal    | `a <= b`              | 0      |

---

### 3. **Logical Operators**
Used to combine conditions.

| Operator | Name  | Example (`a=1, b=0`) | Result |
|----------|-------|-----------------------|--------|
| `&&`     | Logical AND | `a && b`        | 0      |
| `||`     | Logical OR  | `a || b`        | 1      |
| `!`      | Logical NOT | `!a`            | 0      |

---

### 4. **Assignment Operators**
Used to assign values to variables.

| Operator | Meaning            | Example (`a=10`) | Result |
|----------|--------------------|------------------|--------|
| `=`      | Simple assignment  | `b = a`          | 10     |
| `+=`     | Add and assign     | `a += 5`         | 15     |
| `-=`     | Subtract and assign| `a -= 3`         | 7      |
| `*=`     | Multiply and assign| `a *= 2`         | 20     |
| `/=`     | Divide and assign  | `a /= 2`         | 5      |
| `%=`     | Modulus and assign | `a %= 3`         | 1      |

---

### 5. **Increment and Decrement Operators**
Used to increase or decrease a value by 1.

| Operator | Name      | Example (`a=5`) | Result |
|----------|-----------|-----------------|--------|
| `++a`    | Pre-increment  | `++a` | 6 |
| `a++`    | Post-increment | `a++` | 5 (then `a=6`) |
| `--a`    | Pre-decrement  | `--a` | 4 |
| `a--`    | Post-decrement | `a--` | 5 (then `a=4`) |

---

### 6. **Bitwise Operators**
Work at the **bit level** (0s and 1s).

| Operator | Name           | Example (`a=5(0101), b=3(0011)`) | Result |
|----------|----------------|----------------------------------|--------|
| `&`      | Bitwise AND    | `a & b` → `0001` (1)            |
| `|`      | Bitwise OR     | `a | b` → `0111` (7)            |
| `^`      | Bitwise XOR    | `a ^ b` → `0110` (6)            |
| `~`      | Bitwise NOT    | `~a` → Inverts all bits         |
| `<<`     | Left shift     | `a << 1` → `1010` (10)          |
| `>>`     | Right shift    | `a >> 1` → `0010` (2)           |

---

### 7. **Conditional (Ternary) Operator**
Shorthand for `if-else`.

```c
int a = 10, b = 20;
int max = (a > b) ? a : b;   // max = 20
```

---

### 8. **Comma Operator**
Used to separate multiple expressions (evaluates left to right).

```c
int a, b;
a = (1, 2, 3);   // a = 3 (last value assigned)
```

---

### 9. **Sizeof Operator**
Gives the size of a data type or variable (in bytes).

```c
printf("%lu", sizeof(int));  // usually 4
```

---

### 10. **Pointer Operators**
Work with memory addresses.

| Operator | Name             | Example |
|----------|------------------|---------|
| `&`      | Address-of       | `&a` gives address of `a` |
| `*`      | Value-at (dereference) | If `p = &a`, then `*p` gives value of `a` |

---

# ✅ Summary
- **Operators** = Symbols that perform operations.  
- **Types:** Arithmetic, Relational, Logical, Assignment, Increment/Decrement, Bitwise, Conditional, Comma, Sizeof, Pointer.  
- Used to **manipulate data, compare, assign, and control program logic**.
