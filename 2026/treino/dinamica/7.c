#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int *vetor = (int *) calloc(10, sizeof(int));
    int media = 0;

    for ( int i = 0; i < 10; i++) {
        scanf("%d", &vetor[i]);
        media += vetor[i];
    }
    media /= 10;

    printf("Media: %d\n", media);
    free(vetor);
    return 0;
}