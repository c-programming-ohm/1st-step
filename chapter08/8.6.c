#include <stdio.h>

int main(void)
{
    int a[10];
    int *a1, *a2, *a3;
    a1 = a;         // 配列aの先頭アドレス、&a[0]と同じ
    a2 = &a[5];     // a[5]の先頭アドレス
    a3 = a1 + 7;    // 配列aの先頭アドレスに7を加える

    printf("a2-a1=%d\n", a2 - a1);
    printf("a3-a1=%d\n", a3 - a1);
    printf("a3-a2=%d\n", a3 - a2);

    return 0;
}