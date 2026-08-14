#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    FILE *ENTRADA = fopen("input.txt", "w");

    if (ENTRADA == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    fputs("Hello, World!", ENTRADA);


    fclose(ENTRADA);
    return 0;
}