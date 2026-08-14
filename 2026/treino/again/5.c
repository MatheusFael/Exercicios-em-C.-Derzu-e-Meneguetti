#include <stdio.h>
#include <string.h>

int main()
{
   
    typedef struct {
        char nome[50];
        int notas[2];
        
    } Pessoa;

    void media(Pessoa p){
        int media = 0;
        for (int i = 0; i < 2; i++){
            media += p.notas[i];
        }
        printf("A média de %s é: %d\n", p.nome, media/2);

    }

    
    Pessoa matheus = {"Matheus", {8, 9}};
    media(matheus);

    return 0;
}
