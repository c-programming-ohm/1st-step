#include <stdio.h>

int main(void)
{
    int tray1 = 15;
    int tray2 = 200;
    int tray3 = 18;
    int tray4 = 55;
    int tray5 = 30;
    int i;

    printf("文房具の番号を入力してください＞");
    scanf("%d", &i); // iに文房具をあらわす番号を入力
    switch (i)
    {
    case 1: // もしiが1なら, 1番目の文房具の数量を表示
        printf("在庫%d個\n", tray1);
        break;
    case 2: // もしiが2なら, 2番目の文房具の数量を表示
        printf("在庫%d個\n", tray2);
        break;
    case 3: // もしiが3なら, 3番目の文房具の数量を表示
        printf("在庫%d個\n", tray3);
        break;
    case 4: // もしiが4なら, 4番目の文房具の数量を表示
        printf("在庫%d個\n", tray4);
        break;
    case 5: // もしiが5なら, 5番目の文房具の数量を表示
        printf("在庫%d個\n", tray5);
        break;
    default:
        break;
    }

    return 0;
}
