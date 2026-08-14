#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int idade;
    char nome[50];
} Pessoa;

void cadastrarPessoa(Pessoa p)
{
    printf("Diga o nome do funcionário: ");
    scanf("%49s", p.nome);
    printf("Diga a idade do funcionário: ");
    scanf("%d", &p.idade);
}

int main()
{
    Pessoa pessoas[3];

    for (int i = 0; i < 3; i++)
    {
        printf("fale a nome");
        scanf("%s", pessoas[i].nome);
        printf("fale a idade");
        scanf("%d", &pessoas[i].idade);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Funcionário %d: Nome: %s, Idade: %d\n", i + 1, pessoas[i].nome, pessoas[i].idade);
    }

    return 0;
}