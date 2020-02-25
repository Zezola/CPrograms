#include <time.h>
#include <stdlib.h>
#include <stdio.h>

int main () {
    int player1, player2; 
    srand(time(NULL)); 

    printf("Player1 is rolling the dice...\n");
    player1 = rand() % 6 + 1; 
    printf("Player2 is rolling the dice...\n");
    player2 = rand() % 6 + 1; 

    if (player1 > player2) {
        printf("Player1 got an %d\n", player1);
        printf("Player2 got an %d\n", player2);
        printf("Player1 won\n");
    } else if (player1 < player2) {
        printf("Player1 got an %d\n", player1);
        printf("Player2 got an %d\n", player2);
        printf("Player2 won\n");
    } else {
        printf("Player1 got an %d\n", player1);
        printf("Player2 got an %d\n", player2);
        printf("Draw.");
    }

    return 0;
}