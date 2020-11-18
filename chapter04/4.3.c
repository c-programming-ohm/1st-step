#include <stdio.h>

int main(void)
{
    int x, y;
    char c1, c2, c3;

    printf("数値2つと、文字を3文字入力してください ( x y c1 c2 c3 ) >>> ");
    scanf("%d %d %c %c %c", &x, &y, &c1, &c2, &c3);

    printf("入力値:x=%d,y=%d,c1=%c,c2=%c,c3=%c\n", x, y, c1, c2, c3);
    if (x >= 0 && x <= 100)
        printf("xは0以上かつ100以下の整数\n");
    if (y <= 0 || y >= 100)
        printf("yは0以下かまたは100以上の整数\n");
    if (c1 >= '0' && c1 <= '9')
        printf("入力文字c1は数字\n");
    if (c2 >= 'A' && c2 <= 'Z')
        printf("入力文字c2は英大文字\n");
    if (c3 == 'Y' || c3 == 'y')
        printf("入力文字c3はYまたはy\n");

    printf("xの値は%dです\n", x);
    printf("yの値は%dです\n", y);
    printf("c1コードは10進数で%d、16進数で%xです\n", c1, c1);
    printf("c2コードは10進数で%d、16進数で%xです\n", c2, c2);
    printf("c3コードは10進数で%d、16進数で%xです\n", c3, c3);

    return 0;
}
