#include <stdio.h>
int main()
{
    // Define variables for storing a user's first name, last name, and age using appropriate naming conventions and then display them.
    char firstName[50] = "Satyendra";      // Declare a character array for first name
    char lastName[50] = "Chaudhary";       // Declare a character array for last name
    int age = 25;                          // Declare an integer variable for age
    printf("First Name: %s\n", firstName); // Print first name
    printf("Last Name: %s\n", lastName);   // Print last name
    printf("Age: %d\n", age);              // Print age
    // output
    /*
    First Name: satyendra
    Last Name: chaudhary
    Age: 25
    */
    return 0;
}