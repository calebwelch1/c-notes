#include <stdio.h>
#include <stdlib.h>

//prototype, brings knowledge of your function to top
// of call stack

double cube(double num);

int main()
{
    printf("Answer: %f", cube(7.0));
    sayHI("Sara", 40);
    return 0;
};

// void, means this function returns no info... like js ts

void sayHI(name, age) {
    printf("Hello %s, you are %d;) ", name, age);
};

double cube(double num){
return num * num * num;
};
