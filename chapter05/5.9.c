#include <stdio.h>

int combi(int, int);         // combi関数のプロトタイプ宣言

int main(void)               // main関数のはじまり
{
    int t, m;

    for (t = 0; t <= 5; t++) // main関数の実行開始位置
    {
        for (m = 0; m <= t; m++)
        {
            printf("%dC%d=%d\t", t, m, combi(t, m)); // combi関数の呼び出し位置
        }
        printf("\n");
    }

    return 0;
}                            // main関数の終わり

int combi(int n, int r)            // combi関数の定義開始
{
    int i, nk = 1, rk = 1, nr = 1; // combi関数のデータ初期化

    for (i = 1; i <= n; i++)
    {
        nk *= i;                   // n!を求める
    }

    for (i = 1; i <= r; i++)
    {
        rk *= i;                   // r!を求める
    }

    for (i = 1; i <= (n - r); i++)
    {
        nr *= i;                   // (n-r)!を求める
    }

    return nk / (rk * nr);         // n C rを求める

}                                  // combi関数の定義終了
