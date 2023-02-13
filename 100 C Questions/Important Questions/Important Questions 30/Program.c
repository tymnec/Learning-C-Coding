#include "stdio.h"

// This program will calculate sum of first n natural numbers.

// This function will calculate the sum of first n natural numbers
int sum_of_first_n_natural_numbers(int count)
{
    int result = 0;

    for (int i = 1; i <= count; i++)
    {
        result += i;
    }

    return result;
}

int main()
{
    int value;
    printf("Enter n: ");
    scanf("%d",&value);

    value = sum_of_first_n_natural_numbers(value);

    printf("Result: %d \n",value);
    return 0;
}