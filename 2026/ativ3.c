#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arqEntrada, *arqSaida;
    char linha[150];
    
    char nome[100];
    float nota1, nota2, media;
    char situacao[20];

    int total_alunos = 0;
    int aprovados = 0;
    float soma_medias = 0.0;

    arqEntrada = fopen("alunos.txt", "r");
    arqSaida = fopen("relatorio.txt", "w");

    if (arqEntrada == NULL || arqSaida == NULL) {
        printf("Erro: Nao foi possivel abrir os arquivos!\n");
        return 1;
    }

    fprintf(arqSaida, "--- RELATORIO DE ALUNOS ---\n\n");

    while (fgets(linha, 150, arqEntrada) != NULL) {
        if (sscanf(linha, "%[^,], %f, %f", nome, &nota1, &nota2) == 3) {
            media = (nota1 + nota2) / 2.0;
            
            total_alunos++;
            soma_medias += media;

            if (media >= 7.0) {
                sprintf(situacao, "Aprovado");
                aprovados++;
            } 
            else if (media >= 4.0) {
                sprintf(situacao, "Na final");
            } 
            else {
                sprintf(situacao, "Reprovado");
            }

            fprintf(arqSaida, "Nome: %s | Media: %.2f | Situacao: %s\n", nome, media, situacao);
        }
    }

    if (total_alunos > 0) {
        float media_turma = soma_medias / total_alunos;
        float porcentagem_aprovados = ((float)aprovados / total_alunos) * 100.0;

        fprintf(arqSaida, "\n--- RESUMO DA TURMA ---\n");
        fprintf(arqSaida, "Media geral da turma: %.2f\n", media_turma);
        fprintf(arqSaida, "Porcentagem de aprovados: %.1f%%\n", porcentagem_aprovados);
    } else {
        fprintf(arqSaida, "\nNenhum dado valido foi encontrado no arquivo.\n");
    }

    fclose(arqEntrada);
    fclose(arqSaida);

    printf("Sucesso! O relatorio foi gerado no arquivo 'relatorio.txt'.\n");

    return 0;
}