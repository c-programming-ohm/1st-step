#include <stdio.h>

int max(int, int);

int main(void)
{
    int i, j;

    printf("数字を入力してください>>>");
    scanf("%d %d", &i, &j);
    printf("the bigger is %d\n", max(i, j));
    return 0;
}

int max(int former, int latter)
{
    return (former > latter) ? former : latter;
}
