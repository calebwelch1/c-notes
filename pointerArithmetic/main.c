#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a =10;
    int *p;
    p = &a;
    //pointer arithmetic
    printf("%d\n", p); // p is xxx36
    printf("value at address p is %d \n", *p);
    printf("size of integer is %d bytes \n", sizeof(int));
    printf("%d\n", p+1); // p+1 is xxx40
    // this is because int's are 4bytes
    // the address of the pointer +1, should be
    // after 4bytes
    printf("value at address p+1 is %d\n", *(p+1));
    // because no value is at this p+1 address, there is
    // lass p address there ... so remember this!

    // pointers are typed so int* char* etc.

    int b = 1025;
    int *q;
    q = &b;
    printf("size of integer %d\n",sizeof(int));
    printf("Address = %d, value =%d \n",q, *q);

    char *q0;
    //typecasting
    q0 =(char*)q;
    printf("AddressQ= %d, valueQ=%d \n",q0,*q0);
    printf("Address = %d, value =%d \n",q0+1,*(q0+1));
    // because we typed q0 as a char it only takes up 1 byte
    x = &b;
    void *x0;
    x0 = x;
    return 0;
}
