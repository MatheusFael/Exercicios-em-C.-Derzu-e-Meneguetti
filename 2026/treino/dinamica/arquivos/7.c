#include <stdio.h>

#include <stdlib.h>

int main()

{

    FILE *ENTRADA = fopen("input.txt", "r");

    FILE *SAIDA = fopen("print.txt", "w");

    char nome[100];

    int idade;

    if (ENTRADA == NULL)

    {

        printf("Erro ao abrir o arquivo.\n");

        return 1;
    }

    if (SAIDA == NULL)

    {

        printf("Erro ao criar o arquivo print.txt.\n");

        fclose(ENTRADA);

        return 1;
    }

    while (fscanf(ENTRADA, "%99[^,], %d", nome, &idade) == 2){
        fprintf(SAIDA, "%s\n", nome);
    }

    

    fclose(ENTRADA);

    fclose(SAIDA);

    printf("Arquivo print.txt criado com sucesso.\n");

    return 0;
}