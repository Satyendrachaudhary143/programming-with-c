#include <stdio.h>
// Program to calculate the factorial of a number
int main()
{
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Multiply from 1 to num
    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }

    printf("Factorial of %d = %d\n", num, fact);
    return 0;
}