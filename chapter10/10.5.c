#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int val;
    int sum = 0;
    int cnt = 0;
    FILE *fpin, *fpout;

    if ((fpin = fopen("indata.dat", "r")) == NULL) // 入出力ファイルのオープン
    {
        printf("ファイルが見つかりません。 --- indata.dat\n");
        exit(EXIT_FAILURE);
    }
    if ((fpout = fopen("outdata.dat", "w")) == NULL)
    {
        printf("ファイルが見つかりません。 --- outdata.dat\n");
        fclose(fpin);
        exit(EXIT_FAILURE);
    }

    while (fscanf(fpin, "%d", &val) != EOF) // データの入力
    {
        fprintf(fpout, "入力データ>>> %d\n", val);
        sum += val;
        cnt++;
    }

    if (cnt > 0) // 合計・平均値の表示
    {
        printf("合計=%d 平均値=%g\n", sum, (double)sum / cnt);
    }

    fclose(fpin); // ファイルのクローズ
    fclose(fpout);

    return EXIT_SUCCESS;
}
