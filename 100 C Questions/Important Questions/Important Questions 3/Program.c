#include <stdio.h>

// Calculate float to integer value
int main()
{
    double value;
    int converted_value;

    // Getting value from the user
    printf("Enter value in float: ");
    scanf("%lf", &value);

    // Converting value entered by the user
    converted_value = (int)value;
    printf("Converted to integer : %d", converted_value);
    return 0;
}
