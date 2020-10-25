// Converts a temperature from fahrenheit to celsius 

#include <stdio.h> 

#define FREEZING_PT 32.0f
#define SCALE_FACTOR (5.0f/9.0f)

int main () 
{
    float fahrenheit, celsius; 

    printf("Enter a temperature in fahrenheit: ");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - FREEZING_PT)*SCALE_FACTOR;

    printf("Temperature in celsius: %.2f\n", celsius);

}