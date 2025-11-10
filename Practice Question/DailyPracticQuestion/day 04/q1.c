// #include <stdio.h>

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};

//     // Accessing arr[2] using address
//     int *ptr = &arr[2];
//     printf("Value at arr[2] = %d\n", *ptr);

//     return 0;
// }

// #include <stdio.h>

// int main()
// {
//     int arr[5] = {10, 20, 30, 40, 50};

//     printf("Address of arr[2] = %p\n", &arr[2]);

//     return 0;
// }

#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *ptr = arr; // 'ptr' points to the first element of array

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Value = %d\t Address = %p\n", *(ptr + i), (ptr + i));
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("arr[%d] = %d\t Address = %p\n", i, arr[i], &arr[i]);
    // }
    printf("int of arr = %d\n", arr);
    printf("adress of arr = %p\n", arr);

    return 0;
}