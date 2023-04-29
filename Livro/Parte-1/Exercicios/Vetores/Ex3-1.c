/*
Implemente uma função que receba como parâmetro um vetor de números reais (vet) de tamanho n e retorne quantos números negativos estão 
armazenados nesse vetor. Essa função deve obedecer ao protótipo:

int negativos (int n, float* vet);
*/

#include<stdio.h>
#include<stdlib.h>

int negativos(int n, float* vet) {

    int quantidadeNegativos = 0;

    for(int i=0; i<n; i++) {
        if(vet[i]<0) {
            quantidadeNegativos++;
        }
    }

    return quantidadeNegativos;
}

int main() {

    int tamanhoVetor;
    float *vetor;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanhoVetor);

    vetor = (float*)malloc(tamanhoVetor*sizeof(float));

    for(int i=0; i<tamanhoVetor; i++){

        printf("Insira a %d-ésima componente do vetor: ", i);
        scanf("%f", &vetor[i]);
    }

    printf("O vetor contém %d componentes negativas", negativos(tamanhoVetor, vetor));

    return 0;
}