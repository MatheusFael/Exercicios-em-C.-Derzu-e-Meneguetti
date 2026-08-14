#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *SAIDA = fopen("../saida.txt", "w");
    if (SAIDA == NULL)
    {
        perror("Erro ao abrir saida.txt");
        return 1;
    }
    FILE *ENTRADA = fopen("../entrada.txt", "r");
    if (ENTRADA == NULL)
    {
        perror("Erro ao abrir entrada.txt");
        fclose(SAIDA);
        return 1;
    }
    

    char nome[100];
    int nota1, nota2;

    while (fscanf(ENTRADA, " %99[^,],%d,%d", nome, &nota1, &nota2) == 3){
        fprintf(SAIDA, "Aluno: %s, Média: %d\n", nome, (nota1 + nota2) / 2);
    }
    


    fclose(SAIDA);
    fclose(ENTRADA);
    return 0;
}
