#include <stdio.h>

int main()
{
    // Given an integer value, convert it to a floating-point value and print both.
    int intValue;
    float floatValue;

    // Input from user
    printf("Enter an integer: ");
    scanf("%d", &intValue);

    // Conversion
    floatValue = (float)intValue; // Cast integer to float

    // Output
    printf("Integer value: %d\n", intValue);
    printf("Floating-point value: %.2f\n", floatValue); //%0.2f means two decimal places as :  12.0000 to 0.2f means 12.00

    // intput : 12
    // output:
    // Integer value: 12
    // Floating-point value: 12.00

    return 0;
}