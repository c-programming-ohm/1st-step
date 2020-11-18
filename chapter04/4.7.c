#include <stdio.h>

int main(void)
{
    int month;

    printf("月を入力してください >>> ");
    scanf("%d", &month);

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("%d月は31日間あります。\n", month);
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("%d月は30日間あります。\n", month);
        break;
    case 2:
        printf("%d月は28日間、または29日間です。\n", month);
        break;
    default:
        printf("%d月は存在しません。\n", month);
        break;
    }

    return 0;
}
