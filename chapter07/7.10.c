#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "dog";
    char str2[] = "cat";

    printf("コピー前：str1 = %s, str2 = %s\n", str1, str2);

    strcpy(str1, str2);

    printf("コピー後：str1 = %s, str2 = %s\n", str1, str2);

    return 0;
}
