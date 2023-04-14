/*
Faça um programa que leia o número de eleitores de um município, o número de votos brancos,nulos e validos. Calcule e escreva o 
percentual que cada um representa em relação ao total de eleitores.
*/

#include<stdio.h>

int main(void) {

    int numeroEleitores, votosBrancos, votosNulos, votosValidos, ausentes, totalVotos;
    float percentualBrancos, percentualNulos, percentualValidos, percentualAusentes;

    printf("Digite o número de eleitores: ");
    scanf("%d", &numeroEleitores);
    printf("Digite o número de votos brancos: ");
    scanf("%d", &votosBrancos);
    printf("Digite o número de votos nulos: ");
    scanf("%d", &votosNulos);
    printf("Digite o número de votos válidos: ");
    scanf("%d", &votosValidos);

    totalVotos = votosBrancos + votosNulos + votosValidos;
    ausentes = numeroEleitores - totalVotos;


    percentualBrancos = (float)votosBrancos/totalVotos;
    percentualNulos = (float)votosNulos/totalVotos;
    percentualValidos = (float)votosValidos/totalVotos;
    percentualAusentes = (float)ausentes/numeroEleitores;

    if(totalVotos > numeroEleitores) {
        printf("AS URNAS SÃO FRAUDADAS, TAOKEI?");
    }
    else {
        printf("Percentual de votos brancos: %f\n", percentualBrancos);
        printf("Percentual de votos nulos: %f\n", percentualNulos);
        printf("Percentual de votos válidos: %f\n", percentualValidos);
        printf("Percentual de votantes ausentes: %f", percentualAusentes);
    }

    return 0;
}