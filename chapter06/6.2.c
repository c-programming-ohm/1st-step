#include <stdio.h>

int main(void)
{
    int i;
    int tray[5];   // 5つの要素を持つ配列 tray の定義
    tray[0] = 15;  // 0番目の要素(tray[0])に15をセット
    tray[1] = 200; // 1番目の要素(tray[1])に200をセット
    tray[2] = 18;  // 2番目の要素(tray[2])に18をセット
    tray[3] = 55;  // 3番目の要素(tray[3])に55をセット
    tray[4] = 30;  // 4番目の要素(tray[4])に30をセット

    printf("文房具の番号を入力してください＞");
    scanf("%d", &i);                   // iに文房具をあらわす番号を入力
    printf("在庫%d個\n", tray[i - 1]); // 出力箇所. たった1行になりました

    return 0;
}
