#include <stdio.h>
#include <stdlib.h>

int main()
{
    //dimension this is two dimensions
    //width and height, an array of arrays
    // must state size so for this one
    // 4 elements in array, each tinyArray has 2 elements
    int i;
    int j;
    int nums[4][2]={
            {1, 2},
            {3, 4},
            {5, 6},
            {7, 8}
    };
    for(i=0; i<4; i++){
            for(j=0; j<2; j++){
                printf("%d", nums[i][j]);
            }
    };
    return 0;
}
