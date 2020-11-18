int times(void)
{
    static int x = 0;  // static変数x

    return ++x;
}
