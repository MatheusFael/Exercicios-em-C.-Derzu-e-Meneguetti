#include <stdio.h>

int main () {

    FILE *arqENTRADA, *arqSAIDA;
    
    char c;

    arqENTRADA = fopen("entrada.txt", "r");
    arqSAIDA = fopen("saida.txt", "w");

    while(( c = fgetc(arqENTRADA) ) != EOF) {
        if (c == 'a') {
            c = '4';
        }
        else if (c == 'e') {
            c = '3';
        }
        else if (c == 'i') {
            c = '2';
        }
        else if (c == 'o') {
            c = '1';
        }
        else if (c == 'u') {
            c = '0';
        }
        else if (c == 'A'){
            c = '25';
        }
        fputc(c, arqSAIDA);
        fprintf(stdout, "%c", c);
    }

    fclose(arqENTRADA);
    fclose(arqSAIDA);

    return 0;
}