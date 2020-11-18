#include <stdio.h>

int main(void)
{
    int diff;
    char large; // 大文字
    char small; // 小文字

    printf("アルファベットの大文字を入力してください>>>");
    scanf("%c", &large);
    diff = 'a' - 'A';     // 'A'と'a'との文字の差
    small = large + diff; // 小文字に変換

    printf("大文字は%c   小文字は%c\n", large, small);

    return 0;
}
