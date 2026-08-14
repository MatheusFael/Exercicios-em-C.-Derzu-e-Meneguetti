#include <stdio.h>

int main()
{

    FILE *ARQENTRADA, *ARQSAIDA;

 
    ARQENTRADA = fopen("alunos.txt", "r");
    ARQSAIDA = fopen("relatorio.txt", "w");

    if (ARQENTRADA == NULL || ARQSAIDA == NULL)
    {
        printf("Erro ao abrir os arquivos!\n");
        return 1;
    }

    char nome[50];
    float nota1, nota2, media;

    int aprovados = 0;
    int soma_medias = 0;
    int contagem = 0;


   while (fscanf(ARQENTRADA, "%s, %f, %f", nome, &nota1, &nota2) != EOF)
    {
        media = (nota1 + nota2) / 2;
        fprintf(ARQSAIDA, "Aluno: %s, Media: %.2f\n", nome, media);
        if (media >= 6.0)
        {
            aprovados++;
        }
        soma_medias += media;
        contagem++;
    }   

    fprintf(ARQSAIDA, "Total de aluno %d\n", contagem);
    fprintf(ARQSAIDA, "Total de aprovados %d\n", aprovados);
    fprintf(ARQSAIDA, "Media geral %.2f\n", (float) soma_medias / contagem);

    return 0;
}