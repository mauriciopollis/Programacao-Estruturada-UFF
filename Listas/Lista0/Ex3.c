/*
 Sabendo que o quilowatt de energia custa um décimo do salário mínimo, faça um programa que leia o valor do salário mínimo e a 
 quantidade de quilowatts gasta por um usuário e calcule e escreva: o valor de um quilowatt e o valor da conta de energia do usuário.
*/

#include<stdio.h>

int main(void) {

    float salarioMinimo, quantidadeQuilowatts, valorQuilowatt, valorConta;

    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite a quantidade de quilowatts consumidos: ");
    scanf("%f", &quantidadeQuilowatts);

    valorQuilowatt = salarioMinimo/10;
    valorConta = valorQuilowatt*quantidadeQuilowatts;

    printf("Valor de um quilowatt: %f\n Valor da conta: %f", valorQuilowatt, valorConta);

    return 0;
}