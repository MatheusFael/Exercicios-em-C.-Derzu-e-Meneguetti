#include <stdio.h>
#include <string.h>



int main () {
    char matriz[3][10] = { "oi", "oi", "io" };
    char *ponteiro[3][10];

    for (int i = 0; i < 3; i++){
        *ponteiro[i] = matriz[i];
    }

    for (int i = 0; i < 3; i++){
        printf("a string %s tem %d caracteres\n", matriz[i], strlen(matriz[i]));
    }

    for (int i = 0; i < 3; i++){
        printf("a primeira letra da string e %c \n", matriz[i][0]);
    }
    int num_vogais = 0;


    for (int i = 0; i < 3; i++){
        for (int j = 0; j < strlen(matriz[i]); j++){
            switch (matriz[i][j]){
                case 'a':
                case 'e':
                case 'i':
                case 'o':
                case 'u':
                    num_vogais++;
                    break;
            }
        }
    }

    for (int i = 0; i < 3; i++){
        for (int j = strlen(matriz[i]) -1 ; j >= 0; j--){
            printf("%c", matriz[i][j]);
        }
        printf("\n");
    }


    printf("O numero total de vogais e %d\n", num_vogais);


    return 0;
}