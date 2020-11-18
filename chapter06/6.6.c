#include <float.h>
#include <stdio.h>

int main(void)
{
    int i;
    double max_weight, min_weight;
    double weightA, weightB, weightC;

    weightA = 72.0;  // Aさんの体重
    weightB = 101.5; // Bさんの体重
    weightC = 52.4;  // Cさんの体重

    max_weight = -DBL_MAX; // 最大体重の初期化
    min_weight = DBL_MAX;  // 最小体重の初期化

    // 最大体重を求めます
    if (weightA >= max_weight)
        max_weight = weightA;
    if (weightB >= max_weight)
        max_weight = weightB;
    if (weightC >= max_weight)
        max_weight = weightC;

    // 最小体重を求めます
    if (weightA <= min_weight)
        min_weight = weightA;
    if (weightB <= min_weight)
        min_weight = weightB;
    if (weightC <= min_weight)
        min_weight = weightC;

    printf("一番重い人は, %g kg です.\n", max_weight);
    printf("一番軽い人は, %g kg です.\n", min_weight);

    return 0;
}
