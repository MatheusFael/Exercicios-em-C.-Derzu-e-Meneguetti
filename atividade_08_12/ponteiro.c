#include<stdio.h>
#include<string.h>

int main() {
    
    char matriz[3][20] = {"oi", "io", "oi"};

    char *ponteiros[3];

    for (int i = 0; i < 3; i++) {
        ponteiros[i] = matriz[i];
    }

    for (int i = 0; i < 3; i++) {
        for (int j = strlen(ponteiros[i]) -1 ; j >= 0; j--) {
            printf("%c", ponteiros[i][j]);
        }
        printf("\n");
    }


    return 0;
}
