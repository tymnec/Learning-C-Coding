#include "stdio.h"

// This program is a simple calculator using switch cases.

int main()
{
    double number_1, number_2;
    int option = 0;
    while (option != 5)
    {
        printf("Enter a first number: ");
        scanf("%lf", &number_1);
        printf("Enter a second number: ");
        scanf("%lf", &number_2);

        printf("<===== MENU =====> \n");
        printf("1. Addition \n");
        printf("2. Subtraction \n");
        printf("3. Multiplication \n");
        printf("4. Division \n");
        printf("5. Quit \n");

        scanf("%d", &option);

        switch (option)
        {
        // Addition
        case 1:
            printf("Result: %lf \n", number_1 + number_2);
            break;

        // Subtraction
        case 2:
            printf("Result: %lf \n", number_1 - number_2);
            break;

        // Multiplication
        case 3:
            printf("Result: %lf \n", number_1 * number_2);
            break;

        // Division
        case 4:
            printf("Result: %lf \n", number_1 / number_2);
            break;

        // Quit
        case 5:
            printf("Thank You! \n");
            break;

        // Default case
        default:
            printf("You have entered a wrong number Please Enter again!");
            break;
        }
    }
}