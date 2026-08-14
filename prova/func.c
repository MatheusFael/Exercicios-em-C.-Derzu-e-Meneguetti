#include <stdio.h>

int mudar(int a)
{
    return a * 2;
}

int mudarponteiro(int *a)
{

    *a = *a * 2;
    return *a;
}

int main()
{
    int valor = 10;

    printf("Mudar o valor para %d", mudar(valor));
    printf("\n");
    printf("Mas valor continuar o valor %d", valor);

    printf("\n");

    printf("Mudar o valor por ponteiro para %d", mudarponteiro(&valor));
    printf("\n");
    printf("Agora o valor mudou para %d", valor);  
    return 0;
}

