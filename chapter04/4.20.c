#include <stdio.h>

int main(void)
{
    int i = 1;
    int n = 0;

    for (;;) // for文版 無限ループ
    {
        n = n + i;
        if (i >= 10)
        {
            break; // forループを終了
        }
        i++;
    }
    printf("for文版: %d\n", n);

    i = 1;
    n = 0;

    while (1) // while文版 無限ループ
    {
        n = n + i;
        if (i >= 10)
        {
            break; // whileループを終了
        }
        i++;
    }
    printf("while文版: %d\n", n);

    return 0;
}
