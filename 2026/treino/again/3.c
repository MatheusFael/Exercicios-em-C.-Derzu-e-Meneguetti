#include <stdio.h>
#include <string.h>

int main()
{
   



    typedef enum {
        SEGUNDA,
        TERCA,
        QUARTA,
        QUINTA,
        SEXTA,
        SABADO,
        DOMINGO
        
        
    } dia;

    dia hoje = QUINTA;
    printf("O dia de hoje é: %d\n", hoje);
    

    return 0;
}
