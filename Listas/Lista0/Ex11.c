/*
Faça um programa que leia o salário de um funcionário e o salário mínimo vigente. Calcular e escrever quantos salários mínimos ganha 
o funcionário.
*/

#include<stdio.h>

int main(void) {

    float salarioFuncionario, salarioMinimo;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &salarioFuncionario);
    printf("Digite o salário mínimo: ");
    scanf("%f", &salarioMinimo);

    printf("O funcionário ganha o equivalente a %f salários mínimos", salarioFuncionario/salarioMinimo);

    return 0;
}