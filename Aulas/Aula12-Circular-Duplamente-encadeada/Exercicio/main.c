/*
Considere duas listas encadeadas L1 e L2, onde cada nó da lista possui duas partes: dado e prox. Para cada item abaixo, 
faça uma função que receba as duas listas como parâmetros e as concatene de acordo com as características especificadas.
Para concatenar L1 com L2 basta juntar o final de L1 com o começo de L2, formando uma única lista com endereço inicial em L1.
a) L1 e L2 são simplesmente encadeadas, não circulares e sem nós cabeça
b) L1 e L2 são simplesmente encadeadas, circulares e sem nós cabeça à NÃO
c) L1 e L2 são simplesmente encadeadas, circulares e com nós cabeça
d) L1 e L2 são simplesmente encadeadas, não circulares e com nós cabeça
e) L1 e L2 são duplamente encadeadas, circulares e com nós cabeça
*/

#include<stdlib.h>

struct no {
    int dado;
    struct no *prox;
};
typedef struct no Lista;

struct no2 {
    int dado;
    struct no2 *prox;
    struct no2 *ant;
};
typedef struct no2 Lista2;

// a) L1 e L2 são simplesmente encadeadas, não circulares e sem nós cabeça
Lista *concatena_a(Lista *l1, Lista *l2) {
    Lista *no;
    if(l1 == NULL) {
        l1->prox = l2;
    }
    else {
        for(no = l1; no->prox != NULL; no = no->prox) {

        }
        no->prox = l2;
    }
    return l1;
}

// b) L1 e L2 são simplesmente encadeadas, circulares e sem nós cabeça
Lista *concatena_b(Lista *l1, Lista *l2) {
    Lista *ultimo_no_l1;
    Lista *ultimo_no_l2;
    if(l1 != NULL || l2 != NULL) {
        for(ultimo_no_l1 = l1; ultimo_no_l1->prox != l1; ultimo_no_l1 = ultimo_no_l1->prox) {

        }
        ultimo_no_l1->prox = l2;
        for(ultimo_no_l2 = l2; ultimo_no_l2->prox != l2; ultimo_no_l2 = ultimo_no_l2->prox) {

        }
        ultimo_no_l2->prox = l1;
        return l1;
    }
    else {
        if(l2 != NULL) {
            return l2;
        }
        else {
            return l1;
        }
    }
}

// c) L1 e L2 são simplesmente encadeadas, circulares e com nós cabeça
Lista *concatena_c(Lista *l1, Lista *l2) {
    Lista *ultimo_no_l1;
    Lista *ultimo_no_l2;
    Lista *segundo_no_l2;
    Lista *lixo = l2;
    segundo_no_l2 = l2->prox;
    if(segundo_no_l2 != l2) {
        for(ultimo_no_l1 = l1; ultimo_no_l1->prox != l1; ultimo_no_l1 = ultimo_no_l1->prox) {

        }
        ultimo_no_l1->prox = segundo_no_l2;
        for(ultimo_no_l2 = l2; ultimo_no_l2->prox != l2; ultimo_no_l2 = ultimo_no_l2->prox) {

        }
        ultimo_no_l2->prox = l1;
        free(lixo);
        return l1;
    }
    else {
        return l1;
    }

}

// d) L1 e L2 são simplesmente encadeadas, não circulares e com nós cabeça
Lista *concatena_d(Lista *l1, Lista *l2) {
    Lista *ultimo_no_l1;
    Lista *segundo_no_l2;
    Lista *lixo;
    lixo = l2;
    segundo_no_l2 = l2->prox;
    if(segundo_no_l2 != NULL) {
        for(ultimo_no_l1 = l1; ultimo_no_l1->prox != NULL; ultimo_no_l1 = ultimo_no_l1->prox) {

        }
        ultimo_no_l1->prox = segundo_no_l2;
        free(lixo);
        return l1;
    }
    else {
        return l1;
    }
}

// e) L1 e L2 são duplamente encadeadas, circulares e com nós cabeça
Lista2 *concatena_e(Lista2 *l1, Lista2 *l2) {
    Lista2 *ultimo_no_l1;
    Lista2 *ultimo_no_l2;
    Lista2 *segundo_no_l2;
    Lista2 *lixo;
    lixo = l2;
    ultimo_no_l1 = l1->ant;
    ultimo_no_l2 = l2->ant;
    segundo_no_l2 = l2->prox;
    if(segundo_no_l2 != l2) {
        ultimo_no_l2->prox = l1;
        l1->ant = ultimo_no_l2;
        ultimo_no_l1->prox = segundo_no_l2;
        segundo_no_l2->ant = ultimo_no_l1;
        free(lixo);
        return l1;
    }
    else {
        return l1;
    }
}