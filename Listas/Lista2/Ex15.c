/*
Faça um programa que calcule o fatorial de um número N.
*/

#include<stdio.h>

int fatorial(int N) {

    int fatorial = 1;

    for(int i=1; i<=N; i++) {
        fatorial *= i;
    }

    return fatorial;
}

int main() {

    int N;

    printf("Digite um número inteiro não negativo: ");
    scanf("%d", &N);

    printf("%d! = %d", N, fatorial(N));

    return 0;
}