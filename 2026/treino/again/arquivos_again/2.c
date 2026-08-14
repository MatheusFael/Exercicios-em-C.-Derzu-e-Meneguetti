#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE * SAIDA = fopen("../saida.txt", "w");
    FILE * ENTRADA = fopen("../entrada.txt", "r");

    if (SAIDA == NULL || ENTRADA == NULL) {
        printf("Erro ao abrir arquivos.\n");
        if (SAIDA != NULL) {
            fclose(SAIDA);
        }
        if (ENTRADA != NULL) {
            fclose(ENTRADA);
        }
        return 1;
    }

    int cont = 0;
    char c;

    while ((c = fgetc(ENTRADA)) != EOF) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') {
            cont++;
        }
    }

    printf("O número de vogais é: %d\n", cont);


   
    fclose(SAIDA);
    fclose(ENTRADA);


    return 0;
}
