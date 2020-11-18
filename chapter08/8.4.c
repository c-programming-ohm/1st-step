#include <stdio.h>

int main(void)
{
    int base = 1;
    int i;
    int *p = &base;

    for (i = 0; i < 5; i++)
    {
        printf("%p ", p + i);
    }

    printf(" size = %d\n", sizeof(int));

    return 0;
}