#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100

typedef struct {
    int key;
    int value;
} HashItem;

typedef struct {
    HashItem* items[MAX_SIZE];
} HashTable;

// Função para criar uma nova tabela hash
HashTable* createHashTable() {
    HashTable* hashTable = (HashTable*) malloc(sizeof(HashTable));
    for (int i = 0; i < MAX_SIZE; i++) {
        hashTable->items[i] = NULL;
    }
    return hashTable;
}

// Função hash simples
int hashFunction(int key) {
    return key % MAX_SIZE;
}

// Função para adicionar um item à tabela hash
void put(HashTable* hashTable, int key, int value) {
    int index = hashFunction(key);
    HashItem* item = (HashItem*) malloc(sizeof(HashItem));
    item->key = key;
    item->value = value;
    hashTable->items[index] = item;
}

// Função para obter um item da tabela hash
int get(HashTable* hashTable, int key) {
    int index = hashFunction(key);
    HashItem* item = hashTable->items[index];
    if (item == NULL) {
        printf("No item found for key %d", key);
        return -1;
    }
    return item->value;
}


int main(void){
    HashTable* tabela = createHashTable();
}