#include <stdio.h>

int main(void)
{
    long int i;
    float x;

    i = 123456789;
    x = 0;
    printf("i+x=%f\n", i + x); // i+xはfloat型になる

    return 0;
}
