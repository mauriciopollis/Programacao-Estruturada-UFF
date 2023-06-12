/* Interface lista encadeada dinâmicamente */

typedef struct lista Lista;

/*
Cria uma lista encadeada vazia
*/
Lista* criaLista();

/*
Busca um elemento na lista. Retorna 1 se o elemento está na lista e 0 caso contrário
*/
int buscaElemento(Lista *l, int elem); 

/*
Insere o elemento na lista de forma ordenada
*/
Lista* insereElemento(Lista *l, int elem);

/*
Imprime a lista
*/
void imprimeLista(Lista *l);