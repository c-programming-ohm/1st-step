void getDailyRecord(DailyRecord_t *rec, char *buf)
{
    char dateString[strlen("yyyy/mm/dd") + 1]; //　日付の長さ+NULL

    // この↓フォーマットで一行を分解
    // yyyy/mm/dd,最高気温,最低気温
    sscanf(buf, "%[^,],%f,%f", dateString, &rec->highestTemp, &rec->lowestTemp);

    // yyyy/mm/ddを分解
    sscanf(dateString, "%d/%d/%d", &rec->year, &rec->month, &rec->day);
}
