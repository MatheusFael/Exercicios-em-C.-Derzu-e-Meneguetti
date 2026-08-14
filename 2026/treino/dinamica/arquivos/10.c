#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *ENTRADA = fopen("input.txt", "r");
    FILE *SAIDA = fopen("print.txt", "w");
    char nome[100];
    int nota1, nota2;
    if (ENTRADA == NULL) {
        printf("Erro ao abrir o arquivo de entrada.\n");
        return 1;
    }

    if (SAIDA == NULL) {
        printf("Erro ao abrir o arquivo de saída.\n");
        fclose(ENTRADA);
        return 1;
    }

    while (fscanf(ENTRADA, " %99[^,], %d, %d", nome, &nota1, &nota2) == 3) {
        fprintf(SAIDA, "%s, %d\n", nome, (nota1 + nota2) / 2);   
    }
    fclose(ENTRADA);
    fclose(SAIDA);
    
    return 0;
}