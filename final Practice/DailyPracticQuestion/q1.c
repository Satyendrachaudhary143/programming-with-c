#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double num1, num2, result;
    while (1) // this is't an infinite loop because of the break statement inside this type of loop is called odd loop
    {
        printf("\n\n-------------------------------------------\n");
        printf("Welcome to simple calculator\n");
        printf("Choose one of the following operations:\n");
        printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.modulus\n6. Power\n7. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 7)
        {
            printf("Exiting the program.\n");
            break;
        }
        if (choice < 1 || choice > 7)
        {
            printf("Invalid choice. Please try again.\n");

            continue; // Skip the rest of the loop and start over
        }
        printf("Enter First Number : ");
        scanf("%lf", &num1);
        printf("Enter Second Number : ");
        scanf("%lf", &num2);
        switch (choice)
        {
        case 1: // addition
            result = num1 + num2;
            break;
        case 2: // subtraction
            result = num1 - num2;
            break;

        case 3: // multiplication
            result = num1 * num2;
            break;

        case 4: // division
            if (num2 != 0)
            {
                result = num1 / num2;
            }
            else
            {
                fprintf(stderr, "Error: Division by zero!\n");
            }

            break;
        case 5: // modulus
            if (num2 != 0)
            {
                result = (int)num1 % (int)num2;
            }
            else
            {
                fprintf(stderr, "Error: Division by zero  in modulus!\n");
            }

            break;
        case 6: // power
            result = pow(num1, num2);
            break;
        }
        if (!isnan(result))
        {
            printf("Result of opration is : %.2f\n", result);
        }
    }
}
