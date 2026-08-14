#include <stdio.h>
#include <stdlib.h>




int main()
{   
    int *vetor = (int *) calloc(10, sizeof(int));
    if (vetor == NULL) {
        return 1;
    }
    int maior = 0;

    for (int i = 0; i < 10; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior){
            maior = vetor[i];
        }
    }

    printf("The largest element is: %d\n", maior);
    return 0;
}