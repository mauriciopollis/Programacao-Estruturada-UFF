/*
João recebeu seu salário e precisa pagar duas contas atrasadas. Como as contas estão atrasadas, João deverá pagar uma multa de 2% sobre 
cada uma. Faça um programa que leia o valor do salário de João e das contas que ele deve pagar, e que mostre quanto restará do seu 
salário após o pagamento das contas.
*/

#include<stdio.h>

int main(void) {

    float salario, conta1, conta2, restante;

    printf("Digite o salário de João: ");
    scanf("%f", &salario);
    printf("Digite o valor da primeira conta: ");
    scanf("%f", &conta1);
    printf("Digite o valor da segunda conta: ");
    scanf("%f", &conta2);

    restante = salario - 1.02*(conta1 + conta2);

    printf("Após o pagamento, restarão %f reais", restante);

    return 0;
}