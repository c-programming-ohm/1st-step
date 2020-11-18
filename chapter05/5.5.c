#include <stdio.h>

int powint(int, int);  // powint関数のプロトタイプ宣言

int main(void)
{
    int i;

    for (i = 0; i <= 10; i++)
    {
        printf("%d\t%d\n", i, powint(2, i));
    }

    return 0;
}
