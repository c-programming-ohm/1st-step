#include <stdio.h>

int main(void)
{
    const double c = 2.99792458e8; // 光速
    double m;                      // 物質の質量

    m = 4e-3;
    printf("エネルギーは%gJ\n", m * c * c);

    return 0;
}
