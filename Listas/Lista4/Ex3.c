/*
Um funcionário recebe um salário fixo mais 6% de comissão sobre suas vendas. Faça um programa que leia o salário de um funcionário, o valor 
total de suas vendas e apresente o seu salário final. Considere N funcionários (use alocação dinâmica).
*/

#include<stdio.h>
#include<stdlib.h>

struct funcionario {
    float salario_base, vendas, salario_final;
};
typedef struct funcionario Funcionario;

int main() {

    int numero_funcionarios;
    float comissao = 0.06;
    Funcionario *vet_funcionarios;

    printf("Digite o número de funcionários: ");
    scanf("%d", &numero_funcionarios);

    vet_funcionarios = (Funcionario*)malloc(sizeof(Funcionario)*numero_funcionarios);

    for(int i=0; i<numero_funcionarios; i++) {
        printf("Digite o salário base do funcionário %d: ", i+1);
        scanf("%f", &vet_funcionarios[i].salario_base);
        printf("Digite o valor de vendas do funcionário %d: ", i+1);
        scanf("%f", &vet_funcionarios[i].vendas);
        vet_funcionarios[i].salario_final = vet_funcionarios[i].salario_base + comissao*vet_funcionarios[i].vendas;
    }

    for(int i=0; i<numero_funcionarios; i++) {
        printf("Salário final do funcionário %d: %f\n", i+1, vet_funcionarios[i].salario_final);
    }

    return 0;
}