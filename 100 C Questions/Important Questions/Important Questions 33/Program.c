#include "stdio.h"

// This program will take data from the user and calculate its percentage in given subjects.

// Assume marks are from 100
// This function will calculate percentage of a student from marks in science, marh and sanskrit.
double calculate_percentage(double s1, double s2, double s3)
{
    // Define variables
    double result;
    result = (s1 + s2 + s3) / 300;
    return result;
}

int main()
{

    double subject_1;
    double subject_2;
    double subject_3;

    double percentage_of_a_student;

    // Subject_1 is Science
    // Subject_2 is Math
    // Subject_3 is Sanskrit

    printf("Enter your marks in Science(Out of 100): ");
    scanf("%lf", &subject_1);

    printf("Enter your marks in Math(Out of 100): ");
    scanf("%lf", &subject_2);

    printf("Enter your marks in Sanskrit(Out of 100): ");
    scanf("%lf", &subject_3);

    percentage_of_a_student = calculate_percentage(subject_1, subject_2, subject_3);

    printf("Your total percentage is: %lf", percentage_of_a_student);

    return 0;
}