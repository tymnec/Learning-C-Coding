#include "stdio.h"

// This program will print the table of code

int main()
{

    // Define variables
    int number_for_table;
    printf("Enter a number: ");

    // Getting number from the user
    scanf("%d", &number_for_table);

    for (int i = 1; i <= 10; i++)
    {
        printf("%d X %d = %d \n", number_for_table, i, number_for_table * i);
    }
}