#include <stdio.h>
#include <stdlib.h>

int main()
{
    // r read file
    // w write file
    // a append file

    // this is File pointer = fopen("file we want to make","use write on it");
    FILE * fpointer = fopen("employees.txt", "w");
    // makes a file employees.txt default is in same folder as this file;
    // after you open a file, close it!
    fprintf(fpointer, "Jim, Salesman \n Pam, Receptionist \n Oscar, Accounting \n");
    // all that is written to the file we made;

    fclose(fpointer);

    fopen("employees.txt", "a");
    fprintf(fpointer, "Kelly, Customer Service \n");
    fclose(fpointer);
    // all that is written to the file we made;

    return 0;
}
