#include <stdio.h>

int main(void)
{
    int a, b, result;

    a = 25;
    b = 5;

    // 足し算の結果を変数resultに格納する
    result = a + b;
    printf("%d + %d =  %d\n", a, b, result);

    // 引き算の結果を変数resultに格納する
    result = a - b;
    printf("%d - %d =  %d\n", a, b, result);

    // かけ算の結果を変数resultに格納する
    result = a * b;
    printf("%d * %d =  %d\n", a, b, result);

    // 割り算の結果を変数resultに格納する
    result = a / b;
    printf("%d / %d =  %d\n", a, b, result);

    return 0;
}
