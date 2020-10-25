/* Write a program that reads an integer entered by the user and prints it in octal form (base 8) */

#include <stdio.h> 

int main ()
{
    int number, o1, o2, o3, o4, o5; 

    printf("Enter a number: ");
    scanf("%d", &number);

    o1 = number % 8; 
    number = number / 8; 

    o2 = number % 8;
    number = number / 8; 

    o3 = number % 8;
    number = number / 8; 

    o4 = number % 8;
    number = number / 8;

    o5 = number % 8;
    number = number/8;

    printf("The number in octal base is %d%d%d%d%d\n", o5,o4,o3,o2,o1);

    return 0;
}