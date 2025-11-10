#include <stdio.h>
#include <math.h>
void print_menu(); // Function to print the menu
double division(double, double);
double modulus(int, int);
int main()
{
    int choice;
    double num1, num2, result;
    while (1) // this is't an infinite loop because of the break statement inside this type of loop is called odd loop
    {

        print_menu();
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
            result = division(num1, num2);
            break;
        case 5: // modulus
            result = modulus((int)num1, (int)num2);
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
void print_menu()
{
    printf("\n\n-------------------------------------------\n");
    printf("Welcome to simple calculator\n");
    printf("Choose one of the following operations:\n");
    printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.modulus\n6. Power\n7. Exit\n");
}
double division(double a, double b)
{
    if (b != 0)
        return a / b;
    else
    {
        fprintf(stderr, "Error: Division by zero!\n");
        return NAN;
    }
}
double modulus(int a, int b)
{
    if (b != 0)
        return a % b;
    else
    {
        fprintf(stderr, "Error: Division by zero in modulus!\n");
        return NAN; // Return 0 or handle the error as needed
    }
}