typedef struct No{
    char valor;
    struct No* prox;
} No;

No* criar_no(char valor);
void inserir_no(No** H, char valor);
void imprimir_lista(No* H);
void remover_no(No** H, char valor);
void liberar_lista(No** H);