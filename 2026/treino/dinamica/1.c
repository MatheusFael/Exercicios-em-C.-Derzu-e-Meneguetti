#include<stdio.h>
#include<stdlib.h>


int main (){


    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);


    int *arr = (int *) calloc(n,sizeof(int));

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }


    for (int i = 0; i < n; i++) {
        printf(" Element %d: %d", i + 1, arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}