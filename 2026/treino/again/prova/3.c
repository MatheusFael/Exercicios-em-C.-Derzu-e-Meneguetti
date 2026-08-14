
#include<stdio.h>
#include<string.h>
#include<stdlib.h>



typedef struct{

    int nota1;
    int nota2;
    char nome[100];
}Aluno;



void cadastrar(Aluno *f){
    printf("Fale o nome\n");
    scanf("%s", f->nome);
    printf("Fale a nota1\n");
    scanf("%d", &f-> nota1);
    printf("Fale a nota2\n");
    scanf("%d", &f-> nota2);
}

void analise(Aluno f[]){
    FILE *SAIDA = fopen("../entrada.txt", "w");
    int aprovados = 0;
    int reprovados = 0;
    int total = 0;

    for (int i = 0; i < 2; i++){
        if (((f[i].nota1 + f[i].nota2) >= 70)){
                aprovados++;
            
        }
        else{
            reprovados++;
        }
    }
    total = aprovados + reprovados;
    
    
    fprintf(SAIDA, "Aprov : %d, Repro : %d, Media_Aprov : %.2f", aprovados, reprovados, (float) aprovados/ total * 100);
    fclose(SAIDA);
}

int main(){

    Aluno f[2];
    
    for (int i = 0; i< 2; i++){
        
        cadastrar(&f[i]);
    }
    
    analise(f);


    return 0;
}