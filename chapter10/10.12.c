#include <stdio.h>
#include <stdlib.h>

#define MAX_STR_LEN 80

int main(void)
{
    FILE *fpin, *fpout;
    char s[MAX_STR_LEN];

    if ((fpin = fopen("indata.dat", "r")) == NULL) // 入力ファイルのオープン
    {
        fprintf(stderr, "ファイルが見つかりません。--- indata.dat\n");
        exit(EXIT_FAILURE);
    }

    if ((fpout = fopen("outdata.dat", "w")) == NULL) // 出力ファイルのオープン
    {
        fprintf(stderr, "ファイルが作成できません。 --- outdata.dat\n");
        fclose(fpin);
        exit(EXIT_FAILURE);
    }

    if (fgets(s, MAX_STR_LEN, fpin) != NULL) // 入力ファイルにデータがあれば
    {                                        // 出力ファイルに書き込む
        fputs(s, fpout);
    }

    fclose(fpin);  // 入力ファイルのクローズ
    fclose(fpout); // 出力ファイルのクローズ

    return EXIT_SUCCESS;
}
