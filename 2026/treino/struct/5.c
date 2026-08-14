#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[50];
    int idade;
    int notas[5];
} Pessoa;


int main()
{   
    int soma = 0;
    Pessoa matheus = {"Matheus", 25, {8, 9, 7, 10, 6}};
    for (int i = 0; i < 5; i++) {
        soma += matheus.notas[i];
    }

    printf("O nome da pessoa é: %s\n", matheus.nome);
    printf("A idade da pessoa é: %d\n", matheus.idade);
    printf("A média das notas da pessoa é: %.2f\n", (float)soma / 5);
    return 0;
}
