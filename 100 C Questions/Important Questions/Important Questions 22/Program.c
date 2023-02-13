#include "stdio.h"

// This program will print the reverse of tbale of number n.

int main()
{

    int number_for_table;
    printf("Enter a number: ");
    scanf("%d", &number_for_table);

    for (int i = 10; i >= 1; i--)
    {
        printf("%d X %d = %d \n", number_for_table, i, number_for_table * i);
    }

    return 0;
}