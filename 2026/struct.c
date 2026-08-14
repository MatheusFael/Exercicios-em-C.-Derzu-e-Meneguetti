#include <stdio.h>

typedef struct
{
    int id;
    char name[100];
    float altura;
} Student, *ponteiroStudent;

int main()
{

    Student matheus = {1, "Matheus", 1.75};

    printf("ID: %d\n", matheus.id);
    printf("Name: %s\n", matheus.name);

    ponteiroStudent ponteiro = &matheus;

    ponteiro->id = 2;

    printf("ID: %d\n", ponteiro->id);

    return 0;
}