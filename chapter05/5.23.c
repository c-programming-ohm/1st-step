#include <stdio.h>

int times(void);   // times関数のプロトタイプ宣言

int main(void)
{
    int count = 0; // カウンタ
    int total = 0; // 1からiまでの合計

    for (count = 0; count < 10; count++)
    {
        total += times();
    }
    printf("1 + 2 + ... + 10 = %d\n", total);

    return 0;
}

int times(void)
{
    static int x;  // static変数x（0に初期化されている）

    return ++x;
}
