#include <stdio.h>
int main()
{
    // Create a program to input name of the person and respond with ”Welcome NAME to KG Coding”
    char name[100];
    printf("Enter your name: ");
    scanf("%99s", name); // Using %99s to prevent buffer overflow
    printf("Welcome %s to KG Coding\n", name);
    // output
    /*
    Enter your name: satyendra
    Welcome satyendra to KG Coding
    */
    return 0;
}