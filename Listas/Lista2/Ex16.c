/*
Faça um programa que calcule o valor de E segundo a expressão abaixo:
E = 2^1 + 2^2 + 2^3 + ... + 2^(N-1) + 2^N
*/

#include<stdio.h>

int main() {

    int N, E = 0, termo = 2;

    printf("Digite N: ");
    scanf("%d", &N);

    for(int i=1; i<=N; i++) {
        E += termo;
        termo *= 2;
    }

    printf("E = %d", E);
    
    return 0;
}