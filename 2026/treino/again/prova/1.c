#include<stdio.h>
#include<string.h>
#include<stdlib.h>



typedef struct{

    int idade;
    char nome[100];
    int salario;
    char cargo[100];
    

}Funcionario;


void cadastrar(Funcionario *f){
    printf("Fale o nome\n");
    scanf("%s", f->nome);
    printf("Fale a idade\n");
    scanf("%d", &f->idade);
    printf("Fale a salario\n");
    scanf("%d", &f->salario);
    printf("Fale o cargo\n");
    scanf("%s", f->cargo);

}


void buscar(Funcionario f[]){

    char nomebuscar[100];
    printf("Fala a nome que ce quer buscar");
    scanf("%s", nomebuscar);
    
    for (int i = 0; i < 2; i++){
        if (strcmp(nomebuscar, f[i].nome) == 0){
            printf("AChou!\n");
            printf("O FUNCIONARIO %s tem %d  anos ganha %d e tem o cargo de %s", f[i].nome, f[i].idade, f[i].salario, f[i].cargo);
        }
        
    }
}



int main(){

    Funcionario f[2];
    
    for (int i = 0; i< 2; i++){
        
        cadastrar(&f[i]);
    }
    

    buscar(f);


    return 0;
}