#include <stdio.h>

int main()
{

    FILE *ARQENTRADA, *ARQSAIDA;
    char caractere[100];
    int itemlido;

    ARQENTRADA = fopen("entrada.txt", "r");
    ARQSAIDA = fopen("saida.txt", "w");

    if (ARQENTRADA == NULL || ARQSAIDA == NULL)
    {
        printf("Erro ao abrir os arquivos!\n");
        return 1;
    }


    do {
        itemlido = fread(caractere,100, 1, ARQENTRADA);
        fwrite(caractere,100, 1, ARQSAIDA);
    }while (itemlido > 0);

    fclose(ARQENTRADA);
    fclose(ARQSAIDA);

    return 0;
}