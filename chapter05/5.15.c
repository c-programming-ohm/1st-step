#include <stdio.h>

int maxint(int, int);             // maxint関数のプロトタイプ宣言
double maxdouble(double, double); // maxdouble関数のプロトタイプ宣言

int main(void)
{
    int i, j;
    double x, y;

    printf("整数を入力してください>>>");
    scanf("%d %d", &i, &j);
    printf("bigger is %d\n", maxint(i, j));        // maxint関数の呼び出し

    printf("実数を入力してください>>>");
    scanf("%lf %lf", &x, &y);
    printf("the bigger is %g\n", maxdouble(x, y)); // maxdouble関数の呼び出し

    return 0;
}

int maxint(int former, int latter)                 // maxint関数の定義
{
    return (former > latter) ? former : latter;
}

double maxdouble(double former, double latter)     // maxdouble関数の定義
{
    return (former > latter) ? former : latter;
}
