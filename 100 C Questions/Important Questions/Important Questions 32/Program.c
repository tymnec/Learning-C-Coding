#include "stdio.h"

// This program will take data from the user and then convert it into fahrenheit.

// This function will convert celsius to fahrenheit.
int celsius_to_fahrenheit(int celsius)
{
    int result;
    result = (celsius * (9 / 5)) + 32;
    return result;
}

int main()
{
    // Define variables
    int value;

    printf("Enter a value in Celsius: ");
    scanf("%d", &value);

    value = celsius_to_fahrenheit(value);

    printf("Converted to Fahrenheit: %d", value);
    return 0;
}