#include <stdio.h>
#include <string.h>

int main()
{

    char matriz[3][20] = {"Vitor", "Meneghetti", "Araujo"};

    char *ponteiro[3];

        for (int i = 0; i < 3; i++)
    {

        ponteiro[i] = matriz[i];
    }

    for (int i = 0; i < 3; i++)
    {

        for (int j = 0; j < strlen(ponteiro[i]); j++)
        {

            switch (ponteiro[i][j])
            {

            case 'a':
            case 'A':
                ponteiro[i][j] = '4';
                break;

            case 'e':
            case 'E':
                ponteiro[i][j] = '3';
                break;
            case 'i':
            case 'I':
                ponteiro[i][j] = '1';
                break;
            case 'o':
            case 'O':
                ponteiro[i][j] = '0';
                break;
            case 'u':
            case 'U':
                ponteiro[i][j] = '5';
                break;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {

        printf("%s\n", ponteiro[i]);
    }

    return 0;
}