/*
Faça um programa que apresente o peso total que será carregado por um caminhão. Sabe-se que este caminhão carrega 
25 caixas. O peso de cada uma das caixas será informado pelo usuário.
*/

#include<stdio.h>

#define NUMERO_DE_CAIXAS 25

int main() {
    
    float peso_total = 0, peso_caixa;

    for(int i=1; i<=NUMERO_DE_CAIXAS; i++) {
        printf("Digite o peso da caixa %d: ", i);
        scanf("%f", &peso_caixa);
        peso_total += peso_caixa;
    }

    printf("O peso total que será carregado é de %f", peso_total);
    return 0;
}