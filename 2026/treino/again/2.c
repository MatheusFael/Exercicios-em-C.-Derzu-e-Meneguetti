#include <stdio.h>
#include <string.h>

int main()
{
   
    typedef union {
        char nome[100];
        int idade;
    } Pessoa;


    Pessoa matheus;
    matheus.idade = 30;
    strcpy(matheus.nome, "Matheus");
    
    printf("Nome: %s, Idade: %d\n", matheus.nome, matheus.idade);
    

    return 0;
}
