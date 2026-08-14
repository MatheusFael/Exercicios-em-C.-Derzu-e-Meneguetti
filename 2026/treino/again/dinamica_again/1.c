#include <stdio.h>
#include <string.h>



int main()
{

    char *palavra = (char*) calloc(100, sizeof(char));
    char *invertida = (char*) calloc(100, sizeof(char));

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int len = strlen(palavra);

    for (int i = 0; i < len; i++){
        invertida[i] = palavra[len - i - 1];
    }

    printf("A palavra invertida é: %s\n", invertida);

    return 0;
}
