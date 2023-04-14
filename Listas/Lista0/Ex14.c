/*
Fazer um programa que leia dois números inteiros A e B, e que troque seus valores. Escrever os valores antes e depois da troca.
Exemplo: (Antes)
 A = 5 B = 8
(Depois)
 A = 8 B = 5
*/

#include<stdio.h>

int main(void) {

    int numero1, numero2, temp;

    printf("Insira o primeiro número inteiro: ");
    scanf("%d", &numero1);
    printf("Insira o segundo número inteiro: ");
    scanf("%d", &numero2);

    printf("A = %d B = %d\n", numero1, numero2);

    temp = numero1;
    numero1 = numero2;
    numero2 = temp;

    printf("A = %d B = %d", numero1, numero2);

    return 0;
}