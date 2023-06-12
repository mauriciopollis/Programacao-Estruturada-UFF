#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"

struct pilha {
    int info;
    struct pilha *prox;
};

Pilha* pilha_criar(void) {
    return NULL;
}

void pilha_imprimir(Pilha *p) {
    Pilha *no = p;
    while(no != NULL) {
        printf("%d ", no->info);
        no = no->prox;
    }
    printf("\n");
}

Pilha* pilha_inserir(Pilha *p, int elem) {
    Pilha *novo = (Pilha *) malloc(sizeof(Pilha));
    novo->info = elem;
    novo->prox = p;
    return novo;
}

Pilha* pilha_remover(Pilha *p) {
    Pilha *no;
    if(p != NULL) {
        no = p;
        p = p->prox;
        free(no);
    }
    return p;
}

int pilha_vazia(Pilha *p) {
    if(p == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}