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

    typedef struct {
        char nome[50];
        int idade;
        dia hoje;
    } Pessoa;


    void imprimir(Pessoa p){
        printf("O nome da pessoa é: %s\n", p.nome);
        printf("A idade da pessoa é: %d\n", p.idade);
        printf("O dia de hoje é: %d\n", p.hoje);

    }

    void cadastrar(Pessoa *p){
        printf("Diga o nome da pessoa: ");
        scanf("%49s", p->nome);
        printf("Diga a idade da pessoa: ");
        scanf("%d", &p->idade);
        printf("Diga o dia de hoje (0-6): ");
        scanf("%d", (int*)&p->hoje);
    }


    void buscar(Pessoa pessoas[]){
        char nome[50];
        printf("Diga o nome da pessoa que deseja buscar: ");
        scanf("%49s", nome);

        for (int i= 0; i < 3; i++){
            if (strcmp(pessoas[i].nome, nome) == 0){
                imprimir(pessoas[i]);
                return;
            }
        }
        printf("Pessoa não encontrada.\n");
    }

    Pessoa pessoas[3];
    
    for (int i = 0; i < 3; i++){
        cadastrar(&pessoas[i]);
    } 

    buscar(pessoas);



    return 0;
}
