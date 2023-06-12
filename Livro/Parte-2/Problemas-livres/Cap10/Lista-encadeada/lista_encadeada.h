/*Interface do TAD lista encadeada*/

typedef struct lista Lista;

/*
Retorna uma lista encadeada vazia
*/
Lista* lst_enc_cria(void);

/*
Insere o elemento no início da lista. Retorna a nova lista
*/
Lista* lst_enc_insere_inicio(Lista *l, int elem);

/*
Imprime a lista
*/
void lst_enc_imprime(Lista *l);

/*
Retorna 1 se a lista estiver vazia, e 0 caso contrário
*/
int lst_enc_vazia(Lista *l);

/*
Busca um elemento na lista. Retorna o nó que contém o elemento buscado. Se o elemento 
não estiver na lista, retorna NULL
*/
Lista* lst_enc_busca(Lista *l, int elem);

/*
Retira um elemento da lista. Retorna a nova lista resultante
*/
Lista* lst_enc_retira(Lista *l, int elem);

/*
Libera a memória ocupada pela lista
*/
void lst_enc_libera(Lista *l);