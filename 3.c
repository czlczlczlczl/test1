#include <stdio.h>

void func(void);

int main(void)
{
    extern int count;

    func();
    count++;
    printf("1, count = %d\n", count);

    return 0;
}

int count;

void func(void)
{
    count++;
    printf("1, count = %d\n", count);
}