#include <stdio.h>
#include <stdlib.h>




int main()
{
    int *vetorocorrencias = (int *) calloc(10, sizeof(int));

    char frase[100] = "exemplo de palavra para contar ocorrencias";
    char letra = 'a';
    int posicaodalista = 0;
    for (int i = 0; i < strlen(frase); i++ ) {
        if (frase[i]  == letra){
            vetorocorrencias[posicaodalista] = i;
            posicaodalista++;
        }
    for (int i = 0; i < posicaodalista; i++) {
        printf("Ocorrencia %d: %d\n", i + 1, vetorocorrencias[i]);
    }
    free(vetorocorrencias);

    return 0;
}