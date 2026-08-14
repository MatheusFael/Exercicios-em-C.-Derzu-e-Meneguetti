#include <stdio.h>
#include <string.h>

int main() {
    char entrada[50];
    char primeiro[20], resto[30];
    int p = 0, q = 0;

    printf("Digite o nome completo: ");
    fgets(entrada, 50, stdin);

    // remove o \n da string
    entrada[strcspn(entrada, "\n")] = '\0';

    // copia o primeiro nome
    while (entrada[p] != ' ' && entrada[p] != '\0') {
        primeiro[p] = entrada[p];
        p++;
    }
    primeiro[p] = '\0';

    // avança para o início do sobrenome
    p++;

    // copia o sobrenome
    while (entrada[p] != '\0') {
        resto[q] = entrada[p];
        p++;
        q++;
    }
    resto[q] = '\0';

    printf("Nome: %s\n", primeiro);
    printf("Sobrenome: %s\n", resto);

    return 0;
}
