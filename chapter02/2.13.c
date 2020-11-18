#include <stdio.h>

int main(void)
{
    int a, b, surplus, result;

    // 2つの整数を入力
    printf("Please Enter Number: ");
    scanf("%d", &a);
    printf("Please Enter Other Number: ");
    scanf("%d", &b);

    // 条件分岐
    if (b != 0)
    {
        // 除算の余りと商を計算
        surplus = a % b;
        result = a / b;

        // 条件分岐
        if (surplus == 0)
        {
            printf("%d / %d =  %d\n", a, b, result);
        }
        else
        {
            printf("%d / %d =  %d ... %d\n", a, b, result, surplus);
        }
    }
    else
    {
        // ゼロ除算
        printf("Error : Division by zero\n");
    }

    return 0;
}
