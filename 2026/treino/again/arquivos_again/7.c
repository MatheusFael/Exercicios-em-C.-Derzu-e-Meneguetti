#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1. Abre apenas UM arquivo no modo "r+" (leitura e escrita)
    FILE *ARQUIVO = fopen("../entrada.txt", "r+");
    
    if (ARQUIVO == NULL)
    {
        perror("Erro ao abrir entrada.txt");
        return 1;
    }
    
    int c; // O tipo precisa ser int para o EOF funcionar corretamente

    // 2. Parênteses corrigidos para o fgetc
    while ((c = fgetc(ARQUIVO)) != EOF)
    {
        // 3. Aspas simples em vez de aspas duplas no fputc!
        if (c == '4')
        {   
            fseek(ARQUIVO, -1, SEEK_CUR); // Move o cursor de volta para substituir o '4'
            fputc('8', ARQUIVO); // Substitui a vírgula por ponto e vírgula
            fseek(ARQUIVO, 0, SEEK_CUR); // Move o cursor para a posição correta após a substituição
        }
    }

    fclose(ARQUIVO);
    
    printf("Substituicao feita direto no arquivo original com sucesso!\n");
    return 0;
}