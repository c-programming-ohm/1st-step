#include <stdio.h>

int main(void)
{
    double a, b, c;

    a = 0.1;
    b = 0.1 * 0.1 * 0.1 * 0.1 * 1000;
    printf("丸め誤差  0.1と0.1*0.1*0.1*0.1*1000の比較\n");
    c = a - b;
    if (c == 0.0)
    {
        printf("誤差がない\n");
    }
    else
    {
        printf("誤差が %30.28fである\n", c);
    }

    return 0;
}
