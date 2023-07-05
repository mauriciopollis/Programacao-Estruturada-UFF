/*
Faça uma função que receba uma pilha P como parâmetro e que escreva todos os seus elementos. Considere uma pilha de números inteiros. 
Considere alocação encadeada dinâmica.
*/

#include<stdio.h>
#include<stdlib.h>

struct no {
    int info;
    struct no *prox;
};
typedef struct no Pilha;

int pop(Pilha **p) {
    Pilha *lixo = *p;
    int elem;
    if(*p != NULL) {
        elem = (*p)->info;
        *p = (*p)->prox;
        free(lixo);
    }
    return elem;
}

void put(Pilha **p, int elem) {
    Pilha *novoNo = (Pilha *) malloc(sizeof(Pilha));
    novoNo->info = elem;
    novoNo->prox = *p;
    (*p) = novoNo;
}

void imprime(Pilha *p) {
    while(p != NULL) {
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}

int main(void) {
    Pilha *pilha = NULL;
    int num = 1;
    while(num > 0) {
        printf("Numero: ");
        scanf("%d", &num);
        put(&pilha, num);
    }
    imprime(pilha);
    while(pilha != NULL) {
        num = pop(&pilha);
        printf("%d ", num);
    }
    return 0;
}