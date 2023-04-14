/*
Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação dos dois números e a divisão e a 
subtração do primeiro pelo segundo.
*/

#include<stdio.h>

int main(void) {

    int numero1, numero2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo número inteiro: ");
    scanf("%d", &numero2);

    printf("%d + %d = %d\n", numero1, numero2, numero1+numero2);
    printf("%d * %d = %d\n", numero1, numero2, numero1*numero2);
    printf("%d / %d = %d\n", numero1, numero2, numero1/numero2);
    printf("%d - %d = %d", numero1, numero2, numero1-numero2);

    return 0;
}