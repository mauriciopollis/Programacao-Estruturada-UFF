#include<stdio.h>
#include<stdlib.h>

#include "lista_encadeada.h"

struct lista {
    int info;
    struct lista *prox;
};

Lista* lst_enc_cria(void) {
    return NULL;
}

Lista* lst_enc_insere_inicio(Lista *l, int elem) {
    Lista *novo = (Lista *) malloc(sizeof(Lista));
    novo->info = elem;
    novo->prox = l;
    return novo;
}

void lst_enc_imprime(Lista *l) {
    Lista *no;
    no = l;
    if(no == NULL) {
        printf("A lista está vazia\n");
    }
    else {
        while(no != NULL) {
            printf("%d ", no->info);
            no = no->prox;
        }
    }
    printf("\n");
}

int lst_enc_vazia(Lista *l) {
    if(l == NULL) {
        return 1;
    }
    else {
        return 0;
    }
}

Lista* lst_enc_busca(Lista *l, int elem) {
    Lista *no;
    for(no = l; no != NULL; no = no->prox) {
        if(no->info == elem) {
            return no;
        }
    }
    return NULL;
}

Lista* lst_enc_retira(Lista *l, int elem) {
    Lista *anterior = NULL;
    Lista *no = l;
    while((no != NULL) && (no->info != elem)) {
        anterior = no;
        no = no->prox;
    }
    
    // não achou o elemento
    if(no == NULL) {
        return l;
    }

    // achou o elemento no início da lista
    if(anterior == NULL) {
        // faz com que o primeiro nó aponte para o antigo segundo nó
        l->prox = no->prox;
    }
    // achou o elemento no meio da lista
    else {
        // 'pula' o nó com o elemento que deve ser removido
        anterior->prox = no->prox;
    }
    free(no);
    return l;
}

void lst_enc_libera(Lista *l) {
    Lista *no = l; 
    while(no != NULL) {
        Lista *prox = no->prox;
        free(no);
        no = prox;
    }
}