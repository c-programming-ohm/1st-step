#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fp;

    if ((fp = fopen("sample.dat", "a")) == NULL)
    {
        printf("ファイルが作成できません。 --- sample.dat\n");
        exit(EXIT_FAILURE);
    }

    fprintf(fp, "でもきっとなんとかなりますよ。\n");
    fprintf(fp, "諦めずに頑張りましょう。\n");

    fclose(fp);

    return EXIT_SUCCESS;
}
