#include <stdio.h>



int expo (int base, int expoente){
    int resultado;


    if (expoente == 0) {
        return 1;
    }

    resultado = base * expo(base, expoente - 1);
    return resultado;
}







int main()
{
    int base, expoente;

    printf("Digite a base: ");
    scanf("%d", &base);
    printf("Digite o expoente: \n");
    scanf("%d", &expoente);

    printf("Resultado: %d", expo(base, expoente));




    return 0;
}