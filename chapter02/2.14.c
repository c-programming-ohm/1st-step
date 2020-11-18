#include <stdio.h>

int main(void)
{
    int max = 100000;

    for (int i = 1; i <= max; i++)
    {
        if (i % 15 == 0)
        {
            printf("FizzBuzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%8d\n", i);
        }
    }

    return 0;
}
