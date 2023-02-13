#include <stdio.h>

// Calculate area of square
int main()
{
    int side;
    printf("Enter side of a square: ");
    scanf("%d", &side);
    printf("Area of given square is : %d", side * side);
    return 0;
}