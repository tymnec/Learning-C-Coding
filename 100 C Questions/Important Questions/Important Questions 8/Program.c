#include <stdio.h>

// Check true or false

int main()
{
    int is_sunday = 1;
    int is_snowing = 1;

    printf("%d \n", is_snowing && is_sunday);

    int is_monday = 0;
    int is_raining = 1;

    printf("%d \n", is_monday || is_raining);

    int number = 15;
    printf("%d \n", number > 9 && number < 100);
    return 0;
}
