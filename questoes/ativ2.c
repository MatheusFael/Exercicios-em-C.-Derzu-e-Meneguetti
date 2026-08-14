#include <stdio.h>


int main()
{
    int arr[5] = {10, 20, 30, 40, 50};

    int *p =  &arr[2];





    printf("%d\n", *p);
    return 0;

}