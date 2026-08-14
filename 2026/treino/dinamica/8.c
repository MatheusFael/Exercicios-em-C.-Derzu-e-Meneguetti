#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    char *string = (char *)calloc(100, sizeof(char));
    char *invertida = (char *)calloc(100, sizeof(char));

    printf("Digite uma string: ");
    scanf("%s", string);

    for (int i = 0; i < strlen(string); i++){
        invertida[i] = string[strlen(string) -1 -i];
    }

    printf("String invertida: %s\n", invertida);

    free(string);
    free(invertida);


    return 0;
}