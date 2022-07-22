#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x = 5; //takes up 4 bytes as an int
    int *p;
    p = &x; // pointer takes up 4 bytes, can only exist
    // because pointer is an int AND value is of type int
    *p = 6; //dereferencing pointer, because it is dereferenced
    // we actually set the value of the address of x to 6
    // so now x = 6;
    int **q; //we create q a pointer to a pointer
    q = &p;
    // so basically * means pointer
    // and ** means pointer to a pointer and so on...
    int ***r;
    r = &q;
    // r here cannot hold p or x. because of it's pointer pointer pointer type
    printf("%d\n",*p); // value 6 dereferenced pointer
    printf("%d\n",*q); // address
    printf("%d\n",**q);// value 6 dereference a reference to 6
    printf("%d\n",*(*r));// address
    printf("%d\n",*(*(*r)));// value 6 a dereference of a reference to a reference of 6
    printf("%d\n",*p);




    return 0;
}
