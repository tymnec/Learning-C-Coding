#include "stdio.h"

// THis program will print n terms of the fibonacci sequence

// This function will return first n terms of fibonacci sequence.
int fibonacci_sequence(int count)
{
    int value;
    if (count == 0)
    {
        return value =0;
    }
    else if (count==1)
    {
        return value =1;
    }
    
    else
    {
        value = fibonacci_sequence(count-1)+fibonacci_sequence(count-2);
    }
    return value;
}

int main()
{
    int count, value;

    printf("Enter value of n: ");
    scanf("%d", &count);

    for (int i = 0; i <= count; i++)
    {
        value = fibonacci_sequence(i);
        printf("%d\n", value);
    }

    return 0;
}