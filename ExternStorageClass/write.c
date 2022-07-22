#include <stdio.h>
// declare int count as an extern var
extern int count;

void write_extern(void)
{
    count = 5;
    printf("count is %f", count);
}
