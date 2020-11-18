#include <math.h>
#include <stdio.h>

int main(void)
{
    int i, d;
    double m, v, s;                // m は d の平均, v は d の分散, s は d の標準偏差
    int n = 33;                    // データの個数は33個
    double sumM = 0.0, sumV = 0.0; // 総和(sumM)と2乗和(sumV)の初期化

    for (i = 0; i < n; i++)
    {
        printf("data %d = ", i + 1);
        scanf("%d", &d); // データの入力
        sumM += d;       // 総和を求める
        sumV += d * d;   // 2乗和を求める
    }

    m = sumM / n;         // 平均の計算
    v = sumV / n - m * m; // 分散の計算
    s = sqrt(v);          // 標準偏差の計算

    printf("平均     =%10.3f \n", m);
    printf("分散     =%10.3f \n", v);
    printf("標準偏差 =%10.3f \n", s);

    return 0;
}
