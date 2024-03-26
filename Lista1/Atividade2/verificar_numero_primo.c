#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    if (argc < 2){
        printf("ERRO: NENHUM NUMERO INFORMADO");
        exit(0);
    }
    int num = atoi(argv[1]);

    if (num == 0 || num == 1){
        printf("false");
        exit(1);
    }
    
    for (int i = 2; i < num - 1; i++){
        if (num % i == 0){
            printf("false");
            exit(0);
        }
    }
    printf("true");
}