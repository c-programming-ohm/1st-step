#include <stdio.h>

int main(void)
{
    int a, b, surplus, result;

    // 2つの整数を入力
    printf("Please Enter Number: ");
    scanf("%d", &a);
    printf("Please Enter Other Number: ");
    scanf("%d", &b);

    // 余りを計算
    surplus = a % b;

    // 条件分岐
    if (surplus == 0)
    {
        result = a / b;
        printf("%d / %d =  %d\n", a, b, result);
    }

    return 0;
}
