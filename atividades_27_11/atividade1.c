#include <stdio.h>

int main()
{

    int idade_nadador;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade_nadador);

    if (idade_nadador >= 5 && idade_nadador <= 7)
    {
        printf("Nadador de idade %d é da categoria Infantil A\n", idade_nadador);
    }
    else if (idade_nadador >= 8 && idade_nadador <= 10)
    {
        printf("Nadador de idade %d é da categoria Infantil B\n", idade_nadador);
    }
    else if (idade_nadador >= 11 && idade_nadador <= 13)
    {
        printf("Nadador de idade %d é da categoria Juvenil A\n", idade_nadador);
    }
    else if (idade_nadador >= 14 && idade_nadador <= 17)
    {
        printf("Nadador de idade %d é da categoria Juvenil B\n", idade_nadador);
    }
    else
    {
        printf("Nadador de idade %d é da categoria Sênior\n", idade_nadador);
    }

    return 0;
}
