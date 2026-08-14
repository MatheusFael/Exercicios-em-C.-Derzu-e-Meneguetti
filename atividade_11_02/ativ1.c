#include <stdio.h>

float calcular(int a, int b, char operador)
{
    switch (operador)
    {
    case '+':
        return a + b;
    case '-':
        return a - b;
    case '*':
        return a * b;
    case '/':
        if (b != 0)
        {
            return (float)a / b;
        }
        else
        {
            printf("Erro: Divisao por zero.\n");
            return 0;
        }
    default:
        printf("Erro: Operador invalido.\n");
        return 0;
    }
}

int main()
{
    int num1, num2;
    char operador;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    printf("Digite o operador (+, -, *, /): ");
    
    scanf(" %c", &operador); 

    float resultado = calcular(num1, num2, operador);
    
    printf("Resultado: %.2f", resultado);

    return 0;
}