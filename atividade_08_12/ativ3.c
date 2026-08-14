#include <stdio.h>
#include <string.h>

int main()
{

    char matriz[3][20] = {"Vitor", "Meneghetti", "Araujo"};
    int tamanho = 0;

    for (int i = 0; i < 3; i++){

        for (int j = 0; j < strlen(matriz[i]);  j++) {
            if (matriz[i][j] == 'e' || matriz[i][j] == 'a' || matriz[   i][j] == 'i' || matriz[i][j] == 'o' || matriz[i][j] == 'u' ||
                matriz[i][j] == 'E' || matriz[i][j] == 'A' || matriz[i][j] == 'I' || matriz[i][j] == 'O' || matriz[i][j] == 'U') {
                tamanho++;
            }
        }
    }

    printf("O total de vogais nas palavras e: %d\n", tamanho);

    return 0;
}