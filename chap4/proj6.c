/* Write a program to compute the check digit for an EAN number in a product */

#include <stdio.h> 

int main()
{
    // add the second, fourth, sixth, eighth, tenth, and twelfth digits 
    // Add the first, third, fifht, seventh, ninth, and eleventh
    // Multiply the first sum by 3 and them add the second sum
    // Subtract 1 from the total
    // Compute the remainder when the total is divided by 10
    // Subtract the remainder by 9

    int d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12, first_sum, second_sum, check, total; 

    printf("Enter the first 12 digits of an EAN: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", d1, d2, d3, d4, d5, d6, d7, d8, d9, d10, d11, d12);

    first_sum = d2 + d4 + d6 + d8 + d10 + d12; 
    second_sum = d1 + d3 + d5 + d7 + d9 + d11; 

    total = (first_sum * 3) + second_sum; 

    total -= 1; 

    printf("The check number is: %d\n", ((total % 10) - 9));




    return 0;
}