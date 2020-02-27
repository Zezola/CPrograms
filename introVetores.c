#include <stdio.h> 

int main (void) {
    float nota[5]; 

    for ( int i = 0; i <= 5; i ++) {
        printf("Entre com a nota: \n"); 
        scanf("%f", &nota[i]);
    }

    for ( int i = 0; i <= 5; i++) {
        printf("Nota %d\n", i); 
        printf("%.2f\n", nota[i]);
    }


    return 0; 
}