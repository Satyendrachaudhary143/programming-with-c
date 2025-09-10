#include <stdio.h>
#include <stdbool.h>
int main()
{
    int a = 10, b = 20;
    int res = a < b;
    bool isTrue = (a < b);
    printf("Result of a < b: %d\n", res);                     // prints 1 (1 means true)
    printf("Is a < b true? %s\n", isTrue ? "true" : "false"); // prints true

    return 0;
}