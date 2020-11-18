#include <stdio.h>

int main(void)
{
    int c = getchar(); // 1文字入力する
    while (c != EOF)   // 入力された文字がEOF(データの終了)でない間繰り返す
    {
        putchar(c);    // cを出力する
        c = getchar(); // 1文字入力する
    }

    return 0;
}
