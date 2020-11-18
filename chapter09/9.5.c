#include <math.h>
#include <stdio.h>

#define MAX_SEAT 10 // 空席の数

int main(void)
{
    struct seat_position
    {
        int no;   // 座席番号
        double x; // x座標
        double y; // y座標
    } seat[MAX_SEAT];
    double x_dis, y_dis;  // x, y方向の距離
    double dis;           // 2つの空席の距離
    double max_dis = 0.0; // 最も離れた空席の距離
    int max_dis_seat[2];  // 最も離れた空席の番号
    int i, j;

    for (i = 0; i < MAX_SEAT; i++)
    {
        scanf("%d %lf %lf", &seat[i].no, &(seat[i].x), &(seat[i].y));
    }

    for (i = 0; i < MAX_SEAT; i++)
    {
        for (j = 0; j < MAX_SEAT; j++)
        {
            x_dis = seat[i].x - seat[j].x;
            y_dis = seat[i].y - seat[j].y;
            dis = sqrt(x_dis * x_dis + y_dis * y_dis); // 距離の計算
            if (max_dis < dis)
            {
                max_dis = dis;
                max_dis_seat[0] = seat[i].no;
                max_dis_seat[1] = seat[j].no;
            }
        }
    }
    printf("最も離れた座席は %d と %d です (距離 %f)\n", max_dis_seat[0], max_dis_seat[1], max_dis);

    return 0;
}
