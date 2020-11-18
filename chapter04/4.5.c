#include <stdio.h>

int main(void)
{
    int rank;

    printf("あなたの順位は？ >>> ");
    scanf("%d", &rank);

    switch (rank)
    {
    case 1:
        printf("優勝したあなたには、海外旅行です。\n");
        break;
    case 2:
        printf("2位のあなたには、国内旅行です。\n");
        break;
    case 3:
        printf("3位のあなたには、ホテルの食事券です。\n");
        break;
    default:
        printf("タオルをどうぞ。\n");
        break;
    }

    return 0;
}
