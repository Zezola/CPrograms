/* Extending the project1 to hold 3 digits numbers */

#include <stdio.h> 

int main ()
{
    int number, last_digit, middle_digit, first_digit; 

    printf("Enter a 3 digit number: ");
    scanf("%d", &number);

    last_digit = number % 10; 
    number = number / 10; 

    middle_digit = number % 10; 
    number = number/10;

    first_digit = number; 

    printf("The number reversed is: %d%d%d\n", last_digit, middle_digit, first_digit);

    return 0;
}