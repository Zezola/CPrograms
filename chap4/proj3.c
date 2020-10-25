/* Rewrite the project 2 so that we dont use arithmetic to split the number */

#include <stdio.h>

int main ()
{
    int d1, d2, d3; 
    
    printf("Enter a three digit number: ");
    scanf("%1d%1d%1d", &d1, &d2, &d3);

    printf("The number reversed is: %d%d%d\n", d3, d2, d1);

    return 0;
}