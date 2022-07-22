#include <stdio.h>
#include <stdlib.h>

int main()
{
    // type creates what you want the array to be
    int luckyNumbers[] = {4, 1 , 9, 11, 9};
    char students[] = {'me'};
    // if you want to instantiate an array without hard coding it first you must
    // say how much it can hold
    int unluckyNumbers[9];

    printf("%d", luckyNumbers);
    printf("index is just like javascript index 0 is 4: %d", luckyNumbers[0]);
    return 0;
}
