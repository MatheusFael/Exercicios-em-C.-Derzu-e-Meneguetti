#include <stdio.h>





int main()
{
    int vetor[5] = {1, 2, 3, 4, 5};
    int newvetor[5];

    for (int i = 0; i < 5; i++){
        if (vetor[i] % 2 != 0){
            newvetor[i] = 0;
        } else {
            newvetor[i] = vetor[i];
        }
    }


    printf("Vetor original: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", vetor[i]);
    }

    printf("\nVetor modificado: ");
    for (int i = 0; i < 5; i++){
        printf("%d ", newvetor[i]);
    }
}

