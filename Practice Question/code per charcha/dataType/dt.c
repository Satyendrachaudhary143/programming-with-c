#include <stdio.h>
int main()
{

    int num1 = 20, num2 = 10;
    char ch1 = 'a', ch2 = 'b';
    // error checking
    // int c = 'c', char ch5 = 'd';  throw error if you declare two variable with another data type then throw error
    int c = 'c';   // this is valid, but it will not throw an error  , if you use %c then output will be 'c' but if you use %d then output will be 99 is a scii value of 'c'
    char ch5 = 10; // this is valid, but it will not throw an error ,  if you use %d then output will be 10 but if you use %c then output will be a new line character

    printf("num1 = %d, num2 = %d, ch1 = %c, ch2 = %c, c = %d, ch5 = %d\n", num1, num2, ch1, ch2, c, ch5);
    printf("num1 = %d, num2 = %d, ch1 = %c, ch2 = %c, c = %c, ch5 = %c\n", num1, num2, ch1, ch2, c, ch5);

    return 0;
}