#include <stdio.h>
#include <string.h>

int main()
{

    typedef enum
    {
        SEGUNDA,
        TERCA,
        QUARTA,
        QUINTA,
        SEXTA,
        SABADO,
        DOMINGO
    } dia;

    typedef struct
    {
        char nome[50];
        int idade;
        dia hoje;
    } Pessoa;


    Pessoa matheus = {"Matheus", 25, SEGUNDA};
    printf("O nome da pessoa é: %s\n", matheus.nome);
    printf("A idade da pessoa é: %d\n", matheus.idade);
    printf("O dia de hoje é: %d\n", matheus.hoje);
    return 0;
}
