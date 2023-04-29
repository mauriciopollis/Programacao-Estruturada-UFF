/*
Implemente uma função que receba como parâmetro um vetor de números inteiros (vet) de tamanho n e retorne quantos números pares estão 
armazenados nesse vetor. Essa função deve obedecer ao protótipo:

int pares(int n, int* vet);
*/

#include<stdio.h>
#include<stdlib.h>

int pares(int n, int* vet) {

    int quantidadePares = 0;

    for(int i=0; i<n; i++) {
        if(vet[i] % 2 == 0) {
            quantidadePares++;
        }
    }
    return quantidadePares;
}

int main() {

    int tamanhoVetor;
    int *vetor;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    vetor = (int*)malloc(tamanhoVetor*sizeof(int));

    for(int i=0; i<tamanhoVetor; i++) {
        printf("Digite a %d-ésima componente do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("O vetor possui %d componentes pares", pares(tamanhoVetor, vetor));

    return 0;
}