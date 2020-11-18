#include <stdio.h>

int main(void)
{
    int x;                       // ポインタの指し示す変数
    int *p;                      // ポインタ定義

    p = &x;                      // ポインタに変数xのアドレスを代入する

    printf("Address = %p\n", p); // ポインタpを表示する

    return 0;
}