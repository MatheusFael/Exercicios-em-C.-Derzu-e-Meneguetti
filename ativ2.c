#include <stdio.h>


int main()
{
    int n1, n2, n3, media;

    printf("Enter tres numeros: ");

    scanf("%d %d %d", &n1, &n2, &n3);

    media = (n1 + n2 + n3) / 3;

    printf("A média é : %d\n", media);

    return 0;
}