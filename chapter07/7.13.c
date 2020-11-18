#include <stdio.h>

int str_cpy(char dst[], char src[])
{
    int i = 0;
    while (1)
    {
        dst[i] = src[i];
        if (src[i] == '\0')
            return 0;
        i++;
    }
}

int str_cat(char dst[], char src[])
{
    int i = 0;
    int j = 0;
    while (1)
    {
        if (dst[i] == '\0')
            break;
        i++;
    }
    while (1)
    {
        dst[i + j] = src[j];
        if (src[j] == '\0')
            return 0;
        j++;
    }
}

int main(void)
{
    char sign[16];
    char word1[] = "flash.";
    char word2[] = "thunder.";

    printf("challenge = %s\npassword = %s\ncountersign = %s\n", word1, word2, sign);

    str_cpy(sign, word1);
    str_cat(sign, word2);

    printf("--> countersign = %s\n", sign);

    return 0;
}
