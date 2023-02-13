#include <stdio.h>

// Calculate area of circle
int main()
{
    int radius;
    printf("Enter radius of circle: ");
    scanf("%d", &radius);
    printf("Area of given circle is : %f", 3.14 * radius * radius);
    return 0;
}