#include <stdio.h>
#include <string.h>

int main()
{

    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int soma[4];


    for (int i = 0; i < 3; i++)
    {
        int soma_coluna = 0;
        for (int j = 0; j < 3; j++)
        {
            
            soma_coluna += matriz[i][j];
            soma[i] = soma_coluna;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Soma da linha %d: %d\n", i + 1, soma[i]);
    }



    return 0;
}