#include <stdio.h>

int main(void)
{
    union name_or_age {
        char name[32]; // 名前
        int age;       // 年齢
    } visitor;
    // 名前か年齢の入力
    printf("お名前をどうぞ:");
    scanf("%s", visitor.name);
    printf("それでは年齢を教えてください:");
    scanf("%d", &visitor.age);

    // あいさつ
    printf("%sさん、こんにちは\n", visitor.name);
    printf("%d才の方ですね？はじめまして\n", visitor.age);
    return 0;
}
