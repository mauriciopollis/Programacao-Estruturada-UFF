/*
Faça um programa que leia uma hora (uma variável para hora e outra para minutos) e que calcule e mostre a hora convertida em 
minutos e em segundos.
*/

#include<stdio.h>

int main(void) {

    int horasInput, minutosInput, minutosOutput, segundosOutput, totalSegundos;

    printf("Digite a hora: ");
    scanf("%d", &horasInput);
    printf("Digite os minutos: ");
    scanf("%d", &minutosInput);

    totalSegundos = horasInput*3600 + minutosInput*60;

    minutosOutput = totalSegundos/60;
    segundosOutput = totalSegundos%60;

    printf("%d horas e %d minutos equivalem a %d minutos e %d segundos", horasInput, minutosInput, minutosOutput, segundosOutput);

    return 0;
}