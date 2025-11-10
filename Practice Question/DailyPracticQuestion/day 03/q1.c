#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float a, b;
    printf("Enter a number to find squarroot: ");
    scanf("%f", &a);
    b = sqrt(a);
    printf("\nsquarroot of %.2f is %.2f", a, b);
    getch();
    return 0;
}