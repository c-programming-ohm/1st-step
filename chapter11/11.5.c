#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 定数
#define BUFFER_SIZE 256 // 入力ファイル読込バッファサイズ

// 月別集計値構造体
typedef struct MonthlyRecord_T
{
    int summerDay; // 夏日の日数
    int hotDay;    // 真夏日の日数
    int exHotDay;  // 猛暑日の日数
} MonthlyRecord_t;

// 入力レコード構造体
typedef struct DailyRecord_T
{
    int year;          // 日付:年
    int month;         // 日付:月
    int day;           // 日付:日
    float highestTemp; // 最高気温
    float lowestTemp;  // 最低気温
} DailyRecord_t;

// 集計結果保持用の変数定義
static MonthlyRecord_t dayCount[12];

// 関数プロトタイプ宣言
void getDailyRecord(DailyRecord_t *rec, char *buf);
void countup(DailyRecord_t *rec);
bool writeCountFile(char *fileName);
void displayDayCount();
void dbgLog(DailyRecord_t rec);

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
        /*dbgLog( record );*/

        // 手順3&4: 夏日判別とカウントアップ
        countup(&record);
    }
    if (fp)
    {
        fclose(fp);
        fp = NULL;
    }

    // 手順5: 結果の出力
    displayDayCount();
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

// データ取り出し関数
void getDailyRecord(DailyRecord_t *rec, char *buf)
{
    char dateString[strlen("yyyy/mm/dd") + 1]; //　日付の長さ+NULL

    // この↓フォーマットで一行を分解
    // yyyy/mm/dd,最高気温,最低気温
    sscanf(buf, "%[^,],%f,%f", dateString, &rec->highestTemp, &rec->lowestTemp);

    // yyyy/mm/ddを分解
    sscanf(dateString, "%d/%d/%d", &rec->year, &rec->month, &rec->day);
}

// 夏日計数関数
void countup(DailyRecord_t *rec)
{
    if (1 <= rec->month && rec->month <= 12) // 対象月の確認
    {
        MonthlyRecord_t *target = &dayCount[rec->month - 1];
        if (rec->highestTemp >= 35.0) // 猛暑日判定
        {
            target->exHotDay++;
        }
        else if (rec->highestTemp >= 30.0) // 真夏日判定
        {
            target->hotDay++;
        }
        else if (rec->highestTemp >= 25.0) // 夏日判定
        {
            target->summerDay++;
        }
    }
}

// 集計結果出力関数
bool writeCountFile(char *fileName)
{
    bool result = false;
    FILE *fp;

    fp = fopen(fileName, "w");
    if (fp)
    {
        for (int i = 0; i < sizeof(dayCount) / sizeof(MonthlyRecord_t); i++)
        {
            // 出力フォーマット： 月,夏日,真夏日,猛暑日
            fprintf(fp, "%d,%d,%d,%d\n", i + 1, dayCount[i].summerDay, dayCount[i].hotDay, dayCount[i].exHotDay);
        }
        fclose(fp);
        result = true;
    }
    else
    {
        fprintf(stderr, "出力ファイルオープン失敗 --- %s\n", fileName);
    }

    return result;
}

// 集計結果表示関数
void displayDayCount()
{
    for (int i = 0; i < sizeof(dayCount) / sizeof(MonthlyRecord_t); i++)
    {
        fprintf(stdout, "%2d月 夏日:%2d日, 真夏日:%2d日, 猛暑日:%2d日\n", i + 1, dayCount[i].summerDay,
                dayCount[i].hotDay, dayCount[i].exHotDay);
    }
}

// 入力レコード表示関数（デバッグ用）
void dbgLog(DailyRecord_t rec)
{
    fprintf(stdout, "DailyRecord{%d/%d/%d - %f, %f}\n", rec.year, rec.month, rec.day, rec.lowestTemp, rec.highestTemp);
}
