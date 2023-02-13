#include "stdio.h"

// This program will keep take numbers as input from the user until user enters an odd number.

int main()
{

    // Define variables
    int number;

    // // Getting a number from the user
    // printf("Enter a number: ");
    // scanf("%d", &number);

    // while (number % 2 == 0)
    // {
    //     printf("You have entered an even number! \n");

    //     printf("Enter a number: ");
    //     scanf("%d", &number);
    // }

    // Doing using break

    do
    {
        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 2 != 0)
        {
            break;
        }

    } while (1);
}