#include <stdio.h>
#include <stdlib.h>


typedef struct {
    int idade;
    char name[100];
    float height;
} Student, *ponteiroStudent;

int mudadordeidade (Student *student, int novaidade){
    ponteiroStudent ponteiro = &student;
    ponteiro->idade = novaidade;
    printf("Idade atualizada: %d\n", student->idade);
    return ponteiro->idade;
}


int contador(Student registros[], int tamanho){
    int contador = 0;

    for (int i = 0; i < tamanho; i++){
        if (registros[i].idade > 18){
            contador++;
        }
    }
    return contador;
    
}


int main() {
    Student registros[3] = {
        {20, "Matheus", 1.75},
        {17, "Joao", 1.80},
        {22, "Maria", 1.65}
    };
    printf("Numero de alunos com mais de 18 anos: %d\n", contador(registros, 3));
    mudadordeidade(&registros[1], 50);   

    return 0;
}