int powint(int x, int p) // 関数の定義
{
    int y = 1;           // 正の整数xのp乗を求める関数

    while (p-- > 0)      // pの値を次々に減らしていって
    {                    // 0になるまで繰り返す。したがって
        y *= x;          // このループはp回繰り返される
    }

    return y;            // yをこの関数の値とする
}
