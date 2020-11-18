#include <stdio.h>

#define MAX_SEAT 10 // 空席の数

int main(void)
{
    struct tag
    {
        int x;
        double y;
    } sample;
    struct tag *p; // tag構造体へのポインタ

    p = &sample; // ポインタの初期化
    p->x = 10;   // 矢印演算子を使用したメンバxの参照
    p->y = 20.0; // 矢印演算子を使用したメンバyの参照

    printf("x=%d y=%e\n", p->x, p->y);

    return 0;
}
