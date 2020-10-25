// Calculate the volume of a sphere with 10-meter radius 
// using the formula v = 4/3piR³ 

#include <stdio.h>

#define PI 3.14f

int main() 
{
    int radius = 10; 
    float volume = (4.0/3.0 * PI * radius * radius * radius);

    printf("The volume of the sphere is %.2f\n", volume);

    return 0;
}