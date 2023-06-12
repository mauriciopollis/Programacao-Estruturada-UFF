#include<stdlib.h>
#include "lista.h"

struct lista {
    int info;
    struct lista *prox;
};

Lista* criaLista();

int buscaElemento(Lista *l); 

Lista* insereElemento(Lista *l, int elem);

void imprimeLista(Lista *l);
