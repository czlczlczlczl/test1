#include <stdio.h>

int main(void)
{
    int i = 100;
    {
        int i = 110;
        {
            int i = 120;
            printf("i = %d\n", i);
        }
        {
            printf("i = %d\n", i);
            int i = 130;
            printf("i = %d\n", i);
        }
        printf("i = %d\n", i);
    }
    printf("i = %d\n", i);

    return 0;
}