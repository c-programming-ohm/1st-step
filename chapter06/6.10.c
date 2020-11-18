#include <stdio.h>

#define KOSUU 5

/***** バブルソートによる並べ替え2 *****/
int main(void)
{
    int d[KOSUU];
    int temp;
    int i, j;

    printf("データを%d個入力してください\n", KOSUU);
    for (i = 0; i < KOSUU; i++) // データの入力
    {
        scanf("%d", &d[i]);
    }

    for (i = 0; i < KOSUU - 1; i++)
    {
        for (j = i + 1; j < KOSUU; j++)
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
    for (i = 0; i < KOSUU; i++) // データの表示
    {
        printf("%d\n", d[i]);
    }

    return 0;
}
