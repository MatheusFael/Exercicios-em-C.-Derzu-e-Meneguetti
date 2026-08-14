#include <stdio.h>
#include <string.h>

typedef enum
{
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO,
    DOMINGO
} dia_semana;


typedef struct {
    char nome[50];
    int idade;
    dia_semana dia_favorito;
} Pessoa;


int main()
{   
    Pessoa matheus = {"Matheus", 25, SEGUNDA};
    printf("O nome da pessoa é: %s\n", matheus.nome);
    printf("A idade da pessoa é: %d\n", matheus.idade);
    printf("O dia favorito da pessoa é: %d\n", matheus.dia_favorito);

    return 0;
}
