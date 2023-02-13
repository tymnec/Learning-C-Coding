#include "stdio.h"

// This program will print all the odd numbers from 5 to 50

int main()
{
    int count = 50;
    for (int i = 5; i <= count; i++)
    {
        if (i % 2 != 0)
        {
            continue;
        }
        printf("Number: %d\n", i);
    }
    return 0;
}