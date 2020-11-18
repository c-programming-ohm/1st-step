#include <stdio.h>

int max(int, int);          // max関数のプロトタイプ宣言
double max(double, double); // max関数のプロトタイプ宣言

int main(void)
{
    int i, j;
    double x, y;

    printf("整数を入力してください>>>");
    scanf("%d %d", &i, &j);
    printf("bigger is %d\n", max(i, j));     // max関数の呼び出し

    printf("実数を入力してください>>>");
    scanf("%lf %lf", &x, &y);
    printf("the bigger is %g\n", max(x, y)); // max関数の呼び出し

    return 0;
}

int max(int former, int latter)              // max関数の定義
{
    return (former > latter) ? former : latter;
}

double max(double former, double latter)     // max関数の定義
{
    return (former > latter) ? former : latter;
}
