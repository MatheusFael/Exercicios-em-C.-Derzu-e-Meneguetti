#include <stdio.h>

int main()
{

    FILE *ARQENTRADA, *ARQSAIDA;

    char linha[100];

    ARQENTRADA = fopen("entrada.txt", "r");
    ARQSAIDA = fopen("saida.txt", "w");

    for (int i = 0; fgets(linha, 100, ARQENTRADA) != NULL; i++)
    {
        fputs(linha, ARQSAIDA);
        printf("%s", linha);
        fprintf(ARQSAIDA, "%s", linha);
    }

    return 0;
}