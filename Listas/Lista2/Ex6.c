/*
Faça um programa que apresente a tabuada de um número N, que será informado pelo usuário. O programa deve garantir que o valor digitado 
para N esteja entre 0 e 9.
*/

#include<stdio.h>

int main() {

    int N;

    do {
        printf("Digite o valor de N (entre 0 e 9): ");
        scanf("%d", &N);
    } while(N<0 || N>9);

    for(int i=0; i<=9; i++) {
        printf("%d X %d = %d\n", i, N, i*N);
    }

    return 0;
}