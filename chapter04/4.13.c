#include <math.h>
#include <stdio.h>

int main(void)
{
    int i = 1; // 変数iへ最初の値である1を代入する
    printf("        逆数      2乗     平方根\n");
    printf("---------------------------------\n");

    while (i <= 10) // iが10以下の間繰り返す
    {
        double value = i; // 実数計算をするのでiを実数化しvalueにセット
        double a = 1 / value;
        double b = value * value;
        double c = sqrt(value);
        printf("%5.1f   %5.3f   %6.1f    %6.4f\n", value, a, b, c);
        i = i + 1; // 変数iをカウントアップ
    }

    return 0;
}
