#include <float.h>
#include <stdio.h>

int main(void)
{
    int i;
    double max_weight, min_weight;
    double weight[3];

    weight[0] = 72.0;  // Aさんの体重
    weight[1] = 101.5; // Bさんの体重
    weight[2] = 52.4;  // Cさんの体重

    max_weight = -DBL_MAX; // 最大体重の初期化
    min_weight = DBL_MAX;  // 最小体重の初期化

    for (i = 0; i < 3; i++)
    {
        // 最大体重を求めます
        if (weight[i] >= max_weight)
        {
            max_weight = weight[i];
        }
        // 最小体重を求めます
        if (weight[i] <= min_weight)
        {
            min_weight = weight[i];
        }
    }

    printf("一番重い人は, %g kg です.\n", max_weight);
    printf("一番軽い人は, %g kg です.\n", min_weight);

    return 0;
}
