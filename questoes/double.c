#include <string.h>
#include <stdio.h>


double potencia(double base, int expoente)
{
    double resultado = 1.0;

    if (expoente == 0)
    {
        return 1.0;
    }

    for (int i = 0; i < expoente; i++)
    {
        resultado *= base;
    }

    return resultado;
}
int main()
{

    double base;
    int expoente;

    printf("Digite a base: ");
    scanf("%lf", &base);
    printf("Digite o expoente: ");
    scanf("%d", &expoente);

    printf("Resultado: %.2lf\n", potencia(base, expoente));

    return 0;
}