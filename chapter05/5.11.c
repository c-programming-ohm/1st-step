#include <math.h>
#include <stdio.h>

double mysqrt(double x);                   // mysqrt関数のプロトタイプ宣言

int main(void)
{
    double x;

    printf("\tx\tsqrt x\t\tmysqrt x\n");   // タイトル表示
    for (x = 1; x <= 10; x += 1)           // x=1.0, 2.0, 3.0, …, 10.0
    {
        printf("\t%3.1f\t%12.10f\t%12.10f\n", x, sqrt(x), mysqrt(x));
    }

    return 0;
}

double mysqrt(double x)                    // square rootを求める関数
{
    const double eps = 1.0e-10;            // 打ち切り計算誤差
    double guess = 1.0;                    // 推測値

    while (fabs(guess * guess - x) >= eps) // 推測値がよくなるまで繰り返す
    {
        guess = (guess + x / guess) / 2.0; // 推測値の更新
    }

    return guess;                          // 関数の戻り値
}
