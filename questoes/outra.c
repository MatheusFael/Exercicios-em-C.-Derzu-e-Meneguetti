#include <stdio.h>
#include <string.h>
// 1. Funções declaradas FORA da main


int main()
{
    int vogais = 0;
    char matriz[3][10] = {"gato", "cachorro", "passarinho"};
    

    for (int i = 0; i < 3; i++){
        printf("Tamannho da string %d: %d\n", i, strlen(matriz[i]));
    }

    for (int i = 0; i < 3; i++){
        printf("primeira letra da string %d: %c\n", i, matriz[i][0]);
    }


    for (int i = 0; i < 3; i++){
        for (int j = 0; j < strlen(matriz[i]); j++){
            switch (matriz[i][j]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    vogais++;
            }
        }
    }
    printf("Total de vogais: %d\n", vogais);

    return 0;
}