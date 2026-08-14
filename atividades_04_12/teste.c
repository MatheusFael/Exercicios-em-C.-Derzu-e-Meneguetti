#include <stdio.h>


int contadorstring( char *str){

    int contado = 0;

    for (int i = 0; i <  strlen(str); i++){
        if (str[i] != '\0')
        contado++;
    }
    return contado;
}




int main() {
    char *str = "mama";

    printf("a string %s tem %d caracteres\n", str, contadorstring(str));



    return 0;
}   