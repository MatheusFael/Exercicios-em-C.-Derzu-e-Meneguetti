#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *palavra = (char*) calloc(100, sizeof(char));
    char *invertida = (char*) calloc(100, sizeof(char));

    printf("Diga uma palavra: ");
    scanf("%99s", palavra);
    
    int tamanho = strlen(palavra);  

    for (int i = 0; i < tamanho; i++){
       invertida[i] = palavra[tamanho -1 -i];
    }


    printf("A palavra invertida é: %s\n", invertida);


    return 0;
}
