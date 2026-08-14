#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void rodar()
{
    FILE *ENTRADA = fopen("../entrada.txt", "r");
    FILE *TEMP = fopen("../temporario.txt", "w");

    printf("fale o nome que ce quer buscar\n");
    char nomebuscar[100];
    scanf("%s", nomebuscar);

    char nome[100];
    int nota1;
    int nota2;
    int encontrou = 0;
    while (fscanf(ENTRADA, " %99[^,],%d,%d", nome, &nota1, &nota2) == 3)
    {
        if (strcmp(nome, nomebuscar) == 0)
        {
            encontrou = 1;
            printf("Achou!\n");
            printf("1- pra trocar o nome, 2 - trocar o nota1, 3 - trocar o nota2");
            int escolha;
            scanf("%d", &escolha);
            if (escolha == 1)
            {
                printf("fale o nome\n");
                scanf("%s", nome);
            }
            else if (escolha == 2)
            {
                printf("fale o nota1\n");
                scanf("%d", &nota1);
            }
            else if (escolha == 3)
            {
                printf("fale o nota2\n");
                scanf("%d", &nota2);
            }
        }
        fprintf(TEMP, "%s,%d,%d\n", nome, nota1, nota2);
    }
    fclose(TEMP);
    fclose(ENTRADA);
    if (encontrou)
    {
        remove("../entrada.txt");
        rename("../temporario.txt", "../entrada.txt");
    }
    else
    {
        printf("nao achou");
        remove("../temporario.txt");
    }
}

int main()
{

    rodar();

    return 0;
}