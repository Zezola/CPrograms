// Modify project2 to input the user for the radius of the sphere
// then calculate the volume of the sphere
// using the formula v = 4/3piR³

#include <stdio.h> 
#define PI 3.14f 

int main ()
{
    float radius, volume; 
    
    printf("Enter the radius of the sphere: ");
    scanf("%f", &radius);

    if (radius < 0) {
        printf("Radius cannot be negative.\n");
        printf("Enter the radius of the sphere: ");
        scanf("%f", &radius);
    }

    volume = (4.0)/(3.0) * PI * radius * radius * radius;

    printf("The volume of the sphere is: %.2f", volume);


    return 0;
}