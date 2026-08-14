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

    int buffer, cont = 0, soma = 0;

    while (fscanf(ENTRADA, "%d", &buffer) == 1){
        soma += buffer;
        cont++;
    }

    printf("A média dos números é: %.2f\n", (float)soma / cont);
    fclose(SAIDA);
    fclose(ENTRADA);
    return 0;
}
