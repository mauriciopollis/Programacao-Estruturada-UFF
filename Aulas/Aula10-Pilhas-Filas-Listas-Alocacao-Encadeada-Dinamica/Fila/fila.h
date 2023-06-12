/* Interface de fila com alocação encadeada dinâmica */

typedef struct fila Fila;

/*
Cria uma fila vazia
*/
Fila* fila_criar(void);

/*
Insere um elemento no final da fila
*/
Fila* fila_insere(Fila *f, int elem);

/*
Remove um elemento do início da fila
*/
Fila* fila_remove(Fila *f);

/*
Imprime a fila
*/
void fila_imprime(Fila *f);
