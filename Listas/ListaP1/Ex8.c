/*
Uma empresa que comercializa produtos alimentícios controla seu estoque diariamente. Faça um programa que leia a quantidade de estoque diário 
do mês passado e que calcule a média mensal em estoque. Determine também o maior e menor estoque lidos.
*/

#include<stdio.h>

#define DIAS_EM_UM_MES 30

int main(void) {

    int maior_quantidade, menor_quantidade, estoque;
    float estoque_medio = 0;

    printf("Digite o estoque no dia 1: ");
    scanf("%d", &estoque);

    maior_quantidade = estoque;
    menor_quantidade = estoque;
    estoque_medio += estoque;

    for(int i=2; i<=DIAS_EM_UM_MES; i++) {
        printf("Digite o estoque do dia %d: ", i);
        scanf("%d", &estoque);
        if(estoque>maior_quantidade) {
            maior_quantidade = estoque;
        }
        if(estoque<menor_quantidade) {
            menor_quantidade = estoque;
        }
        estoque_medio += estoque;
    }

    estoque_medio = estoque_medio/DIAS_EM_UM_MES;

    printf("Estoque médio: %f\n", estoque_medio);
    printf("Maior estoque diário: %d\n", maior_quantidade);
    printf("Menor estoque diário: %d\n", menor_quantidade);

    return 0;
}