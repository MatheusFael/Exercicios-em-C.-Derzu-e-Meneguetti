#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *entrada = fopen("../entrada.txt", "r+");

    char c;
    while ((c = fgetc(entrada)) != EOF)
    {
        if (c == 'a')
        {

            fseek(entrada, -1, SEEK_CUR);
            fputc('A', entrada);
            fseek(entrada, 0, SEEK_CUR);
        }
    }
    fclose(entrada);
    return 0;
}
