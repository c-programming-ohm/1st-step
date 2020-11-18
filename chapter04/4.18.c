#include <stdio.h>

int main(void)
{
    int isMale;

    printf("性別を入力してください(女性:0／男性:1)>>>");
    scanf("%d", &isMale);
    printf("安心できる年齢は･･･\n");

    for (int age = 1; age <= 100; age++)
    {
        if (isMale)
        {
            //男性の厄年
            if (age == 25)
            {
                continue;
            }
            if (age == 42)
            {
                continue;
            }
            if (age == 61)
            {
                continue;
            }
        }
        else
        {
            //女性の厄年
            if (age == 19)
            {
                continue;
            }
            if (age == 33)
            {
                continue;
            }
            if (age == 37)
            {
                continue;
            }
        }
        printf("\t%d歳\n", age);
    }

    return 0;
}
