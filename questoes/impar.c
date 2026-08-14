#include <string.h>
#include <stdio.h>

int main()
{
    int vetor[10];
    int vetor_mudado[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", &vetor[i]);
        if (vetor[i] % 2 != 0)
        {
            vetor_mudado[i] = 0;
        }
        else
        {
            vetor_mudado[i] = vetor[i];
        }
    }

    printf("Vetor Normal:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    
    printf("Vetor Mudado:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", vetor_mudado[i]);
    }

    return 0;
}