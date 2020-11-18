#include <stdio.h>

int main(void)
{
    char c;
    short i;
    int j;
    long int k;
    unsigned int t;
    float x;
    double y;
    long double z;

    printf("char(%ld)\n", sizeof c);
    printf("short(%ld), int(%ld), long int(%ld), unsigend int(%ld)\n", sizeof i, sizeof j, sizeof k, sizeof t);
    printf("float(%ld), double(%ld), long double(%ld)\n", sizeof x, sizeof y, sizeof z);

    return 0;
}
