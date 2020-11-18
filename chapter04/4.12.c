#include <stdio.h>

int main(void)
{
    int num = 2985; // 当たりの回数
    int i;          // 試行回数
    int j;          // 残りの回数
    int input_num;  // ユーザの入力した値

    for (i = 0, j = 29; i < 30; i++, j--)
    {
        printf("%d回目の数字をどうぞ　？　>>> ", i + 1); // 30回の繰り返し
        scanf("%d", &input_num);

        if (input_num > num)
        {
            printf("大きいです　！　チャンスはあと%d回\n\n", j);
        }
        else if (input_num < num)
        {
            printf("小さいです　！　チャンスはあと%d回\n\n", j);
        }
        else
        {
            printf("\n\n ********** \n");
            printf(" * 大正解 *\n");
            printf(" **********\n ");
            break;
        }
    }

    return 0;
}
