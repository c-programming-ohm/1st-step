#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val;
    int sum = 0;
    int cnt;
    FILE *fp;

    if ((fp = fopen("indata.dat", "r")) == NULL) // 入力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- indata.dat\n");
        exit(EXIT_FAILURE);
    }

    for (cnt = 0;; cnt++) // データの入力
    {
        fscanf(fp, "%d", &val);
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

    fclose(fp); // ファイルのクローズ

    return EXIT_SUCCESS;
}
