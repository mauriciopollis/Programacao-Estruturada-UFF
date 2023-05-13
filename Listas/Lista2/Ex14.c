/*
Faça um programa que leia um número inteiro positivo N e calcule o valor da expressão abaixo. Caso o usuário digite um valor menor ou igual a zero, 
o algoritmo deve escrever uma mensagem informando que a expressão não pode ser calculada.

E = 1/N + 1/(N-1) + 1/(N-2) + ... + 1
*/

#include<stdio.h>

float calcula_E(int N) {
    
    float resultado = 0, termo;

    for(int i=0; i<N; i++) {
        termo = 1.0/(N-i);
        resultado += termo;
    }

    return resultado;
}

int main() {

    int N;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);

    if(N<=0) {
        printf("A expressão não pode ser calculada");
    }
    else {
        printf("E = %f", calcula_E(N));
    }
    return 0;
}