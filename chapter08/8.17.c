int add_all(int a[], int num)  // numは配列aの要素数
{
    int i;
    int sum = 0;
    for (i = 0; i < num; i++)
    { // num回ループさせればよい
        sum += *(a + i);
    }
    return sum;
}