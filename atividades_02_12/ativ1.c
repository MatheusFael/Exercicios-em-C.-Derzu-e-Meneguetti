#include <stdio.h>

int main() {

    int array[10];
    int array2[10];


    for (int i = 0; i < 10; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &array[i]);
    }


    for (int i = 0; i < 10 ; i++) {
        array2[i] = array[i] * array[i];
    }


    printf("\nArray original:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array[i]);
    }

    
    printf("\n\nArray com os valores ao quadrado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array2[i]);
    }

    printf("\n");

    return 0;
}
