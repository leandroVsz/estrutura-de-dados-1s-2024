#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int *)a - *(int *)b);
}

int main(int argc, char* argv[]){
    FILE *arquivo_entrada = fopen(argv[1], "r");
    if (arquivo_entrada == NULL) {
        printf("Erro ao abrir o arquivo %s\n", argv[1]);
        return 1;
    }
    
    // Lê os números do arquivo e armazena em um vetor
    int malloc(sizof(int))
    int num_numeros = 0;
    while (fscanf(arquivo_entrada, "%d", &numeros[num_numeros]) != EOF) {
        num_numeros++;
    }
    
    // Ordena os números em ordem crescente
    qsort(numeros, num_numeros, sizeof(int), comparar);

    // Cria o arquivo de saída
    FILE *arquivo_saida = fopen("saida.txt", "w");
    if (arquivo_saida == NULL) {
        printf("Erro ao criar o arquivo de saída.\n");
        return 1;
    }
    for (int i = 0; i < num_numeros; i++) {
        fprintf(arquivo_saida, "%d\n", numeros[i]);
    }
    

    printf("Arquivo de saída gerado com sucesso: saida.txt\n");
    return 0; 
    fclose(arquivo_saida);
    fclose(arquivo_entrada);
}
    