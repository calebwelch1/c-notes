#include <stdio.h>
#include <stdlib.h>

int Add(int a, int b){
    return a+b;
}
int*Func(int,int); //declaring a function that would return int*
int main()
{
    int c;
    // instantiate a pointer that returns (int, int)
    int (*p)(int,int);
    // that pointer is equal to address of our function
    p = &Add;
    // var c = dereferenced pointer calling Add w/ 2,3
    c = (*p)(2,3); // de-referencing and executing the function;
    // c = p(2,3); // same thing
    printf("%d\n", c);
    return 0;
}
