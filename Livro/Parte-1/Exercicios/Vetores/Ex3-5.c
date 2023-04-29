/*
Implemente uma função que calcule a derivada de um polinômio. Cada polinômio é representado como exemplificado no exercício anterior. A 
função deve obedecer ao protótipo:

void deriva(double *poli, int grau, double *out);

onde out é o vetor, de dimensão grau-1, no qual a função deve guardar os coeficientes do polinômio resultante da derivada.
*/

#include<stdio.h>
#include<stdlib.h>

void deriva(double *poli, int grau, double *out) {

    for(int i=0; i<grau; i++) {
        out[i] = (i+1)*poli[i+1];
    }
}

int main() {

    int grau;
    double *coeficientesEntrada, *coeficientesDerivada;
    
    printf("Insira o grau do polinômio: ");
    scanf("%d", &grau);

    coeficientesEntrada = (double*)malloc((grau+1)*sizeof(double));
    coeficientesDerivada = (double*)malloc((grau)*sizeof(double));

    for(int i=0; i<=grau; i++) {
        printf("Insira o coeficiente de ordem %d do polinômio: ", i);
        scanf("%lf", &coeficientesEntrada[i]);
    }

    deriva(coeficientesEntrada, grau, coeficientesDerivada);

    printf("Os coeficientes da derivada desse polinômio são: \n");
    for(int i=0; i<grau; i++) {
        printf("Coeficiente de ordem %d: %lf\n", i, coeficientesDerivada[i]);
    }

    return 0;
}