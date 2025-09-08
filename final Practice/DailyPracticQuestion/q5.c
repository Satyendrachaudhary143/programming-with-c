#include <stdio.h>
// Program to assign grades based on marks using if-else
int main()
{
    int marks;
    printf("Enter marks: ");
    scanf("%d", &marks);

    // Grade logic
    if (marks >= 90)
        printf("Grade: A\n");
    else if (marks >= 80)
        printf("Grade: B\n");
    else if (marks >= 70)
        printf("Grade: C\n");
    else if (marks >= 60)
        printf("Grade: D\n");
    else
        printf("Grade: F\n");

    return 0;
}