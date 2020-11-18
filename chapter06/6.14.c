#include <math.h>
#include <stdio.h>

#define MAX_SEAT 10 // 空席の数

int main(void)
{
    int seat_no[MAX_SEAT];     // 空席の番号
    double point[MAX_SEAT][2]; // 空席の座標   point[ n ][ 0 ] = x座標
                               //              point[ n ][ 1 ] = y座標
    double x_dis, y_dis;       // x, y方向の座標
    double dis;                // 2つの空席の距離
    double max_dis = 0.0;      // 最も離れた2つの座席の距離
    int max_dis_seat[2];       // 最も離れた2つの座席の番号
    int i, j;

    printf("シート番号とそのX座標、Y座標を10回入力してください");
    printf(" (例) 1  1.1  5.2 (Enterキー)\n");
    for (i = 0; i < MAX_SEAT; i++)
    {
        scanf("%d %lf %lf", &seat_no[i], &point[i][0], &point[i][1]);
    }

    for (i = 0; i < MAX_SEAT - 1; i++)
    {
        for (j = 0; j < MAX_SEAT; j++)
        {
            x_dis = point[i][0] - point[j][0];
            y_dis = point[i][1] - point[j][1];
            // 距離の計算
            dis = sqrt(x_dis * x_dis + y_dis * y_dis);
            if (max_dis < dis)
            {
                max_dis = dis;
                max_dis_seat[0] = seat_no[i];
                max_dis_seat[1] = seat_no[j];
            }
        }
    }

    printf("最も離れた座標は %d と %d です (距離 %8.6f)\n", max_dis_seat[0], max_dis_seat[1], max_dis);

    return 0;
}
