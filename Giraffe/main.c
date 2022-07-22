#include <stdio.h>
#include <stdlib.h>

int main()
{

char characterName[] = "Bobby";
int characterAge = 32;
double gpa = 3.8;
char phrase[] = "Girafffe's baby";

printf("%s was a friend of mine\n", characterName);
printf("he's on his back i'm on his mind\n");
printf("he wakes me when he goes to work\n");
printf("his hands are cold his breath is smoke\n");
printf("he was also %d years old\n", characterAge);
printf(" my favorite %s is %f \n", "number", 11.2);
// if i use %f it prints out 11.200000 if i use %d it's something insane lol

printf("%f", 5.0 + 4.9);

printf("%f\n", sqrt(9));
printf("round up %f\n", ceil(9.91203));
printf("round down %f\n", floor(9.582309));

printf("making constants \n");
int someNum = 5;
someNum = 8;
printf("look we changed someNum %d \n", someNum);
// remember to use %d for variables

const int CONST_NUM = 4;
// const num cannot be changed! remember to CAP THEM

// prompt input from the user;
// declare var with no value
int age;

printf("Enter your age: ");
// scanf allows user to input something into the program
// i will accept digit, and i want to store in age
scanf("%d", &age);
printf("you are %d years old", age);
double grade;
printf("Enter your grade: \n");
scanf("%lf", &grade);
printf("your gpa is %f \n", grade);

// getting a string;

char name[20];
// by adding a number in the string, we allow how many
// chars we will accept inside the string

printf("Enter your name: \n");
scanf("%s", name);
printf("Your name is %s \n", name);

char last_name[20];
printf("Enter your last name: \n");
// fgets lets us get a string w/ spaces
//fgets (var, amt. of chars, type of input)
fgets(last_name, 20, stdin);
printf("Your last name is %s \n", &last_name);


    return 0;
}
