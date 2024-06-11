#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int top;
} Stack;

// Função para criar uma nova pilha
Stack* createStack() {
    Stack* stack = (Stack*) malloc(sizeof(Stack));
    stack->top = -1;
    return stack;
}

// Função para verificar se a pilha está vazia
int isEmpty(Stack* stack) {
    return stack->top == -1;
}

// Função para empurrar um item para a pilha
void push(Stack* stack, int item) {
    if (stack->top == MAX_SIZE - 1) {
        printf("Stack overflow");
        return;
    }
    stack->items[++stack->top] = item;
}

// Função para remover um item da pilha
int pop(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow");
        return -1;
    }
    return stack->items[stack->top--];
}

// Função para obter o item do topo da pilha
int peek(Stack* stack) {
    if (isEmpty(stack)) {
        printf("Stack underflow");
        return -1;
    }
    return stack->items[stack->top];
}

int main(void){
    Stack* pilha = createStack();
    push(pilha, 12);
    int topo = peek(pilha);
    printf("topo da pilha: %i", topo);
}