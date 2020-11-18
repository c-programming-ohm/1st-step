#include <stdio.h>

/***** バブルソートによる並べ替え *****/
int main(void)
{
    int d[5]; // ソートするデータ
    int temp;
    int i, j;

    printf("データを5個入力してください\n");
    for (i = 0; i < 5; i++) // データの入力
    {
        scanf("%d", &d[i]);
    }

    for (i = 0; i < 4; i++) // 並べ替え
    {
        for (j = i + 1; j < 5; j++)
        {
            if (d[i] < d[j]) // もし d[ i ] < d [ j ] ならば
            {
                temp = d[i]; // d[ i ] と d[ j ]
                d[i] = d[j]; // を
                d[j] = temp; // 交換する
            }
        }
    }

    printf("ソート結果です\n");
    for (i = 0; i < 5; i++) // データの表示
    {
        printf("%d\n", d[i]);
    }

    return 0;
}
