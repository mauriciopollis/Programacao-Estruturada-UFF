/*
Faça um programa que leia três notas de um aluno com os seus respectivos pesos e que calcule e escreva a média ponderada dessas notas.
*/

#include<stdio.h>

int main(void) {

    float nota1, nota2, nota3, peso1, peso2, peso3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite o peso da primeira nota: ");
    scanf("%f", &peso1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite o peso da segunda nota: ");
    scanf("%f", &peso2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    printf("Digite o peso da terceira nota: ");
    scanf("%f", &peso3);

    media = (nota1*peso1 + nota2*peso2 + nota3*peso3)/(peso1+peso2+peso3);

    printf("A média ponderada das notas é %f", media);

    return 0;
}