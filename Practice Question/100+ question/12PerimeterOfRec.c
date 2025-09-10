#include <stdio.h>
int main()
{
    // Create a program to calculate Perimeter of a rectangle.Perimeter of rectangle ABCD = 2 * (length + width).
    float length, width, perimeter;
    printf("Enter length and width of rectangle: ");
    scanf("%f %f", &length, &width);
    perimeter = 2 * (length + width);
    printf("Perimeter of rectangle: %.2f\n", perimeter);
    return 0;
    // input: 5.0 3.0
    // output:
    // Perimeter of rectangle: 16.00
}