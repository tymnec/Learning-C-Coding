#include "stdio.h"

/// @brief This program will check if a character entered by user is in upper case or not.
/// @return Upper case or not
int main(){

    // Assuming user will enter only Letters as characters
    char character;
    printf("Enter a character: ");
    scanf("%c",&character);

    if (character < 95)
    {
        printf("Upper Case");
    }
    else
    {
        printf("Lower Case");
    }
    
    
}