#include <stdio.h>

int str_cpy(char dst[], char src[])
{
    int i = 0;
    while (1)
    {
        dst[i] = src[i];
        if (src[i] == '\0')
        {
            return 0;
        }
        i++;
    }
}

int main(void)
{
    char str1[] = "dog";
    char str2[] = "cat";

    printf("コピー前：str1 = %s, str2 = %s\n", str1, str2);

    str_cpy(str1, str2);

    printf("コピー後：str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}
