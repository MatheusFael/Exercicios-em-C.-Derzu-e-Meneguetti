#include <stdio.h>


int main() {
    int n;
    int soma_pares = 0;
    int i;

    printf("Digite um numero inteiro positivo apelidado N: ");
    scanf("%d", &n);


    for (i = 2;  i<=n; i+=2) {
        soma_pares += i;
    }

    printf("Soma dos numeros pares de 1 a N sera %d \n", soma_pares);

    return 0;
}