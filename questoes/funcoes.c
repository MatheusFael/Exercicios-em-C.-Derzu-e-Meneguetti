#include <stdio.h>
#include <math.h>
// 1. Funções declaradas FORA da main

int fatorial(int n)
{                      // Adicionado "int" antes de n
    int resultado = 1; // Criada variável para guardar a conta

    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            resultado = resultado * i; // Usa a variável, não o nome da função
        }
    }
    return resultado;
}

int potencia(int base, int expoente)
{ // Adicionado "int" nos parâmetros
    int resultado = 1;

    if (expoente == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= expoente; i++)
        {
            resultado = resultado * base;
        }
    }
    return resultado;
}

float raize(int a, int b, int c)
{
    float x1, x2;
    if (a == 0)
    {
        printf("Coeficiente 'a' nao pode ser zero.\n");
    }

    x1 = ( -b + sqrt(b*b - 4*a*c) ) / (2*a); // Placeholder
    x2 = ( -b - sqrt(b*b - 4*a*c) ) / (2*a); // Placeholder

    printf("As raizes da equacao sao: x1 = %.2f x2 = %.2f\n", x1, x2);
    return x1;// Placeholder
}

// 2. A main fica sozinha aqui embaixo
int main()
{

    int num, base, expoente;

    // Testando Fatorial
    printf("Digite um numero para calcular o fatorial: ");
    scanf("%d", &num);
    printf("Fatorial de %d eh %d\n", num, fatorial(num));

    // Testando Potência
    printf("\nDigite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);
    printf("%d elevado a %d eh %d\n", base, expoente, potencia(base, expoente));
    // Testando Raízes
    int a, b, c;
    printf("\nDigite os coeficientes a, b e c da equacao do segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);
    raize(a, b, c);

    return 0;
}