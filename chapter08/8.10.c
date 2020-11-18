#include <stdio.h>

int main(void)
{
    int i;
    char msg[] = "C Programming";

    // 文字列の終端を示す'\0'を見つけるまで繰り返す
    for (i = 0; msg[i] != '\0'; i++)
    {
        putchar(msg[i]);
    }

    return 0;
}