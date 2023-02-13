#include "stdio.h"

// This program will Print the hot and cold depends upon the the temprature user enters.

// This function will return hot and cold as per temprature.
int hot_or_cold(int temprature)
{
    int result;

    if (temprature > 30)
    {
        result = 1;
    }
    else
    {
        result = 0;
    }

    return result;
}

int main()
{
    int temp, result;
    printf("Enter a temprature(in Celcius): ");
    scanf("%d", &temp);

    result = hot_or_cold(temp);

    if (result == 0)
    {
        printf("It's too Cold\n");
    }
    else
    {
        printf("It's too Hot\n");
    }

    return 0;
}