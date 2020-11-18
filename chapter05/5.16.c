#include <stdio.h>

int maxint(int, int);
double maxdouble(double, double);

#define max(X,Y) _Generic((X, Y), double: maxdouble, int: maxint)(X,Y)

int main(void)
{
	int i, j;
	double x, y;

	printf("整数を入力してください>>>");
	scanf("%d %d", &i, &j);
	printf("bigger is %d\n", max(i, j));        // max → maxintが呼ばれる

	printf("実数を入力してください>>>");
	scanf("%lf %lf", &x, &y);
	printf("the bigger is %g\n", max(x, y));    // max → maxdoubleが呼ばれる

	return 0;
}

int maxint(int former, int latter)              // maxint関数の定義
{
	return (former > latter) ? former : latter;
}

double maxdouble(double former, double latter)  // maxdouble関数の定義
{
	return (former > latter) ? former : latter;
}
