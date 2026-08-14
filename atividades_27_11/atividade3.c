#include <stdio.h>

int main () {

    float altura, peso, imc;

    printf("Digite a altura (em metros): ");
    scanf("%f", &altura);

    printf("Digite o peso (em kg): ");
    scanf("%f", &peso);

    imc = peso / (altura * altura);


    if (altura <= 0 || peso <= 0) {
        printf("Altura ou peso invalidos.\n");
        return 1;
    }   

    if (imc < 18.5) {
        printf("IMC = %.1f -> Voce esta abaixo do peso ideal!\n", imc);
    } else if (imc >= 18.5 && imc <= 24.9) {
        printf("IMC = %.1f -> Parabens - voce esta em seu peso normal!\n", imc);
    } else if (imc >= 25.0 && imc <= 29.9) {
        printf("IMC = %.1f -> Voce esta acima de seu peso (sobrepeso)\n", imc);
    } else if (imc >= 30.0 && imc <= 34.9) {
        printf("IMC = %.1f -> Obesidade grau I\n", imc);
    } else if (imc >= 35.0 && imc <= 39.9) {
        printf("IMC = %.1f -> Obesidade grau II\n", imc);
    } else  {
        printf("IMC = %.1f -> Obesidade grau III\n", imc);
    }


    return 0;
}