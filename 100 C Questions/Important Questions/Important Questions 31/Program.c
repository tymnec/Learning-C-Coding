#include "stdio.h"

// This program will calculate factorial of a number

// This function will calculate factorial of n.
int factorial_of_n(int count)
{
    int factorial = 1;
    for (int i = count; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    return factorial;
}
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    number = factorial_of_n(number);
    printf("Factorial of n is: %d", number);
    return 0;
}