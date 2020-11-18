#include <math.h>
#include <stdio.h>

int main(void)
{
    int unit;
    double angle;
    double pi, th, x, y;

    printf("入力角度　入力角度の単位(0:degree, 1:radian)の順に入力 >>> ");
    scanf("%lf %d", &angle, &unit);

    // 単位系の変換
    pi = 3.141592653589793; // 円周率π
    if (unit == 0)          // 入力角度の単位は度(degree)
    {
        th = (angle * pi) / 180.0; // 度(degree)をラジアン(radian)に変換する
        printf("θ=%g[degree]での座標は", angle);
    }
    else if (unit == 1) // 入力角度の単位は度(radian)
    {
        th = angle;
        printf("θ=%g[radian]での座標は", angle);
    }
    else // 入力角度の単位の指定が0でも1でもない
    {
        printf("入力データエラー:*** 単位 ***\n");
        return 1; // エラーによるプログラム終了
    }

    x = cos(th); // x座標値を求める
    y = sin(th); // y座標値を求める

    printf("( %g, %g )です\n", x, y);

    return 0; // プログラム正常終了
}
