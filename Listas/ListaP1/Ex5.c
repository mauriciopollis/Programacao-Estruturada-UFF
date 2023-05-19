/*
Faça um programa que escreva uma série com os números inteiros compreendidos entre i e j. O intervalo entre os números deve ser k. Crie uma 
função recursiva imprimeSerie(i,j,k) que escreva os elementos desta série.
*/

#include<stdio.h>

void imprimeSerie(int i, int j, int k) {

    if((i+k) >= j || k == 0) {
        return;
    }
    else {
        printf("%d ", i+k);
        imprimeSerie(i+k, j, k);
    }
}

int main(void) {

    int a, b, passo;

    printf("Digite o início do intervalo, o final do intervalo e o passo: ");
    scanf("%d %d %d", &a, &b, &passo);

    imprimeSerie(a, b, passo);

    return 0;
}