#include <stdio.h>

int main(void)
{
    int h, m, s;
    h = 5; // 実行文
    m = 25;
    s = 36;
    int t; // tの定義が実行文のあとにある

    t = 3600 * h + 60 * m + s;
    printf("%d時間%d分%d秒は%d秒です\n", h, m, s, t);

    return 0;
}
