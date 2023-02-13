#include "stdio.h"

/// This program will check if the user is adult or not.
int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    age >= 18 ? printf("Your are Adult!") : printf("Your are Not Adult");
}