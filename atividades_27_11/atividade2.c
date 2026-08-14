#include <stdio.h>

int main () {

    int num1, num2;
    char operacao;


    printf("Digite o dois numeros: ");
    scanf("%d %d", &num1, &num2);

    printf("Digite a operacao (+, -, *, /): ");
    scanf(" %c", &operacao);

    switch (operacao) {
        case '+':
            printf("Resultado: %d \n", num1 + num2);
            break;
        case '-':
            printf("Resultado: %d \n", num1 - num2);
            break;
        case '*':
            printf("Resultado: %d \n", num1 * num2);
            break;
        case '/' :
            printf("Resultado : %d \n", num1 / num2);
            break;
        default: 
            printf("Operacao Invalida\n");
            return 0;   
    }
    
    return 0;
}