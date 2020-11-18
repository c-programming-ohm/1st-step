#include <stdio.h>

int main(void)
{
    int a, b, c;
    double t;
    double ex4(int, int, double, int); // 関数ex4のプロトタイプ宣言

    ex4(a, b, t, c);
    ex4(1, 2, 3.0, 4);
    ex4(a, b, 5, c);                   // 実引数の5に注意

    return 0;
}

double ex4(int a, int b, double t, int c)
{
    return a + b + t + c;
}
