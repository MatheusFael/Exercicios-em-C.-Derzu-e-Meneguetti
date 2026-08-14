#include<string.h>
#include<stdio.h>



int main () {

    char string[100];
    char reversed[100];

    printf("Digite uma string: ");
    fgets(string, sizeof(string), stdin);



    string[strcspn(string, "\n")] = '\0';
    size_t len = strlen(string);

    for (size_t i = 0; i < len; i++){
        reversed[i] = string[len - i - 1];
    }

    reversed[len] = '\0';

    printf("String invertida: %s\n", reversed);


    return 0;
}