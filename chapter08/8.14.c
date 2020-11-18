int main(void)
{
    char src[] = "SRC";
    char dst[4];         // SRCをコピーするためにSRC+'\0'が入る大きさ4の配列を用意する

    str_copy(dst, src);  // srcをdstにコピー
    printf( %s\n", dst);

    return 0;
}