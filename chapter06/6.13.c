#include <stdio.h>

#define NUM_N 3
#define NUM_L 4
#define NUM_M 5

int main(void)
{
    double a[NUM_N][NUM_L];
    double b[NUM_L][NUM_M];
    double c[NUM_N][NUM_M];
    int i, j, k;

    printf("%d × %d 行列Aを入力してください\n ", NUM_N, NUM_L);
    for (i = 0; i < NUM_N; i++) // 行列Aの入力
    {
        for (j = 0; j < NUM_L; j++)
        {
            printf("A[%d, %d] = ", i + 1, j + 1);
            scanf("%lf", &a[i][j]);
        }
    }

    printf("%d × %d 行列Bを入力してください\n ", NUM_L, NUM_M);
    for (i = 0; i < NUM_L; i++) // 行列Bの入力
    {
        for (j = 0; j < NUM_M; j++)
        {
            printf("B[%d, %d] = ", i + 1, j + 1);
            scanf("%lf", &b[i][j]);
        }
    }

    for (i = 0; i < NUM_N; i++) // C=A*Bの計算
    {
        for (j = 0; j < NUM_M; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < NUM_L; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    printf("C:\n "); // 行列Cの表示
    for (i = 0; i < NUM_N; i++)
    {
        for (j = 0; j < NUM_M; j++)
        {
            printf("%10.5f ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
