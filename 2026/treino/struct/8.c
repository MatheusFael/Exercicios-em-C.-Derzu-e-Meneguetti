#include <stdio.h>
#include <string.h>

typedef enum {
    DOMINGO,
    SEGUNDA,
    TERCA,
    QUARTA,
    QUINTA,
    SEXTA,
    SABADO
} DiaSemana;



typedef struct {
    int horas;
    int minutos;
    int segundos;
    DiaSemana dia;
    
} Tempo, *ponteiroTempo;

void converte(int horas){
    int segundos = horas * 3600;
    printf("%d horas equivalem a %d segundos\n", horas, segundos);
    return segundos;
}

int main()
{   
    int horas = 2;
    converte(horas);

    Tempo tempo1 = {2, 30, 45, QUARTA};

    printf("Horas: %d\n", tempo1.horas);
    ponteiroTempo tempoponteiro = &tempo1;
    tempoponteiro->horas = 3;
    printf("Horas: %d\n", tempo1.horas);
    

     return 0;
}
