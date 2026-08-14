#include<stdio.h>
#include<string.h>

int main() {
    
    char matriz[3][20] = {"Vitor", "Meneghetti", "Araujo"};



    for (int i= 0; i < 3; i++)   {
        printf("%s essas palavra tem %d caracteres\n", matriz[i], strlen(matriz[i]));
    }
    


    return 0;
}
