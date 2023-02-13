#include <stdio.h>

// Check if a number is divisible by 2 or not.

int main()
{
    int number;
    printf("Enter a number: %d", number);
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("Yes this number is divisible by 2");
    }
    else
    {
        printf("No this number is not divisible by 2");
    }

    return 0;
}