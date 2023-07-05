/*
Faça uma função recursiva que escreva se um determinado elemento pertence ou não a uma lista. Considere que L é simplesmente encadeada, sem 
nó cabeça e não circular.
*/

#include<stdio.h>
#include<stdlib.h>

struct no {
    int info;
    struct no *prox;
};
typedef struct no Lista;

int busca_recursiva(Lista *l, int elem) {
    if(l == NULL) {
        return 0;
    }
    else {
        if(l->info == elem) {
            return 1;
        }
        busca_recursiva(l->prox, elem);
    }
}

int busca(Lista *l, int elem, Lista **pre) {
    Lista *no = l;
    *pre = NULL;
    while(no != NULL && no->info < elem) {
        *pre = no;
        no = no->prox;
    }
    if(no != NULL && no->info == elem) {
        return 1;
    }
    else {
        return 0;
    }
}

void insere_lista(Lista **l, int elem) {
    Lista *pre;
    int existe;
    existe = busca(*l, elem, &pre);
    if(!existe) {
        Lista *novoNo = (Lista *) malloc(sizeof(Lista));
        novoNo->info = elem;
        if(pre == NULL || *l == NULL) {
            novoNo->prox = *l;
            *l = novoNo;
        }
        else {
            novoNo->prox = pre->prox;
            pre->prox = novoNo;
        }
    }
}

void imprime_lista(Lista *l) {
    while(l != NULL) {
        printf("%d ", l->info);
        l = l->prox;
    }
}

int main(void) {
    Lista *lista = NULL;
    int elem;
    int busca;
    int continua = 1;

    while(continua) {
        printf("Elemento a ser inserido: ");
        scanf("%d", &elem);
        insere_lista(&lista, elem);
        printf("Continua? ");
        scanf("%d", &continua);
    }

    imprime_lista(lista);

    printf("Elemento a ser buscado: ");
    scanf("%d", &busca);

    if(busca_recursiva(lista, busca)) {
        printf("Existe\n");
    }
    else {
        printf("Não existe\n");
    }
    return 0;
}