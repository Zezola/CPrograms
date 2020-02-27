#include <stdio.h>

int main () {

    int numero, fatorial, copia; 
    fatorial = 1; 
    printf("Digite um numero para calcularmos o fatorial: \n"); 
    scanf("%d", &numero); 
    copia = numero;

    if ( numero < 0 ) {
        printf("Nao e possivel calcular o fatorial \n");
        return 0;
    } else if (numero == 0) {
        printf("0! = 0\n");
        return 0;
    }

    while ( numero >= 1 ) {
        fatorial = fatorial * numero; 
        numero--;   
    }

    printf("%d! = %d", copia, fatorial);
    return 0;
}