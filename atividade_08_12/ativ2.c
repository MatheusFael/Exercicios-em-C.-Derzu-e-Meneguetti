#include <stdio.h>
#include <ctype.h> 

int main() {
    char matriz[3][20] = {"vitor", "Meneghetti", "Araujo"};
   

 
    for(int i = 0; i < 3; i++) {
        
        if (i == 2){

            printf("%c" , toupper(matriz[i][0]));
        }
        else {
            printf("%c. ", toupper(matriz[i][0]));
        }
        
    }
    
    printf("\n");
    return 0;
}