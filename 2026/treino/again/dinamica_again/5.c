#include <stdio.h>
#include <string.h>
#include <stdlib.h>


void enconntra (char letra, const char *palavra){

    int tamanho = strlen(palavra);
    int *vetor = (int*) calloc(tamanho, sizeof(int));
    int indicador = 0;
    for (int i = 0; i < tamanho; i++){
        if (palavra[i] == letra){
            vetor[indicador] = i;
            indicador++;
        }
    }
    if (indicador == 0){
        printf("A letra não foi encontrada na palavra.\n");
    }
    else{
        printf("A letra foi encontrada nas posições: ");
        for (int i = 0; i < indicador; i++){
            printf("%d ", vetor[i]);
        }
        printf("\n");
    }
    free(vetor);

}


int main()
{
    char letra = 'a';
    char palavra[] = "banana";

    enconntra(letra, palavra);

    return 0;
}
