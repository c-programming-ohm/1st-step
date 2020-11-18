#include <stdio.h>
#include <string.h>

int main(void)
{
    char txt1[256];
    char txt2[256];
    unsigned int len;

    printf("文字列１を入力してください >>> ");
    fgets(txt1, sizeof(txt1), stdin);

    printf("文字列２を入力してください >>> ");
    fgets(txt2, sizeof(txt2), stdin);

    if (strcmp(txt1, txt2) == 0)
    {
        printf("文字列１と文字列２は同じです\n");
    }
    else
    {
        printf("文字列１と文字列２は異なります\n");
    }

    return 0;
}
