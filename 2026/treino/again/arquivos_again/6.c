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
    char nome[100];
    int idade;


    while (fscanf(ENTRADA, " %99[^,],%d", nome, &idade) == 2)
    {
        fprintf(SAIDA, "Idade: %d\n", idade);
    }


    fclose(SAIDA);
    fclose(ENTRADA);
    return 0;
}
