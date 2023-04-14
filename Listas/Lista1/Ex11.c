/*
Uma loja de bicicletas paga a cada vendedor 2 salários mínimos mensais, mais uma comissão de 5% sobre as vendas das bicicletas, dividida 
igualmente entre eles. Escreva um programa que leia o número de empregados da loja, o valor do salário mínimo, o valor das vendas do mês 
e que calcule e escreva: o salário total de cada empregado.
*/

#include<stdio.h>

int main(void) {

    int numeroEmpregados;
    float salarioMinimo, valorVendas, salarioTotal;

    printf("Digite o número de empregados: ");
    scanf("%d", &numeroEmpregados);
    printf("Digite o valor do salário mínimo: ");
    scanf("%f", &salarioMinimo);
    printf("Digite o valor de vendas do mês: ");
    scanf("%f", &valorVendas);

    salarioTotal = 2*salarioMinimo + 0.05*valorVendas/numeroEmpregados;

    printf("Cada empregado receberá %.2f reais", salarioTotal);
    return 0;
}