#include <stdio.h> 

int main () {
    int x = 4;

    int *ptr = &x; 

    printf("x vale %d", x); 
    printf("ponteiro aponta pra %p\n", ptr);

    //Agora podemos manipular o valor de x usando o ponteiro que aponta pro endereço dele

    printf("O ponteiro aponta pra x %d\n", *ptr);

    *ptr = 42; 

    printf("Agora o valor de x e %d\n", x);

    return 0;
}