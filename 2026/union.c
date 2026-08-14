#include <stdio.h>
#include <string.h>

typedef union {
    int i;
    float f;
    char str[20];
} Dados;

int main() {
    Dados data;

    data.i = 10;
    printf("data.i: %d\n", data.i);

    data.f = 220.5;
    printf("data.f: %.1f\n", data.f);
    printf("data.i: %d\n", data.i);

    // Aviso: ao alterar data.f, data.i foi corrompido
    // printf("data.i: %d\n", data.i); // Resultado imprevisível

    return 0;
}
