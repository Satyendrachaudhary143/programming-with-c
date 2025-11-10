#include <stdio.h>
int main()
{
    // Create a program to swap two numbers(use third variable).
    int a = 8;
    int b = 9;
    int c = a; // Store the value of a in c , so a is now not lost
    a = b;     // Assign the value of b to a
    b = c;     // Assign the value of c (original a) to b
    printf("swap number a = %d, b = %d\n", a, b);
    // input: a = 8, b = 9
    // output: swap number a = 9, b = 8

    // Create a program to swap two numbers(without use third variable).
    int num1 = 11;
    int num2 = 14;
    num1 = num1 + num2; // num1 now holds the sum of both numbers
    num2 = num1 - num2;
    num1 = num1 - num2; // num1 now holds the original value of num2
    printf("swap number num1 = %d, num2 = %d\n", num1, num2);
    // input: num1 = 11, num2 = 14
    // output: swap number num1 = 14, num2 = 11
    return 0;
}