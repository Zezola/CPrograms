#include <time.h>
#include <stdio.h>
#include <stdlib.h>


int main () {
    srand(time(NULL)); 
    int player1, player2; 

    printf("Player1 is rolling the dice... \n"); 
    player1 = rand() % 6 + 1; 
    printf("Player2 is rollin the dice... \n");
    player2 = rand() % 6 + 1; 

    if (player1 > player2) {
        printf("Player1 won");
    } else if (player2 > player1) {
        printf("Player2 won");
    } else {
        printf("Is a draw");
    }
}