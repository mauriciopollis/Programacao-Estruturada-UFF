/* Interface lista encadeada dinâmicamente com nó cabeça */

typedef struct no Lista;

/* Cria uma lista com nó cabeça vazia */
Lista *lstnc_cria();

/* Insere um elemento na lista de forma a sempre mantê-la ordenada*/
void *lstnc_insere_ordenado(Lista **l, char *fruta);

/* Imprime a lista */
void lstnc_imprime(Lista *l);

/* Busca elemento na lista. pre guarda o endereço do nó anterior ao do elemento*/
int lstnc_busca(Lista *l, char *fruta, Lista **pre);

/* Remove elemento da lista */
void lstnc_remove(Lista **l, char *fruta);

/* Retorna a quantidade de nós da lista de forma recursiva*/
int lstnc_conta_nos_recursiva(Lista *l);