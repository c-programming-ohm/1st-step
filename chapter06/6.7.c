#include <math.h>
#include <stdio.h>

int main(void)
{
    int d[33];      // 身長のデータ
    double m, v, s; // m は d の平均, v は d の分散, s は d の標準偏差
    int n = 33;     // データの個数は33個
    int i;
    double sum;

    printf("データを%d個入力してください\n", n);
    for (i = 0; i < n; i++)
    {
        printf("data %d = ", i + 1);
        scanf("%d", &d[i]);
    }

    for (sum = 0.0, i = 0; i < n; i++)
    {
        sum += d[i];
    }

    m = sum / n; // 平均の計算

    for (sum = 0.0, i = 0; i < n; i++)
    {
        sum += (d[i] - m) * (d[i] - m);
    }
    v = sum / n; // 分散の計算
    s = sqrt(v); // 標準偏差の計算

    printf("平均     =%10.3f \n", m);
    printf("分散     =%10.3f \n", v);
    printf("標準偏差 =%10.3f \n", s);

    return 0;
}
