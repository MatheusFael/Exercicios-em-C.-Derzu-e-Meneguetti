#include <stdio.h>


int main() {
    int num;
    int maior = -2147483648; 
    int menor = 2147483647; 
    int soma = 0;
    
    do {
        printf("Entre com um inteiro: ");
        scanf("%d", &num);

        soma += num;

        if (num >= maior) {
            maior = num;
        }

        if (num <= menor && num != 0) {
            menor = num;
        }

    }while (num != 0);

    printf("Maior: %d\n", maior);
    printf("Menor: %d\n", menor);
    printf("Soma: %d\n", soma);

    return 0;
}