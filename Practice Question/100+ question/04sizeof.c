#include <stdio.h>
int main()
{
    // Create a program that declares one variable of each of the fundamental data types (int, float, double, char) and prints their size using sizeof() operator.
    int a;                                            // Declare an integer variable
    float b;                                          // Declare a float variable
    double c;                                         // Declare a double variable
    char d;                                           // Declare a char variable
    printf("Size of int: %zu bytes\n", sizeof(a));    // Print size of int
    printf("Size of float: %zu bytes\n", sizeof(b));  // Print size of float
    printf("Size of double: %zu bytes\n", sizeof(c)); // Print size of double
    printf("Size of char: %zu bytes\n", sizeof(d));   // Print size of char
    // output
    /*
    Size of int: 4 bytes
    Size of float: 4 bytes
    Size of double: 8 bytes
    Size of char: 1 byte
    */
    // %zu mean size_t type specifier for printing size_t values
    // sizeof() operator returns the size of the variable in bytes
    // The sizes may vary based on the system architecture and compiler
    return 0;
}