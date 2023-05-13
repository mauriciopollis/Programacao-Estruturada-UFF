/*
Considere um vetor que guarde 100 números inteiros. Faça um programa que preencha este vetor. Após o vetor preenchido multiplique seus valores 
ímpares por 3 e divida os valores pares por 2. Escreva o maior elemento do vetor.
*/

#include<stdio.h>

#define N 10

int main() {

    int numeros[N], maior;

    for(int i=0; i<N; i++) {
        printf("Digite um número inteiro: ");
        scanf("%d", &numeros[i]);
    }

    maior = numeros[0];

    for(int i=0; i<N; i++) {

        if(numeros[i]>maior) {
            maior = numeros[i];
        }

        if(numeros[i]%2==0) {
            numeros[i] = numeros[i]/2;
        }
        else {
            numeros[i] = numeros[i]*3;
        }
    }

    printf("O maior elemento do vetor é %d", maior);

    return 0;
}
