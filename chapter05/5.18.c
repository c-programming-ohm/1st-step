#include <stdio.h>

void gcmprint(int, int);     // gcmprint関数のプロトタイプ宣言

int main(void)
{
    gcmprint(10, 5);         // 10と5の最大公約数を求めて表示
    gcmprint(52, 16);
    gcmprint(13, 19);
    gcmprint(44, 22);
    gcmprint(96, 33);

    return 0;
}

void gcmprint(int x, int y)  // gcmprint関数の定義：xとyの最大公約数を求めて表示
{
    int z;

    printf("%d\tgcm\t%d\t=\t", x, y);
    while ((z = x % y) != 0) // xをyで割った余りをzに代入し
    {                        // zが0以外のあいだループする
        x = y;               // xにyを代入し
        y = z;               // yに余りzを代入する
    }
    printf("%d\n", y);       // 最大公約数の印字
}
