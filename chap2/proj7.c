// Write a program that asks the user to enter a US dolar amount and then 
// shows how to pay that amount using the smallest number of $20, $10, $5, $1

#include <stdio.h> 

int main ()
{
    int dollar_amount, bills20, bills10, bills5, bills1; 

    printf("Enter an dollar amount: ");
    scanf("%d", &dollar_amount);

    if (dollar_amount < 0) {
        printf("Please enter a positive value: \n");
        printf("Enter an dollar amount: ");
        scanf("%d", &dollar_amount);
    }

    bills20 = dollar_amount / 20; 
    dollar_amount = dollar_amount - bills20 * 20;

    bills10 = dollar_amount / 10;
    dollar_amount = dollar_amount - bills10 * 10;

    bills5 = dollar_amount / 5; 
    dollar_amount = dollar_amount - bills5 * 5; 

    bills1 = dollar_amount;

    printf("\nYou'll be paid in: \n");
    printf("%d bills of 20\n", bills20);
    printf("%d bills of 10\n", bills10);
    printf("%d bills of 5\n", bills5);
    printf("%d bills of 1\n", bills1);      


    return 0;
}