#include <stdio.h>
#include <stdlib.h>


int main(){

    int *vetor;

    int media = 0;

    printf("Digite o tamanho do vetor: ");
    int n;
    scanf("%d", &n);

    vetor = (int *) malloc(n * sizeof(int));

    if (vetor == NULL){
        return 1;
    }

    for (int i = 0; i < n; i++){
        int numero;
        scanf("%d", &numero);
        vetor[i] = numero;
        media += numero;
    }

    for (int i = 0; i < n; i++){
        printf("%d ", vetor[i]);
    }

    printf("Media: %d\n", media / n);

    free(vetor);
    return 0;

}