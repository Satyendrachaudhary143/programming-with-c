#include <stdio.h>
int main()
{
    // Create a program to print the area of a square by inputting its side length.
    int side;
    printf("Enter the length of the side of the square: ");
    scanf("%d", &side);
    int area = side * side;
    printf("The area of the square is: %d\n", area);
    return 0;
    // input: 5
    // output: The area of the square is: 25
}