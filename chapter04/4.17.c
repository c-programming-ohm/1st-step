#include <stdio.h>

int main(void) // 1 2 3 4 5 6 7 8 9 10 と表示するプログラム
{
    int i = 0;

    do
    {
        i++;
        printf(" %d ", i);
    } while (i < 10);

    return 0;
}
