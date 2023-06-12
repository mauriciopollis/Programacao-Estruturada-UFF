#include<stdio.h>
#include<stdlib.h>
#include "fila.h"

struct fila {
    int info;
    struct fila *prox;
};

Fila* fila_criar(void) {
    return NULL;
}

Fila* fila_insere(Fila *f, int elem) {
    Fila *no = f;
    Fila *penultimo = NULL;
    Fila *ultimo;
    ultimo = (Fila *) malloc(sizeof(Fila));
    ultimo->info = elem;
    while(no != NULL) {
        penultimo = no;
        no = no->prox;
    }
    if(penultimo == NULL) {
        ultimo->prox = no;
        return ultimo;
    }
    else {
        ultimo->prox = no;
        penultimo->prox = ultimo;
        return f;
    }
}

Fila* fila_remove(Fila *f) {
    Fila* primeiro;
    if(f != NULL) {
        primeiro = f;
        f = f->prox;
        free(primeiro);
        return f;
    }
}

void fila_imprime(Fila *f) {
    Fila *no = f;
    while(no != NULL) {
        printf("%d ", no->info);
        no = no->prox;
    }
    printf("\n");
}