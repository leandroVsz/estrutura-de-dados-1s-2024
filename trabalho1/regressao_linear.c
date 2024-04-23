#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE *arquivo_entrada = fopen(argv[1], "r");
    if (arquivo_entrada == NULL) {
        printf("Erro ao abrir o arquivo %s\n", argv[1]);
        return 1;
    }
    int i;
    int num_numeros = 0;
    while (fscanf(arquivo_entrada, "%d", &i) != EOF) {
        num_numeros++;
    }
    fclose(arquivo_entrada);
    printf("%i", num_numeros);
}
    