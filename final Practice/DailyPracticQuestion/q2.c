#include <stdio.h>
int main()
{
    // question find even or odd
    int num1;
    printf("Check Number Even Or Odd\n");
    printf("Enter  your number: ");
    scanf("%d", &num1);
    if ((num1 % 2) == 0)
    {
        printf("You Enter A Even Number\n");
    }
    else if ((num1 % 2) == 1)
    {
        printf("You Enter A Odd Number\n");
    }
    printf("Thanks for using my program!!!");
    return 0;
}