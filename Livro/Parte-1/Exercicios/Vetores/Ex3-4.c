/*
Implemente uma função que permita a avaliação de polinômios. Cada polinômio é definido por um vetor que contém seus coeficientes. 
Por exemplo, o polinômio de grau 2, 3x²+2x+12, terá um vetor de coeficientes igual a v[]={12, 2, 3}. A função deve obedecer ao protótipo:

double avalia(double *poli, int grau, double x);

onde o parâmetro poli é o vetor com os coeficientes do polinômio, grau é o grau do polinômio, e x é o valor para o qual o polinômio 
deve ser avaliado.
*/

#include<stdio.h>
#include<stdlib.h>

double potencia(double base, int expoente) {

    double resultado = 1;

    for(int i=1; i<=expoente; i++) {
        resultado *= base;
    }

    return resultado;
}

double avalia(double *poli, int grau, double x) {

    double resultado = 0;

    for(int i=grau; i>=0; i--) {
        resultado += poli[i]*potencia(x, i);
    }

    return resultado;
}

int main() {

    int grau;
    double *coeficientes;
    double x;

    printf("Insira o grau do polinômio a ser avaliado: ");
    scanf("%d", &grau);

    coeficientes = (double*)malloc((grau+1)*sizeof(double));

    for(int i=0; i<=grau; i++) {
        printf("Insira a componente %d do vetor de componentes: ", i);
        scanf("%lf", &coeficientes[i]);
    }

    printf("Insira o valor no qual o polinômio deve ser avaliado: ");
    scanf("%lf", &x);

    printf("O polinômio avaliado em %lf é %lf", x, avalia(coeficientes, grau, x));

    return 0;
}