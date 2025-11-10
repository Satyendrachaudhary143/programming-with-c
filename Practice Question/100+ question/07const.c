#include <stdio.h>
int main()
{
    // Create a program to define a constant for the mathematical value pi (3.14159) and use it to calculate and print the circumference of a circle with a radius input from user.
    //  formula of circumference: C = 2 * pi * r
    const float PI = 3.14;
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    float circumference = 2 * PI * radius;
    printf("The circumference of the circle is: %.2f\n", circumference);
    return 0;
    // input: 5
    // output: The circumference of the circle is: 31.40
}