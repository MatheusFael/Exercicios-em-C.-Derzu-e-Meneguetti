#include <stdio.h>

int main()
{
    int arr[10];
    int multiplicado[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o  numero");
        scanf("%d", &arr[i]);

        multiplicado[i] = arr[i] * arr[i];
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 9)
        {
            printf("%d\n", multiplicado[i]);
        }
        else
        {
            printf("%d - ", multiplicado[i]);
        }
    }
}