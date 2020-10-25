// Modify the code of project 5 so the polynomial expression is evaluated by
// the formula ((((3x + 2)x - 5)x - 1)x + 7)x - 6
// 3x + 2 * ((x - 5) * (x - 1) * (x + 7) * (x - 6))
#include <stdio.h>

int main (void) {
    int x, polynomial; 

    printf("Enter an integer value for x: ");
    scanf("%d", &x);

    polynomial = 3*x + 2 * ((x - 5) * (x - 1) * (x + 7) * (x - 6));

    printf("The polynomial expression, when x = %d, evaluates to: %d\n", x, polynomial);

    return 0;
}