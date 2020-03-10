#include <stdio.h> 
#include <stdlib.h>
#include <string.h>

int main () {
    char palavra[50], inverso[50];
    int i, j, palindromo; 
    j = 0;
    palindromo = 0;

    printf("Escreva uma palavra: \n"); 
    scanf("%s", palavra); 

    i = strlen(palavra) - 1; 
    
    /* Inverte a palavra */
    for (i ; i >= 0; i--, j++) {
        inverso[j] = palavra[i]; 
    }

    printf("Palavra: %s\n", palavra);
    printf("Invertida: %s\n", inverso);

    printf("%d", i);
    printf("%d", j);
    /* Começa a comparar letra por letra a palavra normal e invertida */
    for (i = strlen(inverso) - 1; i >= 0; i--) {
        if (palavra[i] != inverso[i]) {
            palindromo = 1;
        }
    }

    printf("%d", palindromo);
    /*Verifica se é palindromo */
    if (palindromo == 1) {
        printf("Nao e palindromo\n");
    } else {
        printf("Palindromo");
    }
    
    
    return 0;
}