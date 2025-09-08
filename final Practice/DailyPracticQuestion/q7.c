#include <stdio.h>
// Program to print the multiplication table of a number
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Print table from 1 to 10
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", num, i, num * i);
    }

    return 0;
}