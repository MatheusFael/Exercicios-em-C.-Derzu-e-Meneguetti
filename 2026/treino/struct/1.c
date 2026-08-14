#include <stdio.h>
#include <string.h>

int main() {
    typedef struct {
        char nome[50];
        int idade;
        
    }Pessoa;

    Pessoa matheus = {"Matheus", 25};
    printf("O nome da pessoa é: %s\n", matheus.nome);
    printf("A idade da pessoa é: %d\n", matheus.idade);




    return 0;
}
