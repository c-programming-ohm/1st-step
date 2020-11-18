#include <stdio.h>       // 実際に動くswap関数の例

void swap(int *, int *); // swap関数のプロトタイプ宣言

int main(void)
{
    int x, y;

    x = 5;               // 引数の代入1
    y = 3;               // 引数の代入2
    swap(&x, &y);        // 関数の呼び出し：xのアドレスとyのアドレスを指定
    printf("x=%d\ty=%d\n", x, y); // 印字

    return 0;
}

void swap(int *a, int *b)
{
    int temp;

    temp = *a;           // swap実行1
    *a = *b;             // swap実行2
    *b = temp;           // swap実行3
}