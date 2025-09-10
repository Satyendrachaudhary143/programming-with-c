// #include <stdio.h>  // Standard input-output header
// #include <time.h>   // For getting system time
// #include <unistd.h> // For sleep() function (UNIX/Linux)
// // NOTE: On Windows use <windows.h> and Sleep(1000)

// int main()
// {
//     int choice; // To store user choice for clock format

//     // Ask user for choice
//     printf("Choose Clock Format:\n");
//     printf("1. 24-hour format\n");
//     printf("2. 12-hour format (default)\n");
//     printf("Enter your choice: ");
//     scanf("%d", &choice); // Take input from user

//     // Infinite loop to keep clock running
//     while (1)
//     {
//         time_t raw_time;      // Variable to store raw time
//         struct tm *time_info; // Pointer to structure holding broken-down time

//         time(&raw_time);                  // Get current time in seconds since 1970
//         time_info = localtime(&raw_time); // Convert raw time into local time (hours, minutes, seconds)

//         // Clear the screen for refreshing clock
//         // On Windows: system("cls");
//         // On Linux/Mac: system("clear");
//         system("clear");

//         if (choice == 1)
//         {
//             // 24-hour format
//             printf("Digital Clock (24-hour format):\n");
//             printf("%02d:%02d:%02d\n",
//                    time_info->tm_hour, // Print hour in 24-hour format
//                    time_info->tm_min,  // Print minutes
//                    time_info->tm_sec); // Print seconds
//         }
//         else
//         {
//             // 12-hour format (default)
//             int hour = time_info->tm_hour % 12; // Convert 24-hour to 12-hour format
//             if (hour == 0)
//                 hour = 12; // Adjust midnight/noon case

//             printf("Digital Clock (12-hour format):\n");
//             printf("%02d:%02d:%02d %s\n",
//                    hour,                                      // Print hour in 12-hour format
//                    time_info->tm_min,                         // Print minutes
//                    time_info->tm_sec,                         // Print seconds
//                    (time_info->tm_hour >= 12) ? "PM" : "AM"); // Show AM/PM
//         }

//         sleep(1); // Wait for 1 second before updating clock again
//     }

//     return 0; // Program never actually reaches here
// }
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void fill_time(char *, int);
void fill_date(char *);
int input_format();
void clear_screen();

int main()
{
    char time[50], date[100];
    int format = input_format();

    while (1)
    {
        fill_time(time, format);
        fill_date(date);
        clear_screen();
        printf("Current Time: %s\n", time);
        printf("Date: %s\n", date);
        sleep(1); // Sleep for 1 second
    }
    return 0;
}

void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int input_format()
{
    int format;
    printf("\nChoose the time format: ");
    printf("\n1. 24 Hour format");
    printf("\n2. 12 Hour format (default)");
    printf("\nMake a choice(1/2): ");
    scanf("%d", &format);
    return format;
}

void fill_date(char *buffer)
{
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
    strftime(buffer, 100, "%A %B %d %Y", current_time);
}

void fill_time(char *buffer, int format)
{
    time_t raw_time;
    struct tm *current_time;

    time(&raw_time);
    current_time = localtime(&raw_time);
    if (format == 1)
    {
        strftime(buffer, 50, "%H:%M:%S", current_time);
    }
    else
    {
        strftime(buffer, 50, "%I:%M:%S %p", current_time);
    }
}