#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void trocaralgo(const char *n)
{
    FILE *ENTRADA = fopen("entrada.txt", "r");
    FILE *temporario = fopen("temporario.txt", "w");
    
    // Boa prática: Verificar se os arquivos abriram mesmo
    if (ENTRADA == NULL || temporario == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return;
    }

    int NOTA1, NOTA2, encontrado = 0;
    char nome[50];
    
    // CORREÇÃO 2: Espaço adicionado no início e limite de caracteres
    while (fscanf(ENTRADA, " %49[^,], %d , %d", nome, &NOTA1, &NOTA2) == 3)
    {
        if (strcmp(nome, n) == 0)
        {
            encontrado = 1;
            int opcao;
            printf("\n--- ALUNO ENCONTRADO ---\n");
            printf("Nome atual: %s | Notas: %d e %d\n", nome, NOTA1, NOTA2);
            printf("O que deseja alterar?\n");
            printf("1 - Nome\n");
            printf("2 - Nota 1\n");
            printf("3 - Nota 2\n");
            printf("Escolha: ");
            scanf("%d", &opcao);

            if (opcao == 1)
            {
                printf("Digite o novo nome: ");
                // CORREÇÃO 3: Agora aceita nomes com espaços
                scanf(" %49[^\n]", nome); 
            }
            else if (opcao == 2)
            {
                printf("Digite a nova nota 1: ");
                scanf("%d", &NOTA1);
            }
            else if (opcao == 3)
            {
                printf("Digite a nova nota 2: ");
                scanf("%d", &NOTA2);
            }
            
            fprintf(temporario, "%s, %d, %d\n", nome, NOTA1, NOTA2);
        }
        else
        {
            fprintf(temporario, "%s, %d, %d\n", nome, NOTA1, NOTA2);
        }
    }

    // CORREÇÃO 1: Fechar os arquivos PRIMEIRO
    fclose(ENTRADA);
    fclose(temporario);

    // DEPOIS apagar e renomear
    if (!encontrado)
    {
        printf("Aluno nao encontrado.\n");
        remove("temporario.txt"); // Apaga o lixo se não achou ninguém
    }
    else
    {
        remove("entrada.txt");
        rename("temporario.txt", "entrada.txt");
        printf("Dados atualizados com sucesso!\n");
    }
}

int main()
{
    char nome[50];

    printf("Digite o nome do aluno que deseja alterar: ");
    // CORREÇÃO 3: Agora aceita nomes com espaços na busca
    scanf(" %49[^\n]", nome);

    trocaralgo(nome);

    return 0;
}