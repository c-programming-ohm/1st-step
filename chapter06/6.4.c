#include <stdio.h>

int main(void)
{
    int i;
    int tray[5];

    tray[0] = 15;
    tray[1] = 200;
    tray[2] = 18;
    tray[3] = 55;
    tray[4] = 30;

    printf("すべての要素の表示\n");
    for (i = 0; i < 5; i++)
    {
        printf("%d\n", tray[i]);
    }

    return 0;
}
