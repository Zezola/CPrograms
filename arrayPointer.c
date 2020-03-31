#include <stdio.h> 

int main () {
    int numeros[5]; 
    int *ptr = numeros; // Em C, o nome de um array e um ponteiro pra ele msm 
    int v = 2; 

    for (;ptr < &numeros[5]; ptr++) {
        *ptr = v; 
         v = v * 2; 
    }

    for (int i = 0; i < 5; i++) {
        printf("%d\n", numeros[i]);
    }

    return 0;
}