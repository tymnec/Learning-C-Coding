#include "stdio.h"

// This program will print factorial of a number n

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int factorial = 1;

    for (int i = number; i >= 1; i--)
    {
        factorial = factorial * i;
    }
    printf("Factorial of a given number is: %d", factorial);
    return 0;
}