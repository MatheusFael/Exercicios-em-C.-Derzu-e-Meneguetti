#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void stringar(char **lista_palavras){

    char resultado[100] = "";

    for (int i =0; i < 3; i++){
        if (i == 0){
            strcpy(resultado, lista_palavras[i]);
        }else{
            strcat(resultado, " ");
            strcat(resultado, lista_palavras[i]);
        }
    }
    printf("%s\n", resultado);
}

int main()
{
    char **palavras = (char **) calloc(3,sizeof(char *));

    
    palavras[0] = "Ola";
    palavras[1] = "Mundo";
    palavras[2] = "C"
    ;
    stringar(palavras);


    return 0;
}
