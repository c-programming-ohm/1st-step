#include <stdio.h>

int main(void)
{
    // 足し算をする2つの値と答えを格納する箱a,b,cを用意する
    int a, b, c;

    // 足し算をする2つの値を箱aと箱bに格納する
    a = 1;
    b = 2;

    // 箱aの値と箱bの値を足し算して、結果を箱cに格納する
    c = a + b;

    // 箱cの値をディスプレイに表示する
    printf("c =  %d\n", c);

    return 0;
}
