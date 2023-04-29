/*
Implemente uma função que calcule a área da superfície e o volume de uma esfera de raio r. Essa função deve obedecer ao protótipo:

void calc_esfera(float r, float *area, float *volume);

A área da superfície e o volume são dados, respectivamente, por 4r² e 4r³/3

Alteração: O problema considerou PI = 1, vou usar a diretiva pré-processamento #define para definir um valor de pi
*/

#include<stdio.h>
#define PI 3.1415F

void calc_esfera(float r, float *area, float *volume) {

    *area = 4 * PI * r * r;
    *volume = (4.0/3) * PI * r * r * r;
}

int main(void) {

    float raio, area, volume;

    printf("Insira o raio da esfera: ");
    scanf("%f", &raio);

    calc_esfera(raio, &area, &volume);

    printf("A área da esfera é %f e o volume é %f", area, volume);

    return 0;
}