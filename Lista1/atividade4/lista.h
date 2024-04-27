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
int verificar_existencia(No* H, char valor_busca);
int verificar_ocorrencias(No* H, char valor_busca);
void imprimir_inversa(No* H);
void lista_inserir_no_i(No** L, int i, char valor);
void lista_remover_no_i(No** H, int i);
void lista_remover_no(No** H, char valor_busca);''