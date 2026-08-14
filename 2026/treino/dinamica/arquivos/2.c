#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c;
    FILE *file = fopen("input.txt", "r");
    int soma = 0;

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    while((c = fgetc(file)) != EOF) {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            soma += 1;
        }
    }

    printf("%d\n", soma);
    fclose(file);
    return 0;
}