#include <math.h>
#include <stdio.h>

int main(void)
{
    int s = 0;

    printf("          逆数　 　2乗     平方根\n");
    printf("   -------------------------------\n");
    while ((++s) <= 10)
    {
        double value = s;
        if (s % 2 == 1) // sが奇数ならば
        {
            continue; // whileの評価式部分「 (++s) <= 10 」に処理が移る
        }
        double a = 1 / value;
        double b = value * value;
        double c = sqrt(value);
        printf(" %5.1f    %5.3f  %6.1f    %6.4f\n", value, a, b, c);
    }

    return 0;
}
