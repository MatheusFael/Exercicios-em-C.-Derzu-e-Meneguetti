#include <string.h>
#include <stdio.h>

int main()
{
    char str1[100][50];
    int opcao;
    int total = 0;

    do {
        printf("\nDigite uma opcao 1 2 ou 3 (0 para sair): ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 1:
            if (total < 100) {
                printf("Digite uma string: ");
                fgets(str1[total], 50, stdin);
                str1[total][strcspn(str1[total], "\n")] = '\0';
                total++;
                printf("String adicionada com sucesso\n");
            } else {
                printf("Limite de strings atingido\n");
            }
            break;

        case 2:
            if (total == 0) {
                printf("Nenhuma string cadastrada\n");
            } else {
                for (int i = 0; i < total; i++) {
                    printf("String %d: %s\n", i, str1[i]);
                }
            }
            break;

        case 3: {
            char target[50];
            int encontrada = 0;
            int posicao = -1;

            printf("Digite a string para buscar: ");
            fgets(target, 50, stdin);
            target[strcspn(target, "\n")] = '\0';

            for (int i = 0; i < total; i++) {
                if (strcmp(str1[i], target) == 0) {
                    encontrada = 1;
                    posicao = i;
                    break;
                }
            }

            if (encontrada) {
                printf("String encontrada na posicao %d\n", posicao);
            } else {
                printf("String nao encontrada\n");
            }
            break;
        }

        case 0:
            printf("Saindo...\n");
            break;

        default:
            printf("Opcao invalida\n");
        }

    } while (opcao != 0);

    return 0;
}
