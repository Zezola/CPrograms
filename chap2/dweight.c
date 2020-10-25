#include <stdio.h>

#define INCHES_PER_POUND 166

int main () {
    // Declaring variables 
    int height, length, width, volume, weigth; 

    printf("Enter the height: ");
    scanf("%d", &height);
    printf("Enter the length: ");
    scanf("%d", &length);
    printf("Enter the width: ");
    scanf("%d", &width);

    volume = width * height * length; 
    weigth = (volume + INCHES_PER_POUND - 1)/166;

    // Printing it on the screen 
    printf("Volume in cubic inches: %d\n", volume);
    printf("The weigth in pounds is: %d\n", weigth);

    return 0;
}