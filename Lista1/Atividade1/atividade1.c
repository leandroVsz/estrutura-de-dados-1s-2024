#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("ERRO: NENHUM NUMERO INFORMADO");
        exit(0);
    }

    int qnt = argc - 1;
    int soma = 0;
    int num = 0;
    float media;
    int lista[qnt];
    int maior = atoi(argv[1]);
    int menor = atoi(argv[1]); 

    /* faz a soma e calcula a média, encontra o maior e o menor número*/
    for (int i = 1; i <= argc - 1; i++){
        num = atoi(argv[i]);
        soma += num;
        lista[i - 1] = num;
        
        if (num > maior){
            maior = num;
        }

        else if (num < menor)
        {
            menor = num;
        }
    }
    media = soma / (float)qnt;

    /* ordena a lista desordenada de elementos */
    int temp;
    if (argc > 2)
        for (int i = 0; i <= qnt; i++){
            for (int j = 0; j <= qnt; j++){
                if (lista[j] > lista[j + 1]){
                    temp = lista[j];
                    lista[j] = lista[j + 1];
                    lista[j + 1]  = temp;
                }
            }
        }
    
    printf("Quantidade de numero: %i\n", qnt);
    printf("Media dos numeros: %.2f\n", media);
    printf("Maior numero: %i\n", maior);
    printf("Menor numero: %i\n", menor);
    printf("Lista dos numeros ordenados: [");
    for (int i = 0; i < qnt; i++){
        printf(" %i", lista[i]);
    }
    printf(" ]");
}