/*
Faça um programa que calcule o valor total que um edifício garagem arrecadou em um dia de operação, no qual 200 carros utilizaram o estacionamento. 
O algoritmo deve ler o horário de entrada (hora e minuto) assim como o de saída. Sabe-se que o valor mínimo cobrado é de 4 reais por 
um período 2 horas. A partir daí, cobra-se 1 real por hora adicional.
*/

#include<stdio.h>

#define N 200
#define MINUTOS_EM_UMA_HORA 60

int diff_em_minutos(int he, int me, int hs, int ms) {
    
    int diferenca;

    diferenca = (ms-me) + MINUTOS_EM_UMA_HORA * (hs-he);

    return diferenca;
}

int valor_a_pagar(int delta) {
    
    int base = 4;

    if(delta<=0) {
        return 0;
    }
    else {
        if(delta<=2*MINUTOS_EM_UMA_HORA) {
            return base;
        }
        else {
            return base + (delta - 2*MINUTOS_EM_UMA_HORA)/MINUTOS_EM_UMA_HORA + 1;
        }
    }
}

int main() {

    int hora_entrada, minuto_entrada, hora_saida, minuto_saida, valor_total = 0;
    int diferenca_em_minutos;

    for(int i=1; i<=N; i++) {
        printf("Digite o horário de entrada (hh mm):");
        scanf("%d %d", &hora_entrada, &minuto_entrada);
        printf("Digite o horário de saída (hh mm):");
        scanf("%d %d", &hora_saida, &minuto_saida);

        diferenca_em_minutos = diff_em_minutos(hora_entrada, minuto_entrada, hora_saida, minuto_saida);

        valor_total += valor_a_pagar(diferenca_em_minutos);
    }

    printf("Total arrecadado: %d", valor_total);

    return 0;
}