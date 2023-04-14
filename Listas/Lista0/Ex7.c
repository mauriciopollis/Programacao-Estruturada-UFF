/*
 Faça um programa que leia três notas e que calcule e escreva a média aritmética dessas notas.
*/

#include<stdio.h>

int main(void) {

    float nota1, nota2, nota3, media;

    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    media = (nota1+nota2+nota3)/3;

    printf("A média das notas é %f", media);

    return 0;
}