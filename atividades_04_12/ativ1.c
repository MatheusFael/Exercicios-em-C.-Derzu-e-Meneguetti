#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char texto[100];
    int qtd_vogais = 0;

    printf("Digite uma frase: ");
    fgets(texto, 100, stdin);

    for (int k = 0; k < strlen(texto); k++) {
        switch (tolower(texto[k])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                qtd_vogais++;
                break;

            default:
                break;
        }
    }

    printf("A frase possui %d vogais.\n", qtd_vogais);

    return 0;
}
