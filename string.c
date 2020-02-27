#include <stdio.h> 
#include <stdlib.h>
#include <strings.h>

int main () {
    char texto[50], inverso[50];
    int i,j;
    j = 0;

    printf("Digite um texto: \n");
    gets(texto);

    //Informe o tamanho da string digitada 
    printf('Tamanho: %d\n',strlen(texto)); 

    //Imprima ela ao contrario e informe se é palindromo 
    for ( i = strlen(texto) - 1; i >= 0; i--,j++) {
        inverso[j] = texto[i];
    }
    inverso[j] = '\0';

    for ( i,j ; i <= j / 2 ; i++, j-- ) {
        if ( texto[i] != texto[j]) {
            printf("Nao e palindromo");
        } else {
            printf("E palindromo");
        }
    }
    




    return 0;
}