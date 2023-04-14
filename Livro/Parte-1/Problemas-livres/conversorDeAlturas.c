#include<stdio.h>

int main(void) {

    float CENTIMETROS_EM_UM_PE = 30.48;
    float CENTIMETROS_EM_UMA_POLEGADA = 2.54;

    float alturaMetros, alturaPolegadas;
    int alturaPes, alturaCentimetros;

    printf("Insira a altura em metros: ");
    scanf("%f", &alturaMetros);

    alturaCentimetros = alturaMetros * 100;

    alturaPes = (int) (alturaCentimetros) / CENTIMETROS_EM_UM_PE;
    alturaPolegadas = (alturaCentimetros - (CENTIMETROS_EM_UM_PE * alturaPes)) / CENTIMETROS_EM_UMA_POLEGADA;

    printf("%dft %.1fpol", alturaPes, alturaPolegadas);

    return 0;
}