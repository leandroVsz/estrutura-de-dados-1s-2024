#include <stdio.h>
#include <stdlib.h>
#include "lista_circular.h"

No* criar_no(char valor) {
    No* novo_no = (No*)malloc(sizeof(No));
    novo_no->valor = valor;
    novo_no->prox = novo_no;
    return novo_no;
}

void inserir_no(No** H, char valor) {
    No* novo_no = criar_no(valor);
    if(*H == NULL) {
        *H = novo_no;
    } 
    else {
        No* temp = *H;
        while(temp->prox != *H)
            temp = temp->prox;
        temp->prox = novo_no;
        novo_no->prox = *H;
    }
}

void imprimir_lista(No* H) {
    if(H != NULL) {
        No* temp = H;
        do {
            printf("%c ", temp->valor);
            temp = temp->prox;
        } 
        while(temp != H);
        printf("\n");
    }
}

void remover_no(No** H, char valor) {
    if(*H == NULL)
        return;
    No* temp = *H;
    No* prev = NULL;
    do {
        if(temp->valor == valor) {
            if(prev == NULL) { 
                No* ultimo_no = *H;
                while(ultimo_no->prox != *H)
                    ultimo_no = ultimo_no->prox;
                *H = (*H)->prox;
                ultimo_no->prox = *H;
                free(temp);
                temp = *H;
            } 
            else {
                prev->prox = temp->prox;
                free(temp);
                temp = prev->prox;
            }
        } 
        else {
            prev = temp;
            temp = temp->prox;
        }
    } 
    while(temp != *H);
}


void liberar_lista(No** H) {
    if(*H != NULL) {
        No* temp = *H;
        do {
            No* no_a_liberar = temp;
            temp = temp->prox;
            free(no_a_liberar);
        } 
        while(temp != *H);
        *H = NULL;
    }
}