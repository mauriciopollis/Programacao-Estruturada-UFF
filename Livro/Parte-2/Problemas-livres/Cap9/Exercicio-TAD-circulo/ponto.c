#include "ponto.h"
#include<stdlib.h>

struct ponto {
    float x;
    float y;
};

Ponto* cria_ponto(float x, float y) {
    Ponto *p = (Ponto *) malloc(sizeof(Ponto));
    p->x = x;
    p->y = y;
    return p;
}

void acessa_ponto(Ponto *p, float *x, float *y) {
    *x = p->x;
    *y = p->y;
}