/* Write a program that asks the user to enter a two digit number and then print if 
   with his digits reversed */ 

#include <stdio.h> 

int main ()
{
    int number, last_digit, first_digit; 
    
    printf("Enter a two digit number: ");
    scanf("%d", &number);

    last_digit = number % 10; 
    first_digit = number / 10; 

    printf("The number reversed is %d%d\n", last_digit, first_digit);

    return 0;
}