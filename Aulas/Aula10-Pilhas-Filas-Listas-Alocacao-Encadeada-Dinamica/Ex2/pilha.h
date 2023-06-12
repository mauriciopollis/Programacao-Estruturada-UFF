/* Interface pilha encadeada dinâmicamente */

typedef struct pilha Pilha;

/*
Cria uma pilha vazia
*/
Pilha* pilha_cria();

/*
Insere um elemento no topo da pilha
*/
Pilha* pilha_push(Pilha *p, int elem);

/*
Remove um elemento do topo da pilha
*/
Pilha* pilha_pop(Pilha *p);

/*
Imprime a pilha
*/
void pilha_imprime(Pilha *p);