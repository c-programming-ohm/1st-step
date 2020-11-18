int sample()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    FILE *fp3 = NULL;
    int ret = -1;

    if (fp1 = fopen("sample1.txt", "r")) == NULL ) goto ERROR;
    if (fp2 = fopen("sample2.txt", "r")) == NULL ) goto ERROR;
    if (fp3 = fopen("sample3.txt", "r")) == NULL ) goto ERROR;

    // ここでファイルの読み込み処理を行う

    ret = 0;

ERROR:
    if (fp1 != NULL)
        fclose(fp1);
    if (fp2 != NULL)
        fclose(fp2);
    if (fp3 != NULL)
        fclose(fp3);

    return ret;
}
