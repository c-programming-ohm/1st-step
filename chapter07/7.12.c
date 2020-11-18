#include <stdio.h>
#include <string.h>

int main(void)
{
    char sign[16];
    char word1[] = "flash.";
    char word2[] = "thunder.";

    printf("challenge = %s\npassword = %s\ncountersign = %s\n", word1, word2, sign);

    strcpy(sign, word1);
    strcat(sign, word2);

    printf("--> countersign = %s\n", sign);

    return 0;
}
