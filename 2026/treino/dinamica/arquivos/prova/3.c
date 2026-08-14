#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int nota;
}Aluno;

int main(){
    Aluno alunos[3];
    FILE *file = fopen("alunos.txt", "w");
    for (int i = 0; i < 3; i++){
        printf("Diga o nome do aluno: ");
        scanf("%s", alunos[i].nome);
        printf("Diga a nota do aluno: ");
        scanf("%d", &alunos[i].nota);
    }

    for (int i = 0; i < 3; i++){
        fprintf(file, "Aluno %d: Nome: %s, Nota: %d\n", i + 1, alunos[i].nome, alunos[i].nota);
    }

    fclose(file);


    return 0;
}