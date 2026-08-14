#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *SAIDA = fopen("../saida.txt", "w");
    if (SAIDA == NULL)
    {
        perror("Erro ao abrir saida.txt");
        return 1;
    }
    FILE *ENTRADA = fopen("../entrada.txt", "r");
    if (ENTRADA == NULL)
    {
        perror("Erro ao abrir entrada.txt");
        fclose(SAIDA);
        return 1;
    }

    char linha[100];

    while (fgets(linha, 100, ENTRADA) != NULL){
        fputs(linha, SAIDA);
    }

    fclose(SAIDA);
    fclose(ENTRADA);

    return 0;
}
