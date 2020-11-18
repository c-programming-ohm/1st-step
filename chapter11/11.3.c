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
