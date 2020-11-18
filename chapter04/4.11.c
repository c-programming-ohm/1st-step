#include <math.h>
#include <stdio.h>

int main(void)
{
    double t; // double型のカウンタ変数
    double sine, cosine;

    printf("三角関数\n");
    printf("  t      sin       cos\n");
    for (t = 0.0; t < 1.0; t += 0.1)
    {
        double sine = sin(t);
        double cosine = cos(t);
        printf(" %3.1f    %6.4f    %6.4f\n", t, sine, cosine);
    }

    return 0;
}
