#include "stdio.h"

// This program will keep taking numbers as input form the user until user enter a number which is multiple of 7.

int main()
{

    int number;

    do
    {

        printf("Enter a number: ");
        scanf("%d", &number);

        if (number % 7 == 0)
        {
            break;
        }

    } while (1);
}