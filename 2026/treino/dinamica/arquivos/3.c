#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    char linha[100];
    FILE *file = fopen("input.txt", "r");
    FILE *saida = fopen("print.txt", "w");

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }
    if (saida == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while (fgets(linha, 100, file) != NULL){
        fputs(linha, saida);
    }

    fclose(file);
    fclose(saida);
    return 0;
}