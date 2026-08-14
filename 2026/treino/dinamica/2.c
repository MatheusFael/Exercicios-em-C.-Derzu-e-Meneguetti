#include <stdio.h>
#include <stdlib.h>

void criar()
{
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    int vetor1[n], vetor2[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d for vetor1: ", i + 1);
        scanf("%d", &vetor1[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d for vetor2: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    int *callocado = (int *)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++)
    {
        callocado[i] = vetor1[i] + vetor2[i];
    }

    for (int i = 0; i < n; i++)
    {
        printf("The sum of element %d is: %d\n", i + 1, callocado[i]);
    }
    free(callocado);
}


int main()
{   
    criar(2);

    return 0;
}