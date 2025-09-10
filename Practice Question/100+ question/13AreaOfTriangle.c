#include <stdio.h>
int main()
{
    // Create a program to calculate the Area of a Triangle.(Area of triangle = ½BH)
    float base, height, area;
    printf("Enter base and height of triangle: ");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height; // 0.5 = ½
    printf("Area of triangle: %.2f\n", area);
    return 0;
    // input: 10.0 5.0
    // output:
    // Area of triangle: 25.00
}