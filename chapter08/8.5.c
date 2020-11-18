#include <stdio.h>

int main(void)
{
    int i;
    int base = -4;    // -4はダミー
    int *p = &base;

    for (i = 0; i < 5; i++)
    {
        printf("%p ", p);
        p += 3;
    }

    printf(" size = %d\n", sizeof(int));

    return 0;
}