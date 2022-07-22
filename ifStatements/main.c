#include <stdio.h>
#include <stdlib.h>

int max(int num1, int num2){
    if (num1 == num2){
        return printf("%d is equal to %d\n", num1, num2);
    } else if ( num1 > num2 ){
        return printf("%d is greater than %d\n", num1, num2);
    } else {
        return printf("%d is greater than %d \n", num2, num1);
    }
}

char bestGrade(char grade){

    switch(grade){
case 'A':
    printf("You did Great!");
    break;
case 'B':
    printf("You did ok!");
    break;
case 'C':
    printf("You did poorly!");
    break;
case 'D':
    printf("You did very bad!");
    break;
case 'F':
    printf("You did very bad!");
    break;
default:
    printf("not a grade bucko");
    break;
    };
};
int main()
{
    bestGrade("A");
    bestGrade('C');
    return 0;
}
