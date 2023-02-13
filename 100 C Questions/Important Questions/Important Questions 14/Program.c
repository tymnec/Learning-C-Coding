#include "stdio.h"

// This program will check if the given number is natual number or not.

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    // Checking if the entered number is a natual number or not
    number > 0 ? printf("This number is a Natural Number!") : printf("This number is NOT a Natural Number!");
}