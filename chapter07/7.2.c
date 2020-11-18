#include <stdio.h>

int main(void)
{
    char str[6];         // 文字列を格納する変数strを定義

    str[0] = 'H';        // 配列の要素として1文字ずつ代入
    str[1] = 'E';
    str[2] = 'L';
    str[3] = 'L';
    str[4] = 'O';
    str[5] = '\0';       // 配列の最後には終了文字としてNULL文字を代入
    printf("%s\n", str); // 変数strを表示

    return 0;
}
