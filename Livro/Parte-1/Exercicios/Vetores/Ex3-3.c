/*
Implemente uma função que receba como parâmetro um vetor de números inteiros (vet) de tamanho n e inverta a ordem dos elementos 
armazenados nesse vetor. Essa função deve obedecer ao protótipo:

void inverte(int n, int *vet);
*/

#include<stdio.h>
#include<stdlib.h>

void inverte(int n, int *vet) {

    for(int i=0; i<n/2; i++) {
        int temp = vet[i];
        vet[i] = vet[(n-i)-1];
        vet[(n-i)-1] = temp;
    }
}

int main() {

    int tamanhoVetor;
    int *vetor;

    printf("Insira o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    vetor = (int*)malloc(tamanhoVetor*sizeof(int));

    for(int i=0; i<tamanhoVetor; i++) {
        printf("Insira a %d-ésima componente do vetor: ", i);
        scanf("%d", &vetor[i]);
    }

    inverte(tamanhoVetor, vetor);

    printf("O vetor invertido é: ");
    for(int i=0; i<tamanhoVetor; i++) {
        printf("%d ", vetor[i]);
    }

    return 0;
}