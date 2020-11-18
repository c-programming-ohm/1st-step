#include <stdio.h>

int main(void)
{
    int i, j, k;
    int flag = 0; // 終了フラグ。値が0のときプログラムを継続、1のとき終了。初期値は0

    for (i = 1; i < 10; i++) // for文1
    {
        for (j = 1; j < 10; j++) // for文2
        {
            for (k = 1; k < 10; k++) // for文3
            {
                printf("%dx%dx%dは?\n", i, j, k);
                int ans;
                scanf("%d", &ans);    // 答えを入力させる
                if (ans != i * j * k) // この条件を満たした場合はループを抜けたい
                {
                    flag = 1; // プログラムを終了させるため終了フラグを1にする
                    break;    // for文3を抜ける
                }
            }
            if (flag == 1) // 終了フラグが1かどうか判定
                break;     // for文2を抜ける
        }
        if (flag == 1) // 終了フラグが1かどうか判定
            break;     // for文3を抜ける
    }

    printf("%dx%dx%dの答えは%dです\n", i, j, k, i * j * k);

    return 0;
}
