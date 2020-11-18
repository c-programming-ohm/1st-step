#include <stdio.h>

int main(void)
{
    char c1, c2;

    printf("A～Zまたはa～zの文字を2文字入力してください >>> ");
    scanf("%c%c", &c1, &c2);

    if (c1 == 'a')
        printf("1番目の文字はaです\n");
    if (c1 == 'b')
        printf("1番目の文字はbです\n");
    if (c1 == 'c')
        printf("1番目の文字はcです\n");
    if (c1 == 'd')
        printf("1番目の文字はdです\n");
    if (c2 < 'a')
        printf("2番目の文字は英小文字ではありません\n");

    printf("1番目(%c)の文字コードは10進数で%d、16進数で%xです\n", c1, c1, c1);
    printf("2番目(%c)の文字コードは10進数で%d、16進数で%xです\n", c2, c2, c2);
    return 0;
}
