# Operator Precedence and Associativity 

In C, when an expression contains multiple operators, the **precedence** and **associativity** rules determine the order of evaluation.

- **Precedence**: Defines the priority of operators.
- **Associativity**: Defines the direction of evaluation (left-to-right or right-to-left).

---

## Operator Precedence and Associativity Table

| Precedence Level | Operators | Description | Associativity |
|------------------|-----------|-------------|---------------|
| 1 (highest) | `()` `[]` `->` `.` | Function call, Array subscripting, Structure/union member, Structure pointer member | Left to Right |
| 2 | `++` `--` (postfix) | Post-increment, Post-decrement | Left to Right |
| 3 | `++` `--` (prefix), `+` (unary), `-` (unary), `!`, `~`, `*` (dereference), `&` (address), `sizeof`, `(type)` (typecast) | Unary operators | Right to Left |
| 4 | `*` `/` `%` | Multiplication, Division, Modulus | Left to Right |
| 5 | `+` `-` | Addition, Subtraction | Left to Right |
| 6 | `<<` `>>` | Bitwise Shift (Left, Right) | Left to Right |
| 7 | `<` `<=` `>` `>=` | Relational operators | Left to Right |
| 8 | `==` `!=` | Equality, Inequality | Left to Right |
| 9 | `&` | Bitwise AND | Left to Right |
| 10 | `^` | Bitwise XOR | Left to Right |
| 11 | `\|` | Bitwise OR | Left to Right |
| 12 | `&&` | Logical AND | Left to Right |
| 13 | `\|\|` | Logical OR | Left to Right |
| 14 | `?:` | Ternary Conditional | Right to Left |
| 15 | `=` `+=` `-=` `*=` `/=` `%=` `<<=` `>>=` `&=` `^=` `\|=` | Assignment operators | Right to Left |
| 16 (lowest) | `,` | Comma operator | Left to Right |

---

## Key Notes

1. **Parentheses** `()` can be used to explicitly control evaluation order.
2. Postfix operators (`i++`, `i--`) have higher precedence than prefix (`++i`, `--i`).
3. Assignment (`=`) and conditional (`?:`) operators are evaluated **right-to-left**.
4. The **comma operator** has the **lowest precedence**.

---

## Example

```c
#include <stdio.h>
int main() {
    int a = 10, b = 5, c = 2, result;

    result = a + b * c;   // Multiplication has higher precedence
    printf("Result 1: %d\n", result); // 20

    result = (a + b) * c; // Parentheses change precedence
    printf("Result 2: %d\n", result); // 30

    result = a > b && b > c; // Relational before logical AND
    printf("Result 3: %d\n", result); // 1 (true)

    return 0;
}
