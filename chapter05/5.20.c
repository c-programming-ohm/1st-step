#include <stdio.h>

int times(void);           // times関数のプロトタイプ宣言

int main(void)
{
    int k;

    k = times();           // times()は1を返す
    printf("%dtimes\n", k);
    k = times() + times(); // times()は2回呼ばれる
    k = times();           // このtimes()は4を返す
    printf("%dtimes\n", k);

    return 0;
}
