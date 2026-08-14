#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main() {
    char frase[100];
    int contador = 0;
    int consoantes = 0;

    printf("Digite uma frase: ");
    fgets(frase,100, stdin);

    for (int i = 0; i <= strlen(frase); i++){
        switch (tolower(frase[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                contador++;
                break;
        }
    }

    consoantes = strlen(frase) - contador;


    printf("A frase possui %d vogais\n", contador);
    printf("A frase possui %d consoantes\n", consoantes);


    return 0;
}   