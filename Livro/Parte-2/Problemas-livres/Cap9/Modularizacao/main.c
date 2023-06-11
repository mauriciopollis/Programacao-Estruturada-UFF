#include<stdio.h>
#include "ponto.h"

int main(void) {

    Ponto2D *ponto1, *ponto2;

    float dist, dist_origem1, dist_origem2, x, y;
    char sair;

    printf("Coordenadas do primeiro ponto: ");
    scanf("%f %f", &x, &y);
    ponto1 = cria_ponto(x, y);

    printf("Coordenadas do segundo ponto: ");
    scanf("%f %f", &x, &y);
    ponto2 = cria_ponto(x, y);
    
    dist = distancia_entre_pontos_2d(ponto1, ponto2);
    dist_origem1 = distancia_ate_origem(ponto1);
    dist_origem2 = distancia_ate_origem(ponto2);

    printf("Distancia: %f\n", dist);
    printf("Distancia de p1 ate a origem: %f\n", dist_origem1);
    printf("Distancia de p2 ate a origem: %f\n", dist_origem2);

    printf("Pressione qualquer tecla para sair\n");
    scanf(" %c", sair);

    return 0;
}