/*
Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas vendas. Faça um programa que receba o valor do salário fixo 
do funcionário, o valor das suas vendas e que calcule e mostre o salário final do funcionário.
*/

#include<stdio.h>

int main(void) {

    float salarioFixo, valorVendas, salarioFinal;

    printf("Digite o valor do salário fixo: ");
    scanf("%f", &salarioFixo);
    printf("Digite o valor das vendas: ");
    scanf("%f", &valorVendas);

    salarioFinal = salarioFixo + 0.04*valorVendas;

    printf("O salário final do funcionário é %f", salarioFinal);

    return 0;
}