#include<math.h>
#include<stdlib.h>
#include "ponto.h"

struct ponto2d {
    float x;
    float y;
};

float distancia_entre_pontos_2d(Ponto2D *p1, Ponto2D *p2) {
    float distancia;
    distancia = sqrt(pow((p1->x - p2->x), 2) + pow((p1->y - p2->y), 2));
    return distancia;
}

float distancia_ate_origem(Ponto2D *p) {
    float distancia;

    distancia = sqrt(pow(p->x, 2) + pow(p->y, 2));
    return distancia;
}

Ponto2D* cria_ponto(float x, float y) {
    Ponto2D *p = (Ponto2D *) malloc(sizeof(Ponto2D));
    p->x = x;
    p->y = y;
    return p;
}