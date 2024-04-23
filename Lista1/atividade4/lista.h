typedef struct No{
    char valor;
    struct No* proximo_no;
} No;

No* no(char valor, No* proximo_no); 
void inserir_no(No* H, No* no);
void imprimir(No* H);
int qnt_nos(No* H);
No* copiar(No* H);
void liberar(No* H);