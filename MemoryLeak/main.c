#include <stdio.h>
#include <stdlib.h>
//betting game, jack queen king, computer shuggles cards
/*player has to guess position of queen
*/
int cash = 100; //its global
void Play(int bet){
char C[3] = {'J', 'Q', 'K'};
printf("Shuffling...\n");
srand(time(NULL));
int i;
for(i = 0;i<5;i++){
    int x = rand() % 3;
    int y = rand() % 3;
    int temp = C[x];
    C[x] = C[y];
    C[y] = temp;
}
int playersGuess;
printf("what's the position of the queen - 1,2 or 3? \n");
scanf("%d", &playersGuess);
if(C[playersGuess - 1] == 'Q'){
    cash += 3*bet;
    printf("You Win ! Result = %c%c%c \nTotal Cash= %d\n", C[0], C[1], C[2], cash);
}
else{
    cash -= bet;
    printf("You Lose ! Result = %c%c%c \nTotal Cash= %d\n", C[0], C[1], C[2], cash);
}
}
int main()
{
    int bet;
    while (cash > 0){
        printf("What's your bet? $ \n");
        scanf("%d", &bet);
        if( bet == 0 || bet > cash)break;
        Play(bet);
    }
    // play this game and go to details and look for
    // memoryleak.exe it will over time as you play
    // consume more memory
    // when we keep calling play function during our game
    // it allocates a space for the global cash variable
    // whenever play finishes and is destroyed all local
    // variables are destroyed and memory is reclaimed
    // but because cash is global, when play calls it the
    // pointer placeholder for cash is in the heap
    // an array of 3 characters and that
    // must be manually reclaimed. So when we keep playing
    // rounds of the game, the unreclaimed heap of empty
    // 3 character arrays remains

    return 0;
}
