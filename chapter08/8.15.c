int str_copy(char *dst, char *src)
{
    while (1)
    {
        *dst = *src;      // コピー
        if (*dst == '\0') // ターミネータになったらこの関数を終了する
        {
            return 0;
        }
        dst++;            // 次の要素へ
        src++;            // 次の要素へ
    }
}