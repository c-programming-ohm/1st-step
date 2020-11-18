#include <stdio.h>

int str_cmp(char str1[], char str2[])
{
    int i = 0;
    int d = 0;

    while (1)
    {
        d = str1[i] - str2[i];
        if (d != 0)
        {
            return d;
        }
        if (str1[i] == '\0')
        {
            return 0;
        }
        i++;
    }
}

int main(void)
{
    char txt1[256];
    char txt2[256];
    unsigned int len;

    printf("文字列１を入力してください >>> ");
    fgets(txt1, sizeof(txt1), stdin);

    printf("文字列２を入力してください >>> ");
    fgets(txt2, sizeof(txt2), stdin);

    if (str_cmp(txt1, txt2) == 0)
    {
        printf("文字列１と文字列２は同じです。\n");
    }
    else
    {
        printf("文字列１と文字列２は異なります。\n");
    }

    return 0;
}
