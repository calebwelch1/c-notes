#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age = 30;
    double gpa = 3.4;
    char grade = 'A';
    // these values are all saved in memory somewhere;

    // to print out memory address we use %p for pointer
    // &variable to point
    printf("age: %p \n gpa: %p \n grade: %p \n", &age, &gpa, &grade);
    // prints out memory address of these variables 0.

    //pointers

    // pointer is a memory address
    // it is basically a data type
    // like int, double, char, pointer
    int * pAge = &age;
    // pointer variable, type star pVar
    double * pGpa = &gpa;
    // always weird for some aVar for chars
    char * aGrade = &grade;


    //dereferencing a pointer
    // means going to memory address of pointer
    // and getting info stored there

    printf("the memory address pAge: %p\n", pAge);
    printf("the value stored at memory address pAge: %d \n", *pAge);

    return 0;
}
