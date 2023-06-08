/*
Faça um programa que crie uma fila com os N números de processos que estão esperando para executar em um sistema.
Considere que os X (X<N) primeiros processos terminaram a sua execução
Escreve o nome do primeiro processo da fila.
Implemente a estrutura de fila e as funções para inserir e remover elementos.
*/

#include<stdio.h>
#include<stdlib.h>

struct fila {
    int *dado;
    int inicio;
    int final;
    int total;
};
typedef struct fila Fila;

void insere(Fila *f, int num, int tamanho) {
    if(f->total < tamanho) {
        f->dado[f->final] = num;
        f->final++;
        f->final = f->final % tamanho;
        f->total++;
    }
}

int remover(Fila *f, int tamanho) {
    int num;
    if(f->total > 0) {
        num = f->dado[f->inicio];
        f->inicio++;
        f->inicio = f->inicio % tamanho;
        f->total--;
        return num;
    }
}

int main(void) {

    Fila fila;
    int N, X;

    fila.inicio = 0;
    fila.final = 0;
    fila.total = 0;

    printf("Insira o número total de processos: ");
    scanf("%d", &N);

    fila.dado = (int *)malloc(N * sizeof(int));

    for(int i = 1; i < N; i++) {
        int elemento;
        printf("Digite o %dº elemento da fila: ", i);
        scanf("%d", &elemento);
        insere(&fila, elemento, N);
    }

    printf("Digite o número de processos que foram terminados: ");
    scanf("%d", &X);

    for(int i = 0; i < X; i++) {
        remover(&fila, N);
    }

    printf("Primeiro elemento da fila: %d", fila.dado[0]);

    return 0;
}