#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Diga o número de pessoas que deseja cadastrar: ");
    scanf("%d", &n);    
    int media = 0;
    int *vetor = (int*) malloc(n * sizeof(int));
    
    for (int i = 0; i < n; i++){
        printf("Diga a idade da pessoa %d: ", i+1);
        scanf("%d", &vetor[i]);
        media += vetor[i];
    }


    printf("A média de idade é: %d\n", media/n);




    free(vetor);



    return 0;
}
