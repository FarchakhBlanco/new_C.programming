
#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define SIZE  3

int getBet(void);

void clearArray(int *arr, int size);

void shuffleArray(int*arr, int size);

void treasureHunt(const int *arr, int size, int *balance, int bet, int player_guess );

int main () {
    int seed = 0;
    int balance = 0;
    int bet = 0;
    int hole[SIZE]={1,0,0}; // 1 is the winner

    printf("Enter the seed: ");
    scanf("%d", &seed);
    srand(seed);

    
    do {
        printf("----Enter your starting cash balance---- : ");
        scanf("%d", &balance);

        if (balance <= 0) {
            printf("The balance should be positive. Try again.\n");
        }

    } while (balance <= 0);

    
    
    while(balance>0){
    bet = getBet();

        if(bet == 0){
            printf("thanks for playing!\n");
            break;
        }

        if (bet > balance) {
            printf("Not enough money. Try again!\n");
            continue;
        }
        clearArray(hole, SIZE);
        shuffleArray(hole, SIZE);
        treasureHunt(hole, SIZE,&balance,bet,0);
        if (balance <= 0){
            printf("Sorry, you're out of cash. Better luck next time! Thank you for playing.");
            break;
        }

    } 

    
    return 0;
}

int getBet(void){
    
    int bet;
    do {
        printf("Enter the amount you want to bet (0 to stop): ");
        scanf("%d", &bet);

        if (bet < 0) {
            printf("The bet should be positive. Try again.\n");
        }

    } while (bet < 0);  

    return bet;  
}
void clearArray(int *arr, int size) {
    // Sets all elements of the array to 0
    for (int i = 0; i < size; i++) {
        arr[i] = 0;
    }
}
void shuffleArray(int*arr, int size){
    int treasure = rand() % size;
    arr[treasure] = 1;
    }

void treasureHunt(const int *arr, int size, int *balance, int bet, int player_guess ){
/*Accepts the treasure array, a pointer to the player's balance, the bet amount, and the player's guessed hole number.

Checks if the player wins or loses.

Updates the balance after processing the bet result.

*/
do{
    printf("Guess the hole the treasure is hidden...\n");
    scanf("%d", &player_guess);
        if(player_guess > SIZE || player_guess <= 0){
            printf("There are three hole. Try again.\n");
        }

    }while(player_guess > SIZE || player_guess <= 0);
    
    if (arr[player_guess - 1] == 1) {
        printf("You found the treasure! The holes are as follows: %d %d %d\n", arr[0],arr[1],arr[2]);
        *balance += bet;
        printf("Your cash balance is now = %d\n",*balance);
        

    } else {
        printf("No treasure here! The holes are as follows: %d %d %d\n", arr[0],arr[1],arr[2]);
        *balance -= bet;
        printf("Your cash balance is now = %d\n",*balance);
    }

}

