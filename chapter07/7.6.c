#include <stdio.h>
#include <string.h>

int main(void)
{
    char message[256];
    unsigned int len;

    printf("メッセージを入力してください >>> ");
    fgets(message, sizeof(message), stdin);

    len = strlen(message);
    printf("メッセージの長さは %d 文字です。\n", len);

    return 0;
}
