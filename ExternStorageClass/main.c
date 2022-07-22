#include <stdio.h>
#include <stdlib.h>
int count;
extern void write_extern();

int main()
{
    write_extern();
    return 0;
}
