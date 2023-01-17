#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(0)); // seed for random number generator
    char playAgain = 'y';
    while (playAgain == 'y') {
        int aiMove = rand() % 3;
        char aiMoveString[10];
        if (aiMove == 0) {
            strcpy(aiMoveString, "rock");
        } else if (aiMove == 1) {
            strcpy(aiMoveString, "paper");
        } else {
            strcpy(aiMoveString, "scissors");
        }
        printf("Rock, paper, or scissors? (r/p/s): ");
        char playerMove;
        scanf(" %c", &playerMove);
        printf("AI plays %s.\n", aiMoveString);
        char result[30];
        if (playerMove == 'r') {
            if (aiMove == 0) {
                strcpy(result, "It's a tie!");
            } else if (aiMove == 1) {
                strcpy(result, "You lose!");
            } else {
                strcpy(result, "You win!");
            }
        } else if (playerMove == 'p') {
            if (aiMove == 0) {
                strcpy(result, "You win!");
            } else if (aiMove == 1) {
                strcpy(result, "It's a tie!");
            } else {
                strcpy(result, "You lose!");
            }
        } else if (playerMove == 's') {
            if (aiMove == 0) {
                strcpy(result, "You lose!");
            } else if (aiMove == 1) {
                strcpy(result, "You win!");
            } else {
                strcpy(result, "It's a tie!");
            }
        } else {
            strcpy(result, "Invalid move. Please enter r, p, or s.");
        }
        printf("%s\n", result);
        printf("Do you want to play again? (y/n): ");
        scanf(" %c", &playAgain);
    }
    return 0;
}
