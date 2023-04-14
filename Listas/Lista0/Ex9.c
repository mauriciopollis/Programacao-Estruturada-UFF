/*
Faça um programa que leia o salário de um funcionário e que calcule e escreva o salário com um desconto de 10%.
*/

#include<stdio.h>

int main(void) {

    float salario;

    printf("Digite o salario: ");
    scanf("%f", &salario);

    printf("O salário com desconto de 10% é %f", 0.9*salario);

    return 0;
}