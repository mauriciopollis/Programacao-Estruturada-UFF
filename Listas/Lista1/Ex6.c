/*
Faça um programa que leia um valor inteiro e que informe se este valor é par ou impar.
*/

#include<stdio.h>

int main(void) {

    int valor;

    printf("Digite um valor inteiro: ");
    scanf("%d", &valor);

    if(valor%2 == 0) {
        printf("%d é par", valor);
    }
    else {
        printf("%d é ímpar", valor);
    }
    return 0;
}