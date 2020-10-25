// Prompt the user for a value for x an then solve the polynomial expression
// 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6 

#include <stdio.h> 

int main ()
{
    int x, polynomial; 
    

    printf("Enter a value for x: ");
    scanf("%d", &x);
    
    polynomial = 3*(x*x*x*x*x) + 2*(x*x*x*x) - 5*(x*x*x) - x*x + 7*x - 6;
    printf("The expression when x = %d is evaluated to %d\n", x, polynomial);

    return 0;
}