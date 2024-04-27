#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

No* no(char valor, No* proximo_no){
    No* no = malloc(sizeof(No));
    no->valor = valor;
    no->proximo_no = proximo_no;
    return no;
}

void inserir_no(No* H, No* no){
    if( H != NULL){
        if( H->proximo_no == NULL){
            H->proximo_no = no;
        }
        else{
            inserir_no(H->proximo_no, no);
        }
    }
}

void imprimir(No* H){
    if(H != NULL){
        printf("%c ", H->valor);
        imprimir(H->proximo_no);
    }
}

int qnt_nos(No* H){
    if( H != NULL){
        return 1 + qnt_nos(H->proximo_no);
    }
    return 0;
}

No* copiar(No* H){
   if(H != NULL){
        return no(H->valor, copiar(H->proximo_no));
   }
   return NULL; 
}

void liberar(No* H){
    if(H != NULL){
        liberar(H->proximo_no);
        free(H);
    }
}

int verificar_existencia(No* H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1;
        }
        return verificar_existencia(H->proximo_no, valor_busca);
    }
    return 0;
}

int verificar_ocorrencias(No* H, char valor_busca){
    if(H != NULL){
        if(H->valor == valor_busca){
            return 1 + verificar_ocorrencias(H->proximo_no, valor_busca);
        }
        return 0 + verificar_ocorrencias(H->proximo_no, valor_busca);
    }
    return 0;
}

void imprimir_inversa(No* H){
    if(H != NULL){
        imprimir_inversa(H->proximo_no);
        printf("%c ", H->valor);
    }
}


void lista_inserir_no_i(No** H, int i, char valor) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->proximo_no = NULL;

    if(i == 0) {
        novo_no->proximo_no = *H;
        *H = novo_no;
    } 
    else {
        No* temp = *H;
        for(int j = 0; j < i-1 && temp != NULL; j++)
            temp = temp->proximo_no;
        if(temp == NULL)
            return;
        novo_no->proximo_no = temp->proximo_no;
        temp->proximo_no = novo_no;
    }
}

void lista_remover_no_i(No** H, int i) {
    if(*H == NULL)
        return;

    No* temp = *H;

    if(i == 0) {
        *H = temp->proximo_no;
        free(temp);
        return;
    }

    for(int j = 0; temp != NULL && j < i-1; j++)
        temp = temp->proximo_no;

    if(temp == NULL || temp->proximo_no == NULL)
        return;

    No* proximo_no = temp->proximo_no->proximo_no;
    free(temp->proximo_no);
    temp->proximo_no = proximo_no;
}

void lista_remover_no(No** H, char valor_busca) {
    while(*H != NULL && (*H)->valor == valor_busca) {
        No* temp = *H;
        *H = (*H)->proximo_no;
        free(temp);
    }

    if(*H == NULL)
        return;

    No* temp = *H;
    while(temp->proximo_no != NULL) {
        if(temp->proximo_no->valor == valor_busca) {
            No* no_a_remover = temp->proximo_no;
            temp->proximo_no = temp->proximo_no->proximo_no;
            free(no_a_remover);
        } else {
            temp = temp->proximo_no;
        }
    }
}