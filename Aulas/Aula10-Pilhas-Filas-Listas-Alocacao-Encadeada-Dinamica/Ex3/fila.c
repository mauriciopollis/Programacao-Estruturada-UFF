#include<stdlib.h>
#include "fila.h"

struct fila {
    int info;
    struct fila *prox;
};

Fila* fila_cria();

Fila* fila_insere();

Fila* fila_remove();

void fila_imprime();