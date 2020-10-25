/* Calculates the comission of a broker */ 

#include <stdio.h> 

int main ()
{
    float trade_value, comission; 

    printf("Enter the trade value: ");
    scanf("%f", &trade_value);

    if (trade_value < 2500.00) {
        comission = 30 + (trade_value * .017);
    } else if (trade_value < 6250.00) {
        comission = 56 + (trade_value * .0066);
    } else if (trade_value < 20000.00) {
        comission = 76 + ( trade_value * .0034);
    } else if (trade_value < 50000.00) {
        comission = 100 + (trade_value * .0022);
    } else if (trade_value < 500000.00) {
        comission = 155 + (trade_value * .0011);
    } else {
        comission = 255 + (trade_value * .0009);
    }

    printf("The comission is %.2f\n", comission);

    return 0;
}