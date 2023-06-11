#include<stdio.h>
#include "ponto.h"
#include "circulo.h"

int main(void) {

    Circulo *circulo;
    Ponto *ponto;
    float c_x, c_y, raio, p_x, p_y;
    int dentro;

    printf("Digite as coordenadas do centro da circunferência: ");
    scanf("%f %f", &c_x, &c_y);
    printf("Digite o raio da circunferência: ");
    scanf("%f", &raio);
    circulo = cria_circulo(c_x, c_y, raio);

    printf("Digite as coordenadas do ponto: ");
    scanf("%f %f", &p_x, &p_y);
    ponto = cria_ponto(p_x, p_y);

    dentro = interior_circulo(circulo, ponto);

    if(dentro) {
        printf("O ponto está dentro da circunferência\n");
    }
    else {
        printf("O ponto não está no interior da circunferência\n");
    }

    return 0;
}