#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void stringar(char **array_strings)
{
    char resultado[100] = "";

    for (int i = 0; i < 3; i++)
    {
        if (i == 0)
        {
            strcpy(resultado, array_strings[i]);
        }
        else
        {
            strcat(resultado, " ");
            strcat(resultado, array_strings[i]);
        }
    }

    printf("%s\n", resultado);
}

int main()
{
    char **palavras = (char **) calloc(3, sizeof(char *));

    palavras[0] = "Ola";
    palavras[1] = "Mundo";
    palavras[2] = "C";
    stringar(palavras);
    return 0;

    free(palavras);

    return 0;
}