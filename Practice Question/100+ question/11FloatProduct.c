#include <stdio.h>
int main()
{
    // Create a program to calculate product of two floating points numbers.
    float a, b;
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &a, &b);
    printf("Product: %.2f\n", a * b);
    return 0;
    // input: 12.5 3.4
    // output:
    // Product: 42.50
}