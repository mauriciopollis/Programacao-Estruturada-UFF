/*
O presidente de um país sul-americano quer investir em saúde, educação, habitação, segurança e previdência, que são as cinco metas de 
seu governo. Assim, o presidente decide criar mais um imposto, o ISSS (Imposto Sobre Seu Saldo), que é calculado sobre o saldo médio da 
conta-corrente, segundo a tabela abaixo:
    • Saldo < 100: isento
    • 100 ≤ Saldo < 1000: imposto devido é 1% sobre o saldo
    • 1000 ≤ Saldo < 10000: imposto devido é de 2% sobre o saldo
    • 10000 ≤ Saldo < 100000: imposto devido é de 3% sobre o saldo
    • Saldo ≥ 100000: imposto devido é de 5% sobre o saldo
Faça um programa que permita ao usuário informar seu saldo bancário e que escreva o ISSS devido.
*/

#include<stdio.h>

int main(void) {

    float saldoBancario, impostoDevido;

    printf("Digite o saldo bancário: ");
    scanf("%f", &saldoBancario);

    if(saldoBancario<100) {
        impostoDevido = 0;
    }
    else {
        if(saldoBancario<1000) {
            impostoDevido = 0.01*saldoBancario;
        }
        else {
            if(saldoBancario<10000) {
                impostoDevido = 0.02*saldoBancario;
            }
            else {
                if(saldoBancario<100000) {
                    impostoDevido = 0.03*saldoBancario;
                }
                else {
                    impostoDevido = 0.05*saldoBancario;
                }
            }
        }
    }

    printf("O imposto devido é %.2f reais", impostoDevido);

    return 0;
}