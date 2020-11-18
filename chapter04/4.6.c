#include <stdio.h>

int main(void)
{
    char c;

    printf("1文字入力してください >>> ");
    scanf("%c", &c);

    switch (c)
    {
    case '0': // '0'から'9'の場合
    case '1':
    case '2':
    case '3':
    case '4':
    case '5':
    case '6':
    case '7':
    case '8':
    case '9':
        printf("入力文字は数字の %c です。\n", c);
        break;
    default: // 数字以外の場合
        printf("入力文字は数字ではありません。\n");
        break;
    }

    return 0;
}
