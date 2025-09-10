#include <stdio.h>
int main()
{
    // Create a program that takes two numbers and shows result of all arithmetic operators (+,-,*,/,%).
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("Addition: %d\n", a + b);
    printf("Subtraction: %d\n", a - b);
    printf("Multiplication: %d\n", a * b);
    printf("Division: %d\n", a / b);
    printf("Modulus: %d\n", a % b);
    return 0;
    // input: 12 5
    // output:
    // Addition: 17
    // Subtraction: 7
    // Multiplication: 60
    // Division: 2
    // Modulus: 2 (meaning remainder of 12 divided by 5)
}