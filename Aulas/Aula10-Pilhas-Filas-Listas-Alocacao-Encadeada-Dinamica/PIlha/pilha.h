/* Interface de Pilha com alocação encadeada dinâmica*/

typedef struct pilha Pilha;

/*
Retorna uma pilha vazia
*/
Pilha* pilha_criar(void);

/*
Imprime a pilha
*/
void pilha_imprimir(Pilha *p);

/*
Retorna a pilha com elem inserido no topo
*/
Pilha* pilha_inserir(Pilha *p, int elem);

/*
Retorna o elemento do topo da pilha e o retira da pilha
*/
Pilha* pilha_remover(Pilha *p);

/*
Retorna 1 se a pilha estiver vazia e 0 caso contrário
*/

int pilha_vazia(Pilha *p);