#include<math.h>
#include<stdlib.h>
#include "circulo.h"

#define PI 3.1415

struct circulo {
    Ponto *p;
    float raio;
};

Circulo* cria_circulo(float x, float y, float raio) {
    Circulo *c = (Circulo *) malloc(sizeof(Circulo));
    Ponto *ponto;
    c->raio = raio;
    ponto = cria_ponto(x, y);
    c->p = ponto;
    return c;
}

float area_circulo(Circulo *c) {
    float area;
    area = PI * c->raio * c->raio;
    return area;
}

int interior_circulo(Circulo *c, Ponto *p) {
    float dist, p_x, p_y, c_x, c_y;
    acessa_ponto(p, &p_x, &p_y);
    acessa_ponto(c->p, &c_x, &c_y);
    dist = sqrt((p_x - c_x)*(p_x - c_x) + (p_y - c_y)*(p_y - c_y));
    if(dist > c->raio) {
        return 0;
    }
    else {
        return 1;
    }

}