#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


int main(int argc, char* argv[]){

    No* pilha1 = no('A', no('B', no('C', no('D', no('B', no('F', NULL))))));
    No* pilha_copia = copiar(pilha1);
    printf("Pilha original: ");
    imprimir(pilha1);

    printf("\nPilha copiada: ");
    imprimir(pilha_copia);

    
    
    printf("\nqtd = %d", qnt_nos(pilha1));
    printf("\ncopia qtd = %d\n", qnt_nos(pilha_copia));
    
    printf("\nValor 'C' esta presente? %d", verificar_existencia(pilha1, 'C'));
    printf("\nValor 'Z' esta presente? %d\n", verificar_existencia(pilha1, 'Z'));

    printf("\nOcorrencias da letra 'C': %d", verificar_ocorrencias(pilha1, 'C'));
    printf("\nOcorrencias da letra 'B' %d\n", verificar_ocorrencias(pilha1, 'B'));

    printf("\nPilha inversa: \n");
    imprimir_inversa(pilha1);
 
    lista_inserir_no_i(&pilha1, 0, 'Z');
    printf("\n\n");
    imprimir(pilha1);

    lista_remover_no_i(&pilha1, 4);
    printf("\n\n");
    imprimir(pilha1);


    lista_remover_no(&pilha1, 'B');
    printf("\n\n");
    imprimir(pilha1);


    liberar(pilha1);
    liberar(pilha_copia);

    exit(0);
}