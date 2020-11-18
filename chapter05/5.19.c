#include <stdio.h>

void gcmprint(int, int);     // gcmprint関数のプロトタイプ宣言
int gcm(int, int);           // gcm関数のプロトタイプ宣言

int main(void)
{
    gcmprint(10, 5);         // 10と5の最大公約数を表示する
    gcmprint(52, 16);
    gcmprint(13, 19);
    gcmprint(44, 22);
    gcmprint(96, 33);

    return 0;
}

void gcmprint(int x, int y)  // xとyの最大公約数を表示する
{
    printf("%d\tgcm\t%d\t=\t%d\n", x, y, gcm(x, y));
}

int gcm(int x, int y)        // xとyの最大公約数を求めて返す
{
    int z;

    while ((z = x % y) != 0) // xをyで割った余りをzに代入し
    {                        // zが0以外のあいだループする
        x = y;               // xにyを代入し
        y = z;               // yに余りzを代入する
    }

    return y;                // 関数値として最大公約数を返す
}
