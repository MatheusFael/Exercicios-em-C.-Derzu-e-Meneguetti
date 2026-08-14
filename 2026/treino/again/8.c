#include <stdio.h>
#include <string.h>

int main()
{
   
    typedef struct {
        int horas;
        
    } tempo;

    void tempar(tempo t){
        printf("O tempo é: %d segundos\n", t.horas * 3600);
    }


    tempo t1 = {2};
    tempar(t1);


    return 0;
}
