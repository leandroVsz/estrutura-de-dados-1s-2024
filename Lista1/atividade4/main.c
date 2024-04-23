#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(int argc, char* argv[]){

    No* pilha1 = no('A', no('B', no('C', no('D', no('E', no('F', NULL))))));
    No* pilha_copia = copiar(pilha1);
    printf("Pilha original: ");
    imprimir(pilha1);

    printf("\nPilha copiada: ");
    imprimir(pilha_copia);

    
    
    printf("\nqtd = %d", qnt_nos(pilha1));
    printf("\ncopia qtd = %d", qnt_nos(pilha_copia));
    
    liberar(pilha1);
    liberar(pilha_copia);

    exit(0);
}