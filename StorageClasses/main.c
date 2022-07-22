#include <stdio.h>
#include <stdlib.h>
// storage classes for variables
    // auto, register, static
    // auto is default
    // register is one word, for quick access no memory location
    // static variables live for the lifetime of the program
    // instead of being created and destroyed each time they are in/out of scope
    // extern storage class is a global variable visible to ALL FILES
    // only points to a global var in another file
    // declare a global variable or function in another file
// function declaration

void func(void);

static int count = 5; /* global var */

main()
 {
     //while count is reduced by one
    while(count--){
    //call our func
        func();
    }
    return 0;
 }
 // func definition
 void func( void )
 {
     static int i = 5; // local static var
     i++;

     printf("i is %d and count is %d\n", i, count);
 }
