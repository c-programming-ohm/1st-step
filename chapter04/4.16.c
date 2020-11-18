#include <stdio.h>

int main(void)
{
    int c;

    while ((c = getchar()) != EOF) // 1文字入力し、それをcに代入し、その値がEOFでなければループする
    {
        putchar(c); // cを出力する
    }

    return 0;
}
