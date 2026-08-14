#include <stdio.h>

typedef struct
{
    char nome[50];
    int idade;
    char genero[10];
    char profissao[50];
} Pessoa;

int main()
{

    Pessoa registros[100];
    int opcao, numero;

    for (int i = 0; i < 100; i++)
    {
        printf("Digite o nome da pessoa %d : ", i + 1);
        scanf("%s", registros[i].nome);
        printf("Digite a idade da pessoa %d : ", i + 1);
        scanf("%d", &registros[i].idade);
        printf("Digite o genero da pessoa %d : ", i + 1);
        scanf("%s", registros[i].genero);
        printf("Digite a profissão da pessoa %d : ", i + 1);
        scanf("%s", registros[i].profissao);
    }

    printf("Qual pessoa ce quer mudar de 1 a 100? ");
    scanf("%d", &numero);

    printf("oq vc quer mudar na pessoa %d? \n", numero);
    printf("1 - nome\n2 - idade\n3 - genero\n4 - profissao\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Digite o novo nome da pessoa %d : ", numero);
        scanf("%s", registros[numero - 1].nome);
        break;

    case 2:
        printf("Digite a nova idade da pessoa %d : ", numero);
        scanf("%d", &registros[numero - 1].idade);
        break;

    case 3:
        printf("Digite o novo gênero da pessoa %d : ", numero);
        scanf("%s", registros[numero - 1].genero);
        break;

    case 4:
        printf("Digite a nova profissão da pessoa %d : ", numero);
        scanf("%s", registros[numero - 1].profissao);
        break;

    default:
        break;
    }

    for (int i = 0; i < 100; i++)
    {
        printf("Pessoa %d tem nome %s, idade %d, gênero %s e profissão %s\n", i + 1, registros[i].nome, registros[i].idade, registros[i].genero, registros[i].profissao);
    }

    return 0;
}