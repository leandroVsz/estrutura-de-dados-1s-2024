#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAXCHAR 1000

int main(int argc, char* argv[]){
    typedef struct Ponto{
        int valorx;
        float valory;
    } Ponto;
    
    FILE *arquivo_entrada = fopen(argv[1], "r");
    if (arquivo_entrada == NULL) {
        printf("Erro ao abrir o arquivo %s\n", argv[1]);
        return 1;
    }

    

    Ponto *lista_pontos;
    int num_numeros = 0;
    while (fscanf(arquivo_entrada, "%s", &i) != EOF) {
        num_numeros++;
    }
    printf("%s", i);
    
    fclose(arquivo_entrada);
    
}
    