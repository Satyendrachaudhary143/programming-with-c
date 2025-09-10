#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int number = rand() % 100 + 1; // Random number between 1 and 100
    int guess;
    int attempts = 0;

    printf("Welcome to the Gassing Game!\n");
    printf("I have selected a number between 1 and 100. Can you guess it?\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < number)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else
        {
            printf("Congratulations! You've guessed the number %d in %d attempts.\n", number, attempts);
        }
    } while (guess != number);
    printf("Thank you for playing the Gassing Game!\n   This game is developed by \"satyendra chaudhary\" \n");

    return 0;
}