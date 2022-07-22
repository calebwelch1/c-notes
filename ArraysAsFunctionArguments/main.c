#include <stdio.h>
#include <stdlib.h>

int main()
{
    //strings must be null terminated /0
    // this is because C has no idea when the array should end
    // so you gottta let em know

    char C[9];
    C[0] = 'J';
    C[0] = 'J';
    C[0] = 'J';
    C[0] = 'J';
    return 0;
}
