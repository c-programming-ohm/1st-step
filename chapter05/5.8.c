#include <stdio.h>

int powint(int, int);    // この引数名を省略している点がリスト5.4と異なる

int main(void)
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        printf("%d\t%d\n", i, powint(2, i));
    }

    return 0;
}

int powint(int x, int p) // 関数の定義
{
    int y = 1;           // 正の整数xのp乗を求める関数

    while (p-- > 0)      // pの値を次々に減らしていって
    {                    // 0になるまで繰り返す。したがって
        y *= x;          // このループはp回繰り返される
    }

    return y;            // yをこの関数の値とする
}
