    #include <stdio.h>


    int main () {

        int array[10];
        int array_aoquadrado[10];
        int numero;

        for (int i = 0; i < 10; i++) {
            printf("Digite o valor para a posicao: %d:", i);
            scanf("%d", &numero);
            array[i] = numero;
            array_aoquadrado[i] = numero * numero;
        }

        for (int i = 0; i < 10; i++) {
            printf("%d ", array[i]);
        }

        printf("\n");
        for (int i = 0; i < 10; i++) {
            printf("%d ", array_aoquadrado[i]);
        }

        return 0;
    }


