#include <stdio.h>
#include <stdlib.h>

int main()
{

    char linha[100];
    FILE *file = fopen("input.txt", "r");

     while(fgets(linha, 100, file) != NULL){
        if (linha[0] == 'a') {
            printf("%s", linha);
        }
    }


    fclose(file);
    return 0;
    
}   
   