
// 定数
#define BUFFER_SIZE 256 // 入力ファイル読込バッファサイズ

// 集計結果保持用の変数定義
static MonthlyRecord_t dayCount[12];

int main(int argc, char *argv[])
{
    FILE *fp;
    char buf[BUFFER_SIZE];
    char *dataFile = NULL;
    char *outputFile = NULL;

    // 手順0: 変数の初期化
    for (int i = 0; i < sizeof(dayCount) / sizeof(MonthlyRecord_t); i++)
    {
        dayCount[i].summerDay = 0;
        dayCount[i].hotDay = 0;
        dayCount[i].exHotDay = 0;
    }
    // 入出力ファイル名の取り出し
    if (argc > 1 && argv[1])
    {
        dataFile = argv[1];
    }
    else
    {
        fprintf(stderr, "入力ファイルが指定されていません\n");
        exit(EXIT_FAILURE);
    }
    if (argc > 2 && argv[2])
    {
        outputFile = argv[2];
    }

    // ファイルオープン
    fp = fopen(dataFile, "r");
    if (fp == NULL)
    {
        fprintf(stderr, "入力ファイルオープン失敗 --- %s\n", dataFile);
        exit(EXIT_FAILURE);
    }

    // 手順1: 1行読み込み
    while (fgets(buf, BUFFER_SIZE, fp))
    {
        // 手順2: 気象データの取り出し
        DailyRecord_t record;
        getDailyRecord(&record, buf);

        // 手順3&4: 夏日判別とカウントアップ
        countup(&record);
    }
    if (fp)
    {
        fclose(fp);
        fp = NULL;
    }

    // 手順5: 結果の出力
    if (outputFile)
    {
        if (!writeCountFile(outputFile))
        {
            //　ファイル書き出し時のエラー
            exit(EXIT_FAILURE);
        }
    }

    return EXIT_SUCCESS;
}
