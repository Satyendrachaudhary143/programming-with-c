#include <stdio.h>
// Program to swap two numbers without using a temporary variable
int main()
{
    int a = 5, b = 10;

    // Swapping using arithmetic operations
    a = a + b; // a becomes 15
    b = a - b; // b becomes 5
    a = a - b; // a becomes 10

    printf("After swapping: a = %d, b = %d\n", a, b);
    return 0;
}