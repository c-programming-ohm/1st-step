#include <stdio.h>

int main(void)
{
    int i, j;

    for (i = 1; i < 10; i++) // for文1
    {
        for (j = 1; j < 10; j++) // for文2
        {
            printf("%dx%dは?\n", i, j);
            int ans;
            scanf("%d", &ans); // 答えを入力させる
            if (ans != i * j)
            {
                goto EXIT_ALL_LOOP;
            }
        }
    }

EXIT_ALL_LOOP:
    printf("%dx%dの答えは%dです\n", i, j, i * j);

    return 0;
}
