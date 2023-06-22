#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lista_no_cabeca.h"

struct no {
    char fruta[50];
    struct no *prox;
};

Lista *lstnc_cria() {
    Lista *lista_vazia;
    lista_vazia = (Lista *) malloc(sizeof(Lista));
    lista_vazia->prox = NULL;
    return lista_vazia;
}

void *lstnc_insere_ordenado(Lista **l, char *fruta) {
    Lista *pre;
    Lista *no;
    int existe;
    existe = lstnc_busca(*l, fruta, &pre);
    if(!existe) {
        no = (Lista *) malloc(sizeof(Lista));
        strcpy(no->fruta, fruta);
        no->prox = pre->prox;
        pre->prox = no;
    }
}

void lstnc_imprime(Lista *l) {
    Lista *no = l->prox;
    while(no != NULL) {
        printf("Fruta: %s\n", no->fruta);
        no = no->prox;
    }
}

int lstnc_busca(Lista *l, char *fruta, Lista **pre) {
    Lista *no = l->prox;
    *pre = l;
    while(no != NULL && strcmp(no->fruta, fruta) < 0) {
        no = no->prox;
        *pre = (*pre)->prox;
    }

    if(no == NULL || strcmp(no->fruta, fruta) != 0) {
        return 0;
    }
    else {
        return 1;
    }
}

void lstnc_remove(Lista **l, char *fruta) {
    Lista *pre;
    Lista *lixo;
    int existe;
    existe = lstnc_busca(*l, fruta, &pre);
    if(existe) {
        lixo = pre->prox;
        pre->prox = lixo->prox;
        free(lixo);
    }
}

int lstnc_conta_nos_recursiva(Lista *l) {
    if(l->prox == NULL) {
        return 1;
    }
    else {
        return (1 + lstnc_conta_nos_recursiva(l->prox));
    }
}