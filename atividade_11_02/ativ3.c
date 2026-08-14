#include <stdio.h>
#include <math.h>


int raiz(int a, int b, int c){

    int D, X1, X2;

    if (a == 0){
        printf("Nao eh uma funcao do segundo grau.\n");
        return 0;
    }

    D = b*b - 4*a*c;


    if (D < 0){
        printf("Nao existem raizes reais.\n");
        return 0;
    }

    X1 = (-b + sqrt(D)) / (2*a) ; 
    X2 = (-b -  sqrt(D)) / (2*a);
    printf("As raizes sao: %d e %d\n", X1, X2);

}








int main()
{
    int a, b, c;


    printf("Digite o valor de a, b e c da funcao do segundo grau: ");
    scanf("%d %d %d", &a, &b, &c);


    raiz(a, b, c);


    return 0;
}