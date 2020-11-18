#include <stdio.h>

int main(void)
{
    // 構造体宣言と構造体変数定義
    union name_or_age {
        char name[32]; // 名前
        int age;       // 年齢
    } visitor;
    int input_name; // 名前を入力するかどうか
    printf("お名前を聞いてもよろしいですか？(yes…1/no…0) >");
    scanf("%d", &input_name);
    // 名前か年齢の入力
    if (input_name)
    {
        printf("お名前をどうぞ:");
        scanf("%s", visitor.name);
    }
    else
    {
        printf("それでは年齢を教えてください:");
        scanf("%d", &visitor.age);
    }

    // あいさつ
    if (input_name)
    {
        printf("%sさん、こんにちは\n", visitor.name);
    }
    else
    {
        printf("%d才の方ですね？はじめまして\n", visitor.age);
    }
    return 0;
}
