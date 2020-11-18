#include <stdio.h>

#define KOSUU 5

/***** バブルソートによる並べ替え3 *****/
int main(void)
{
    int temp;
    int i, j, n;

    printf("データの個数を入力してください(2 ～ %d)\n", KOSUU);
    do
    {
        scanf("%d", &n);
        if ((n < 2) || (n > KOSUU))
        {
            printf("2から%dまでの値を入力してください\n", KOSUU);
        }
    } while ((n < 2) || (n > KOSUU));

    int d[n]; // 要素数がnの配列を定義する

    printf("データを%d個入力してください\n ", n);
    for (i = 0; i < n; i++) // データの入力
    {
        scanf("%d", &d[i]);
    }

    for (i = 0; i < n - 1; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (d[i] < d[j])
            {
                temp = d[i];
                d[i] = d[j];
                d[j] = temp;
            }
        }
    }

    printf("ソート結果です\n");
    for (i = 0; i < n; i++) // データの表示
    {
        printf("%d\n", d[i]);
    }

    return 0;
}
