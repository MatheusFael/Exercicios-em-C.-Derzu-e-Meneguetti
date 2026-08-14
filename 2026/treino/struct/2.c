#include <stdio.h>
#include <string.h>

int main() {
    typedef union {
        char nome[50];
        int idade;
        
    }Pessoa;


    Pessoa matheus;

    matheus.idade = 25;
    printf("A idade da pessoa é: %d\n", matheus.idade);
    strcpy(matheus.nome, "Matheus");
    printf("O nome da pessoa é: %s\n", matheus.nome);
    printf("A idade da pessoa é: %d\n", matheus.idade);
    




    return 0;
}
