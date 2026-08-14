#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void maior(int n)
{
    int *vetor = (int *) calloc(n, sizeof(int));
    int maior = 0;

    for (int i = 0; i < n; i++)
    {
        printf("Diga o valor do elemento %d: ", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] > maior)
        {
            maior = vetor[i];
        }
    }
    
    printf("O maior valor é: %d\n", maior);
    free(vetor);
}

int main()
{

    maior(2);

    return 0;
}
