#include <stdio.h>
// Program to check if a year is a leap year
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);

    // Leap year conditions
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        printf("%d is a leap year.\n", year);
    else
        printf("%d is not a leap year.\n", year);

    return 0;
}