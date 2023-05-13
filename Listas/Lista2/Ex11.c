/*
Faça um programa que escreva os N primeiros termos de uma PA. O primeiro termo, a1, e a razão da PA devem ser lidos.
*/

#include<stdio.h>

int main() {

    int a1, razao, a, N;

    printf("Digite N: ");
    scanf("%d", &N);
    printf("Primeiro termo: ");
    scanf("%d", &a1);
    printf("Razão da P.A: ");
    scanf("%d", &razao);

    a = a1;

    for(int i=1; i<=N; i++) {
        printf("%d ", a);
        a += razao;
    }

    return 0;
}