#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome[50];
    int idade;
} Pessoa;


int main()
{
    Pessoa pessoas[3] = {
        {"Alice", 30},
        {"Bob", 25},
        {"Charlie", 35}
    };

    printf("Pessoas:\n");
    for (int i = 0; i < 3; i++) {
        printf("Nome: %s, Idade: %d\n", pessoas[i].nome, pessoas[i].idade);
    }


    return 0;
}