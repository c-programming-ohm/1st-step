#include <stdio.h>

int main(void)
{
    union {
        signed char s_val;
        unsigned char us_val;
    } my_char;

    my_char.s_val = 0xFF;

    printf("signed data --->%d\n", my_char.s_val);
    printf("unsigned data --->%d\n", my_char.us_val);
    return 0;
}
