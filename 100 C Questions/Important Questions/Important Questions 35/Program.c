#include "stdio.h"

// This program will print the nth term of the fibonacci sequence.

// This function will return first n terms of fibonacci sequence.
int fibonacci_sequence(int count)
{
    int value;
    if (count == 0)
    {
        return value = 0;
    }
    else if (count == 1)
    {
        return value = 1;
    }

    else
    {
        value = fibonacci_sequence(count - 1) + fibonacci_sequence(count - 2);
    }
    return value;
}

int main()
{
    int value;
    printf("Enter the nth term : ");
    scanf("%d", &value);

    value = fibonacci_sequence(value);

    printf("Result: %d\n", value);
    return 0;
}