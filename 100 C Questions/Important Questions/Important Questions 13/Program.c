#include "stdio.h"

// This program will check if a number is armstrong number or not.

int main()
{
    int number;
    printf("Enter a three digit number: ");
    scanf("%d", &number);

    int first_digit, second_digit, third_digit;
    first_digit = number%10;
    second_digit = (number % 100)/10;
    third_digit = (number % 1000)/100;
    printf("first digit %d \n second digit %d \n third digit %d \n", first_digit, second_digit, third_digit);
    if (((first_digit * first_digit * first_digit) + (second_digit * second_digit * second_digit) + (third_digit * third_digit * third_digit)) == number)
    {
        printf("This number is an Armstrong Number!");
    }
    else
    {
        printf("This number is NOT an Armstrong Number!");
    }
}


//////////??TRY FOR OTHERS (WRITE A PROGRAM FOR NOT ONLY THREE DIGIT NUMBERS)??/////////////