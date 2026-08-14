#include <stdio.h>

int fatorial(int n) {
        int factorial = 1;
        if (n == 0) {
            return  1;
        }
        for (int i = 1; i <= n; i++){
            factorial *= i;
        }
        return factorial;
    }

    int expoent (int base, int expoente){
        if (expoente == 0){
            return 1;
        }
        int result = 1;
        for (int i = 0; i < expoente; i++){
            result *= base;
        }
        return result;
    }


int main () {

    printf("Fatorial de 5 é %d\n", fatorial(5));
    printf("2 elevado a 3 é %d\n", expoent(2, 3));


    return 0;
}