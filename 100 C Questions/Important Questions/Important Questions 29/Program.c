#include "stdio.h"
#include "math.h"

// This program will calculate sqaure of a number entered by the user at the terminal

int main()
{

    double number;

    printf("Enter a number: ");
    scanf("%lf", &number);

    printf("Square of given number is: %lf", pow(number,2));
    return 0;
}