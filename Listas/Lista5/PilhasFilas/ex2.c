/*
Faça uma função que receba uma pilha de inteiros P como parâmetro e que passe seus elementos pares para uma pilha chamada PAR, e seus 
elementos ímpares para uma pilha chamada IMPAR. PAR e IMPAR também devem ser parâmetros da função. Considere alocação encadeada dinâmica.
*/

#include<stdio.h>
#include<stdlib.h>

struct no {
    int info;
    struct no *prox;
};
typedef struct no Pilha;

int pop(Pilha **p) {
    Pilha *lixo;
    int num;
    if(*p != NULL) {
        lixo = *p;
        num = lixo->info;
        (*p) = (*p)->prox;
        free(lixo);
        return num;
    }
}

void put(Pilha **p, int num) {
    Pilha *novoNo = (Pilha *) malloc(sizeof(Pilha));
    novoNo->info = num;
    novoNo->prox = (*p);
    (*p) = novoNo;
}

void separa_pares_impares(Pilha *p, Pilha **pilha_pares, Pilha **pilha_impares) {
    while(p != NULL) {
        int num = pop(&p);
        if(num % 2 == 0) {
            put(pilha_pares, num);
        }
        else {
            put(pilha_impares, num);
        }
    }
}

void imprime(Pilha *p) {
    while(p != NULL) {
        printf("%d ", p->info);
        p = p->prox;
    }
    printf("\n");
}

int main(void) {
    Pilha *pilha_pares = NULL, *pilha_impares = NULL, *pilha = NULL;
    int num = 1;
    while(num > 0) {
        printf("Numero: ");
        scanf("%d", &num);
        put(&pilha, num);
    }
    imprime(pilha);
    separa_pares_impares(pilha, &pilha_pares, &pilha_impares);
    imprime(pilha);
    imprime(pilha_pares);
    imprime(pilha_impares);

    return 0;
}