/*
Faça um programa que leia dois números inteiros e que calcule e mostre a soma e a multiplicação dos dois números e a divisão e a 
subtração do primeiro pelo segundo. Caso o segundo número digitado seja zero, o programa deve informar ao usuário que a operação de 
divisão é impossível.
*/

#include<stdio.h>

int main(void) {

    int numero1, numero2, soma, subtracao, multiplicacao;
    float divisao;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &numero1);
    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &numero2);

    soma = numero1 + numero2;
    subtracao = numero1 - numero2;
    multiplicacao = numero1 * numero2;

    if(numero2 == 0) {
        printf("%d + %d = %d\n", numero1, numero2, soma);
        printf("%d - %d = %d\n", numero1, numero2, subtracao);
        printf("%d * %d = %d\n", numero1, numero2, multiplicacao);
        printf("Não é possível dividir por zero");
    }
    else {
        divisao = ((float)numero1 / numero2);
        printf("%d + %d = %d\n", numero1, numero2, soma);
        printf("%d - %d = %d\n", numero1, numero2, subtracao);
        printf("%d * %d = %d\n", numero1, numero2, multiplicacao);
        printf("%d / %d = %f\n", numero1, numero2, divisao);
    }

    return 0;
}