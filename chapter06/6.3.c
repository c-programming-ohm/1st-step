#include <stdio.h>

int main(void)
{
    int i;
    int tray[5];

    tray[0] = 15;
    tray[1] = 200;
    tray[2] = 18;
    tray[3] = 55;
    tray[4] = 30;

    printf("文房具の番号を入力してください＞");
    for (;;)
    {
        scanf("%d", &i);
        if ((i <= 0) || (i > 5))
        {
            printf("1から5までの値を入力してください>");
        }
        else
        {
            break;
        }
    }

    printf("%d個の在庫があります\n", tray[i - 1]);

    return 0;
}
