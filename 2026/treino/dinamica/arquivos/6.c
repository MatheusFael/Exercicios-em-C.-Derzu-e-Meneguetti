#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *ENTRADA = fopen("input.txt", "r");
    int numero;
    int count = 0;
    int soma = 0;
    if (ENTRADA == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fscanf(ENTRADA, "%d", &numero) != EOF) {
        soma += numero;
        count++;
    }

    printf("Media: %.d\n", soma / count);
    fclose(ENTRADA);
    return 0;
}   
   