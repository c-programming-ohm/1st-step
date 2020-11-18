#include <stdio.h>

int main(void)
{
    printf("文章の途中で改行\nすることもできます\n");
    printf("文字列配列を囲う\"ダブルクォーテーション\"や\n");
    printf("\'シングルクォーテーション\'も表示可能です\n");
    printf("\u2661（ユニコードの文字「ハート」U+2661）にも対応しています\n");

    return 0;
}
