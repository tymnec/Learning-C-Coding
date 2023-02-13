#include "stdio.h"

// This program will print the sum of first n natural numbers also in reverse order too.

int main()
{
    int first_natural_numbers;
    int sum = 0;
    printf("Enter value of n: \n");
    printf("This program will print first n natural numbers! \n");

    scanf("%d", &first_natural_numbers);

    for (int i = first_natural_numbers; i > 0; i--)
    {
        sum += i;
        printf("%d \n", i);
    }

    printf("TOTAL SUM IS: %d \n", sum);
}