#include <stdio.h>
#include <string.h>

int main()
{
   
    typedef struct {
        char nome[100];
        int idade;
    } Pessoa, *PessoaPtr;


    Pessoa matheus = {"Matheus", 30};
    PessoaPtr ponteiro = &matheus;

    ponteiro->idade = 31;
    
    printf("Nome: %s, Idade: %d\n", ponteiro->nome, ponteiro->idade);
    

    return 0;
}
