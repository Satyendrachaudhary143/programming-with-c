#include <stdio.h>  // Header file for input/output functions (printf, fflush)
#include <stdlib.h> // Standard library (not strictly needed here, but good practice)
#include <unistd.h> // For usleep() function to create a delay

#define BAR_WIDTH 50 // Define the width of the progress bar (50 characters wide)

// Function to display progress bar
void showProgress(const char *taskName, int totalSteps)
{
    // Print the task name at the start
    printf("Task: %s\n", taskName);

    // Loop from 0 up to totalSteps (to simulate progress)
    for (int i = 0; i <= totalSteps; i++)
    {
        // Calculate percentage completed
        int progress = (i * 100) / totalSteps;

        // Calculate how many characters of the bar should be filled
        int pos = (i * BAR_WIDTH) / totalSteps;

        // Print carriage return (\r) to bring cursor back to line start
        // This allows overwriting the same line instead of printing new lines
        printf("\r[");

        // Draw the progress bar
        for (int j = 0; j < BAR_WIDTH; j++)
        {
            if (j < pos)
                printf("="); // Already completed part
            else if (j == pos)
                printf(">"); // Current position marker
            else
                printf(" "); // Remaining empty space
        }

        // Print percentage after the bar
        printf("] %d%%", progress);

        // Flush the output buffer immediately
        // (otherwise printf may wait to display until buffer fills)
        fflush(stdout);

        // Pause for 0.1 seconds (100000 microseconds)
        // Just to show smooth animation
        usleep(100000);
    }

    // Once the loop ends, print final message
    printf("\nTask Completed!\n");
}

// Main function
int main()
{
    // Call showProgress() with task name and total steps
    // totalSteps = 100 means progress will go from 0% to 100%
    showProgress("Downloading File", 100);
    showProgress("Downloading File", 20);
    showProgress("Downloading File", 50);

    // Exit the program successfully
    return 0;
}
