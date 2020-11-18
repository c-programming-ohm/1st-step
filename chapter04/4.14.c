#include <stdio.h>

int main(void)
{
    int i = 1;
    int total = 0;

    // 境界条件に等号が入らない場合
    while (i < 10) // 間違いバージョン
    {
        total = total + i;
        i++;
    }
    printf("[境界条件が「未満」の場合] 1から10までの和は%dです。変数iは%dです。\n", total, i);

    i = 0;
    total = 0;
    // 境界条件に等号が入る場合
    while (i <= 10) // 正解バージョン
    {
        total = total + i;
        i++;
    }
    printf("[境界条件が「以下」の場合] 1から10までの和は%dです。変数iは%dです。\n", total, i);

    return 0;
}
