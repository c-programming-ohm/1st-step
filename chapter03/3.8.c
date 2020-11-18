#include <stdio.h>

int main(void)
{
    int h; // 時間
    int m; // 分
    int s; // 秒
    int t; // 総時間(秒)

    h = 5;
    m = 25;
    s = 36;
    t = 3600 * h + 60 * m + s;
    printf("%d時間%d分%d秒は%d秒です\n", h, m, s, t);

    return 0;
}
