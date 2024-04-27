#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"


int main(int argc, char* argv[]){
    No* pilha1 = criar_no('A');
    No* no_B = criar_no('B');
    No* no_C = criar_no('C');
    No* no_D = criar_no('D');
    pilha1->prox = no_B;
    no_B->prox = no_C; 
    no_C->prox = no_D; 
    no_D->prox = pilha1; 

    imprimir_lista(pilha1);
    printf("\n");

    inserir_no(&pilha1, 'Z');
    imprimir_lista(pilha1);
    printf("\n");

    remover_no(&pilha1, 'C');
    imprimir_lista(pilha1);
    printf("\n");


    liberar_lista(&pilha1);
    exit(0);
}