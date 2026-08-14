#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
    char nome[50];
    int idade;  
}Pessoa;


void cadastrar( Pessoa *p){
    printf("Diga o nome da pessoa: ");
    scanf("%49s", p->nome);
    printf("Diga a idade da pessoa: ");
    scanf("%d", &p->idade);   
}


void visualizar(Pessoa p){
    printf("O nome da pessoa é: %s\n", p.nome);
    printf("A idade da pessoa é: %d\n", p.idade);
}   

int main()
{
   Pessoa pesosoas[3];
    for (int i = 0; i < 3; i++){
        cadastrar(&pesosoas[i]);
    }
    for (int i = 0; i < 3; i++){
        visualizar(pesosoas[i]);    
    }
              



    return 0;
}
