#include "stdio.h"

// This program will calculate the sum of digits of a number.

// This function will calculate the sum of digits of a number.
int sum_of_digits_of_a_number(int number)
{
    int sum = 0, remainder;
    while (number != 0)
    {
        remainder = number % 10;
        sum = sum + remainder;
        number = number / 10;
    }
    return sum;
}

int main()
{
    int value, result;
    printf("Enter a number: ");
    scanf("%d", &value);

    result = sum_of_digits_of_a_number(value);

    printf("Result: %d\n", result);
    return 0;
}