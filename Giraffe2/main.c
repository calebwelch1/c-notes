#include <stdio.h>
#include <stdlib.h>

int main()
{
    //char last[10];
    //printf("Enter your name: \n");
    //fgets(last, 10, stdin);
    //printf("Your name is %s", last);

    // basic calculator
    double num1;
    double num2;

    printf("Enter first number: ");
    // when we get input thats not a string we need &
    // %d is for integer, %lf is for doubles
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);
    // printf just use f instead of scanf which uses lf
    printf("Answer: %f", num1 + num2);


    return 0;
}
