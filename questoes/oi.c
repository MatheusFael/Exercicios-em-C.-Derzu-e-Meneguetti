#include <stdio.h>

// 1. Passagem por VALOR (Cópia)
void somaPorValor(int num) {
    num = num + 10; 
    printf("--> Dentro da funcao (Valor): %d\n", num);
}

// 2. Passagem por REFERÊNCIA (Ponteiro/Endereço)
int somaporReferencia(int *numprt) {

    *numprt += 10;
    printf("--> Dentro da funcao (Referencia): %d\n", *numprt);
    
}

int main() {
    int x = 5;

    printf("1. Testando por VALOR:\n");
    printf("Antes: %d\n", x);
    somaPorValor(x); // Manda apenas o valor 5
    printf("Depois: %d (Nao mudou!)\n\n", x);

    printf("2. Testando por REFERENCIA:\n");
    printf("Antes: %d\n", x);
    somaPorReferencia(&x); // Manda o ENDEREÇO de memória de x
    printf("Depois: %d (Mudou!)\n", x);

    return 0;
}