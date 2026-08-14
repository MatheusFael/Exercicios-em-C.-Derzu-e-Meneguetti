#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Usamos "r+" para ler e escrever no MESMO arquivo
    FILE *file = fopen("input.txt", "r+");
    
    // É uma boa prática usar 'int' no lugar de 'char' ao usar fgetc, 
    // para que ele consiga ler corretamente o valor negativo do EOF.
    int c; 

    if (file == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    // Com os parênteses extras, ele lê o caractere para 'c' PRIMEIRO, e depois compara com EOF
    while ((c = fgetc(file)) != EOF) {
        
        if (c == 'a') {
            fseek(file, -1, SEEK_CUR); // Volta o cursor 1 casa pra trás
            fputc('4', file);          // Sobrescreve com o '4'
            fseek(file, 0, SEEK_CUR);  // Sincroniza o arquivo para voltar a ler
        } 
        else if (c == 'e') {
            fseek(file, -1, SEEK_CUR);
            fputc('3', file);
            fseek(file, 0, SEEK_CUR);
        }
        else if (c == 'i') {
            fseek(file, -1, SEEK_CUR);
            fputc('1', file);
            fseek(file, 0, SEEK_CUR);
        }
        else if (c == 'o') {
            fseek(file, -1, SEEK_CUR);
            fputc('0', file);
            fseek(file, 0, SEEK_CUR);
        }
        else if (c == 'u') {
            fseek(file, -1, SEEK_CUR);
            fputc('5', file);
            fseek(file, 0, SEEK_CUR);
        }
        // Se não for nenhuma dessas vogais (for uma consoante ou espaço), 
        // ele simplesmente não faz nada e o while puxa a próxima letra normalmente.
    }

    fclose(file);
    printf("Substituicao concluida com sucesso no arquivo input.txt!\n");
    
    return 0;
}