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