#include <stdio.h>
#include <stdlib.h>

typedef enum{
    ANDROID,
    IOS,
}SO;

typedef struct{
    char nome[50];
    int preco;
    SO sistema;
} Produto;

int main(){
    Produto produtos[3];

    for (int i= 0; i < 3; i++){
        printf("Diga o nome do produto: ");
        scanf("%s", produtos[i].nome);
        printf("Diga o preço do produto: ");
        scanf("%d", &produtos[i].preco);
        printf("Diga o sistema operacional do produto (0 para Android, 1 para iOS): ");
        int sistema;
        scanf("%d", &sistema);
        if (sistema == 0){
            produtos[i].sistema = ANDROID;
        } else if (sistema == 1){
            produtos[i].sistema = IOS;
        }
    }

    for (int i = 0; i < 3; i++){
        printf("Produto %d: Nome: %s, Preço: %d, Sistema Operacional: %s\n", i + 1, produtos[i].nome, produtos[i].preco, produtos[i].sistema == ANDROID ? "Android" : "iOS");
    }


    return 0;
}