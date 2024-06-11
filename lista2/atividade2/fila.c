#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int items[MAX_SIZE];
    int front;
    int rear;
} Queue;

// Função para criar uma nova fila
Queue* createQueue() {
    Queue* queue = (Queue*) malloc(sizeof(Queue));
    queue->front = -1;
    queue->rear = -1;
    return queue;
}

// Função para verificar se a fila está vazia
int isEmpty(Queue* queue) {
    return queue->rear == -1;
}

// Função para adicionar um item à fila
void enqueue(Queue* queue, int item) {
    if (queue->rear == MAX_SIZE - 1) {
        printf("Queue overflow");
        return;
    }
    if (queue->front == -1)
        queue->front = 0;
    queue->items[++queue->rear] = item;
}

// Função para remover um item da fila
int dequeue(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow");
        return -1;
    }
    int item = queue->items[queue->front];
    if (queue->front >= queue->rear) {
        queue->front = -1;
        queue->rear = -1;
    } else {
        queue->front++;
    }
    return item;
}

// Função para obter o item da frente da fila
int peek(Queue* queue) {
    if (isEmpty(queue)) {
        printf("Queue underflow");
        return -1;
    }
    return queue->items[queue->front];
}

int main(void){
    Queue* fila = createQueue();
    enqueue(fila, 10);
    int frente = peek(fila);
    printf("frente da fila: %i", frente);
}
