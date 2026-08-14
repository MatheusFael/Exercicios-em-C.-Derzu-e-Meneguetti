
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



typedef enum{
    NOTEBOOK =1,
    SMARTPHONE =2,
    TELEVISOR = 3

}ESCOLHA;


typedef struct{

    char nome[100];
    int preco;
    ESCOLHA tipo;
    
    
    
    
    union{
    
        struct{
        
            int tela;
            int ram;
        
        }NOTEBOOK;
        
        
        
        struct{
        
            char so[100];
        
        
        }SMARTPHONE;
        
        struct{
            int tela;
            char resolucao[100];
        }TELEVISOR;
    
    
    }info;
    
    

}Produto;


void cadastrar(Produto *f){
    printf("Fale o nome\n");
    scanf("%s", f->nome);
    printf("Fale o preco\n");
    scanf("%d", &f->preco);
    printf("fale 1 - notebook, 2 - smartphone, 3 - televisor\n");
    scanf("%d", &f->tipo);
    
    if (f->tipo == 1){
        printf("Fale a tela\n");
        scanf("%d", &f->info.NOTEBOOK.tela);
        printf("Fale a RAM\n");
        scanf("%d", &f->info.NOTEBOOK.ram);
    }
    else if (f->tipo == 2){
         printf("Fale o so\n");
        scanf("%s", f->info.SMARTPHONE.so);
    }
    else if (f->tipo == 3){
        printf("Fale a tela\n");
        scanf("%d", &f->info.TELEVISOR.tela);
        printf("Fale a resolucao\n");
        scanf("%s", f->info.TELEVISOR.resolucao);
    }

}


void buscar(Produto f[]){

    
    for (int i = 0; i < 2; i++){
        if (f[i].tipo == 1){
            printf("o produto é  NOTEBOOK tem %d de tela e %d de ram\n", f[i].info.NOTEBOOK.tela, f[i].info.NOTEBOOK.ram);
        }
        
        else if(f[i].tipo == 2){
            printf("o produto é  SMARTPHONE tem %s de SO\n", f[i].info.SMARTPHONE.so);
        }
        
        else {
            printf("o produto é  TELEVISOR tem %d de tela e %s de resolucao\n", f[i].info.TELEVISOR.tela, f[i].info.TELEVISOR.resolucao);
            
        }
        
    }
}



int main(){

    Produto f[2];
    
    for (int i = 0; i< 2; i++){
        
        cadastrar(&f[i]);
    }
    

    buscar(f);


    return 0;
}