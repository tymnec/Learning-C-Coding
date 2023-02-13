#include <stdio.h>

// Check if a number is divisible by even or odd.

int main()
{
    int number;
    printf("Enter a number: %d", number);
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("This number is even");
    }
    else
    {
        printf("This number is odd");
    }

    return 0;
}