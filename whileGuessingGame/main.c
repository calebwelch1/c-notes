#include <stdio.h>
#include <stdlib.h>

int main()
{
    int secretNum = 8;

    double guess = 0;

    int tries = 0;
    while(guess != secretNum){
        printf("You have tried %d times \n", tries);
        tries++;
        printf("guess a number \n");
        scanf("%lf", &guess);
        printf("guess is %f\n", guess);
        if( guess == secretNum){
            printf("You win!!!");
        }

    }
    return 0;
}
