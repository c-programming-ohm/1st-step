int sample()
{
    FILE *fp1 = NULL;
    FILE *fp2 = NULL;
    FILE *fp3 = NULL;
    int ret = -1;

    if (fp1 = fopen("sample1.txt", "r")) == NULL )
        {
            return ret;
        }
    if (fp2 = fopen("sample2.txt", "r")) == NULL )
        {
            fclose(fp1);
            return ret;
        }
    if (fp3 = fopen("sample3.txt", "r")) == NULL )
        {
            fclose(fp1);
            fclose(fp2);
            return ret;
        }

    // ここでファイルの読み込み処理を行う

    ret = 0;
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return ret;
}
