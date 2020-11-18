#include <stdio.h>

int main(void)
{
    int val;
    int sum = 0;
    int cnt;

    for (cnt = 0;; cnt++) // データの入力ループ
    {
        printf("データを入力＞＞＞");
        scanf("%d", &val);
        if (val == 0)
        {
            break;
        }
        sum += val;
    }

    if (cnt > 0) // 合計・平均値の表示
    {
        printf("合計=%d 平均値=%g\n", sum, (double)sum / cnt);
    }

    return 0;
}
