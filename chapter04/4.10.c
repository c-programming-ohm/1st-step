#include <stdio.h>

int main(void)
{
    int total = 0;

    for (int i = 1; i <= 10; i++)
    {
        total = total + i;
    }
    printf("1から10までの和は%dです\n", total);

    return 0;
}
