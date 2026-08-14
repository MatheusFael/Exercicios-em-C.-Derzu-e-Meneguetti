#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;

    int **matriz;
    scanf("%d %d", &linhas, &colunas);
    matriz = (int **) calloc(linhas, sizeof(int *));

    for (int i = 0; i < linhas; i++){
        matriz[i] = (int *) calloc(colunas, sizeof(int));   
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    for (int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }



    return 0;
}