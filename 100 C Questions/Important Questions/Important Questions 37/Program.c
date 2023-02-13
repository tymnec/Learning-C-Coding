#include "stdio.h"
#include "math.h"

// This program will get data from the user and then return its square root.
double square_root_of_a_number(double number)
{
    double result;

    result = pow(number, 0.5);

    return result;
}

int main()
{
    double value, result;
    printf("Enter a number: ");
    scanf("%lf", &value);
    result = square_root_of_a_number(value);
    printf("Sqaure root of %lf is: %lf\n", value, result);
    return 0;
}