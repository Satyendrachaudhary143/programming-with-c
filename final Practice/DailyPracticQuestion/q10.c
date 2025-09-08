#include <stdio.h>
// Program to check if a number is prime
int main()
{
    int num, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility from 2 to num-1
    if (num <= 1)
        isPrime = 0;
    else
    {
        for (int i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                isPrime = 0;
                break;
            }
                }
    }

    if (isPrime)
        printf("%d is a prime number.\n", num);
    else
        printf("%d is not a prime number.\n", num);

    return 0;
}