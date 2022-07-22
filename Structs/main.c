#include <stdio.h>
#include <stdlib.h>
// just like interface in ts construct
struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;

};
int main()
{
    // to call struct
    // struct Name VarName;
    struct Student student1;
    student1.age = 22;
    student1.gpa = 3.2;
    // strings are special because they are considered
    // arrays in c
    //strcpy() for string copy
    strcpy(student1.name, "Jimmmmmmmy");
    strcpy(student1.major, "economics");

    printf("Student1 gpa %f, %s", student1.gpa, student1.name);

    // while loop
    int index = 1;
    while(index <= 5){
        printf("%d \n", index);
        index++;
    }
    return 0;
}
