/* Interface lista encadeada dinâmicamente com nó cabeça */

typedef struct no Lista;

/* Cria uma lista com nó cabeça vazia */
Lista *lstnc_cria();

/* Insere um elemento na lista de forma a sempre mantê-la ordenada*/
void *lstnc_insere_ordenado(Lista **l, char *fruta);

/* Imprime a lista */
void lstnc_imprime(Lista *l);

/* Busca elemento na lista. Se o elemento não for achado, pre guarda o endereço do nó anterior ao nó que deve conter o novo elemento*/
int lstnc_busca(Lista *l, char *fruta, Lista **pre);