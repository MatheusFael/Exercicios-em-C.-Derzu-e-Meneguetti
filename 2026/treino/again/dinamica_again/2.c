#include <stdio.h>
#include <string.h>

int main()
{
   
    void vetorizar(int n[], int n2[]){
        int *vetor = (int*) calloc(2, sizeof(int));
        for (int i = 0; i < 2; i++){
            vetor[i] = n[i] + n2[i];
            printf("O valor do elemento %d é: %d\n", i, vetor[i]);
        }
        free(vetor);

    }
    int n[2] = {1, 2};

    int n2[2] = {3, 4};
    vetorizar(n, n2);

    return 0;
}
