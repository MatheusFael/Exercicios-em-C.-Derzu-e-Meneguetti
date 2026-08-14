#include <string.h>
#include <stdio.h>
    




int main()
{
    int matrix[3][4];
    int matrix_somas[4];

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("fala o valor da posicao [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }


    for (int j = 0; j < 4; j++) {
        int sum = 0;
        for (int i = 0; i < 3; i++) {
            sum += matrix[i][j];
        }
        matrix_somas[j] = sum;
    }


    printf("Matriz inserida:\n");


    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (j == 3) {
                printf("%d", matrix[i][j]);
                break;
            }
            printf("%d - ", matrix[i][j]);
        }
        printf("\n");
    }   

    printf("Somas das colunas:\n");
    for (int j = 0; j < 4; j++) {
        printf("Coluna %d: %d\n", j , matrix_somas[j]);
    }

    
    return 0;
}