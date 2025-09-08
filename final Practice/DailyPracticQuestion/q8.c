#include <stdio.h>
// Program to calculate the sum of first N natural numbers
int main()
{
    int n, sum = 0, i = 1;
    printf("Enter N: ");
    scanf("%d", &n);

    // Add numbers from 1 to N
    while (i <= n)
    {
        sum += i;
        i++;
    }
    // using formula n(n+1)/2
    // sum = n * (n + 1) / 2;

    printf("Sum of first %d natural numbers = %d\n", n, sum);
    return 0;
}