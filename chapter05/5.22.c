#include <stdio.h>

int times(void);            // times関数のプロトタイプ宣言

int x;                      // グローバル変数（関数の外側で定義）

int main(void)
{
    int k;

    x = 0;                  // グローバル変数xを0に初期化

    k = times();            // times()は1を返す
    printf("%dtimes\n", k);
    k = times() + times();  // times()は2回呼ばれる
    k = times();            // このtimes()は4を返す
    printf("%dtimes\n", k);

    return 0;
}

int times(void)             // times関数の定義（呼ばれた回数を返す関数）
{
    return ++x;             // グローバル変数xを1増加して、その値を返す
}
