/*
Faça um programa que crie uma lista L com números inteiros:
    - A lista deve estar ordenada de maneira crescente
    - Crie uma função para inserir elementos
        void insere(&L, elem)
    - Crie uma função para remover elementos
        void remove(&L, elem)
    - Crie uma função para buscar elementos
        int busca(&L, elem, &pos)

    Implementar uma busca binária
    A lista deve estar ordenada a todo instante
*/

#include<stdio.h>

#define MAX 100

struct lista {
    int dado[MAX];
    int total;
};
typedef struct lista Lista;

void insere(Lista *l, int elem) {
    int existe;
    int pos;
    int i;
    existe = busca(l, elem, &pos);
    if(existe) {
        printf("Elemento já está na lista\n");
    }
    else {
        for(i = l->total; i > pos; i--) {
            l->dado[i] = l->dado[i - 1];
        }
        l->total++;
        l->dado[pos] = elem;
    }
}

void removeL(Lista *l, int elem) {
    int pos;
    int existe;
    int i;
    existe = busca(l, elem, &pos);
    if(existe) {
        for(i = pos; i < l->total - 1; i++) {
            l->dado[i] = l->dado[i + 1];
        }
        l->total--;
    }
    else {
        printf("Elemento não está na lista\n");
    }
}

int busca(Lista *l, int elem, int *pos) {
    int i = 0;
    while(l->dado[i] < elem && i < l->total) {
        i++;
    }
    (*pos) = i;
    if(i == l->total) { // varreu toda lista e não achou elem
        return 0;
    }
    else {
        if(l->dado[i] == elem) {
            return 1;
        }
        else {
            return 0;
        }
    }
}

int busca_binaria(Lista *l, int elem, int *pos);

void imprime_lista(Lista *l) {
    for(int i = 0; i < l->total; i++) {
        printf("%d ", l->dado[i]);
    }
    printf("\n");
}

void imprime_menu() {
    printf("[1] - Inserir elemento na lista\n");
    printf("[2] - Remover elemento da lista\n");
    printf("[3] - Buscar elemento na lista\n");
    printf("[4] - Imprimir lista\n");
    printf("[qualquer tecla] - Sair\n");
}

int main(void) {

    Lista lista;
    int continua = 1;
    int op;
    int elemento;
    int pos;

    lista.total = 0;

    while(continua) {
        imprime_menu();
        printf("Opção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Digite o elemento a ser inserido:");
                scanf("%d", &elemento);
                insere(&lista, elemento);
                break;
            case 2:
                printf("Digite o elemento a ser removido:");
                scanf("%d", &elemento);
                removeL(&lista, elemento);
                break;
            case 3:
                printf("Digite o elemento a ser buscado:");
                scanf("%d", &elemento);
                busca(&lista, elemento, &pos);
                break;
            case 4:
                imprime_lista(&lista);
                break;
            default:
                continua = 0;
                break;
        }
    }

    return 0;
}