#include <string.h>
#include <stdio.h>
    

int main()
{
    int matrix[3][3];


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("fala o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    printf("Matriz inserida:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2){
                printf("%d", matrix[i][j]);
                break;
            }
            printf("%d - ", matrix[i][j]);
        }
        printf("\n");
    }


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == 2) {
                int valor_coluna = matrix[j][i];
                int valor_linha = matrix[i][j];
                matrix[i][j] = valor_coluna;
                matrix[j][i] = valor_linha;
            }
        }
    }


    printf("Matriz mudada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (j == 2){
                printf("%d", matrix[i][j]);
                break;
            }
            printf("%d - ", matrix[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}