#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){

    char string[100], *reversa;

    printf("Digite uma string: ");
    scanf("%s", string);
    int len = strlen(string);

    reversa = (char *) calloc(len + 1, sizeof(char));

    if (reversa == NULL){
        return 1;
    }

    for (int i= 0; i < len; i++){

        reversa[i] = string[len - 1 - i];
    
    }

    printf("String reversa: %s\n", reversa);



    free(reversa);
    return 0;

}