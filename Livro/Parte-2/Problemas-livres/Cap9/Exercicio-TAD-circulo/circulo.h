#include "ponto.h"

typedef struct circulo Circulo;

Circulo* cria_circulo(float x, float y, float raio);

float area_circulo(Circulo *c);

int interior_circulo(Circulo *c, Ponto *p);