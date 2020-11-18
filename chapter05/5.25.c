int times(void)
{
    static int x;  // static変数x

    x = 0;         // times関数が呼び出されるごとに0になってしまう

    return ++x;
}
