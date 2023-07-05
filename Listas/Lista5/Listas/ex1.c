/*
Faça uma função recursiva que retorne o número de nós contidos em uma lista L. Considere que L é simplesmente encadeada, sem nó cabeça e 
não circular. Os elementos de L não estão necessariamente em ordem.
*/

#include<stdio.h>
#include<stdlib.h>

struct no {
    int info;
    struct no *prox;
};
typedef struct no Lista;

int quantidade_nos(Lista *lista) {
    if(lista == NULL) {
        return 0;
    }
    else {
        return (quantidade_nos(lista->prox) + 1);
    }
}

int main(void) {
    Lista *lista = NULL;
    lista = (Lista *) malloc(sizeof(Lista));
    lista->info = 1;
    lista->prox = NULL;
    printf("%d", quantidade_nos(lista));
    return 0;
}