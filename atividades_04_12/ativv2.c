#include <stdio.h>
#include <string.h>
#include <ctype.h>



int main() {
    char nome[100], primeiro[50], sobrenome[50];
    int i = 0, j = 0;
    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);

    nome[strcspn(nome, "\n")] = '\0'; // Remove o \n do final da string

    for (i = 0; i < strlen(nome); i++){
        if (nome[i] == ' ' || nome[i] == '\0'){
            break;
        }
        primeiro[i] = nome[i];
    }

    primeiro[i] = '\0'; // Finaliza a string do primeiro nome

    i++;

    for (j = 0; i < strlen(nome); i++, j++){
        sobrenome[j] = nome[i];
    }
    

    sobrenome[j] = '\0'; // Finaliza a string do sobrenome
    printf("Primeiro nome: %s\n", primeiro);
    printf("Sobrenome: %s\n", sobrenome);



    return 0;
}   