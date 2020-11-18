#include <stdio.h>

int main(void)
{
    int m, n, amari;

    m = 12345;
    n = 7;
    amari = m - m / n * n;
    printf("%dを%dで割った余りは%dです\n", m, n, amari);

    return 0;
}
