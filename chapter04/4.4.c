#include <stdio.h>

int main(void)
{
    int a;

    printf("入力データは? >>> ");
    scanf("%d", &a);

    printf("データは"); // ---> 必ず表示されます
    if (a % 2 == 0)
    {
        printf("偶数"); // ---> 入力データが偶数の場合に表示されます
    }
    else
    {
        printf("奇数"); // ---> 入力データが奇数の場合に表示されます。
    }
    printf("です\n"); // ---> 必ず表示されます

    return 0;
}
