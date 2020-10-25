// prompt the user for a valor in dollars and cents
// then display this value with a 5% tax added

#include <stdio.h> 
#define TAX 0.05

int main () 
{
    float amount, amount_taxed; 

    printf("Enter an amount in dollars and cents: ");
    scanf("%f", &amount);

    amount_taxed = amount + (amount * TAX);

    printf("The amount with an 5%% tax added is %.2f\n", amount_taxed);

    return 0;
}