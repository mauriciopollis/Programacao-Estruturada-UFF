#include<stdlib.h>
#include "pilha.h"

struct pilha {
    int info;
    struct pilha *prox;
};

Pilha* pilha_cria();

Pilha* pilha_push(Pilha *p, int elem);

Pilha* pilha_pop(Pilha *p);

void pilha_imprime(Pilha *p);