#include <stdio.h>

int main(void)
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 0}; // 0はターミネータ
    int i;
    int sum;
    int *p;

    p = &a[0];       // 配列aの先頭アドレスをpにセット
    sum = 0;

    while (*p)       // ターミネータがくるまでループする
    {
        sum += *p++;
    }

    printf("合計= %d\n", sum);

    return 0;
}