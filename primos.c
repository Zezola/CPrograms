#include <stdio.h>

int main () {

    int numero, divisores, limite; 
    numero = 2; 

    printf("Quero mostrar todos numeros primos ate: \n");
    scanf("%d", &limite);

    printf("--PRIMOS--\n");

    for ( numero; numero <= limite; numero++) {
        divisores = 0;
        for ( int i = 2; i <= numero; i++) {
            if ( numero % i == 0) {
                divisores++;
            }
        }
        if (divisores < 2) {
            printf("%d\n", numero);
        }
    }
return 0;
}