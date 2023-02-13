#include "stdio.h"

// This program will calculate power of a number

// This is a power function
double power(double number, double times)
{
    double result;

    int i = 1;
    while (i < times)
    {
        result = result * number;
        i++;
    }
    return result;
}

int main()
{
    // Define variables
    double result, number, times;
    printf("Enter a number: ");
    scanf("%lf", &number);

    printf("Enter times: ");
    scanf("%lf", &times);

    result = power(number, times);
    printf("Result: %lf\n", result);
    return 0;
}