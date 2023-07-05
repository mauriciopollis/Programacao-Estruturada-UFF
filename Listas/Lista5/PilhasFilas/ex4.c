/*
Sabendo que um DEQUE é um tipo especial de lista linear onde as inserções e remoções de elementos podem ser realizadas nos dois extremos da 
estrutura, crie uma função para remoção de elementos. Considere alocação sequencial estática, onde o DEQUE pode guardar no máximo N 
elementos.
    • Faça o desenho da estrutura do DEQUE D, onde sejam especificadas as variáveis de controle: início, fim e total.
    • A função possuirá como parâmetros: D (o DEQUE) e asuas variáveis de controle (inicio, fim e total) e POS (que indica a posição de 
    onde o elemento será removido: I – início e F – final).
    • Deve ser usada a idéia de deques circulares (similar às filas circulares)
*/

#include<stdio.h>
#include<stdlib.h>
#define N 5

struct deque {
    int dado[N];
    int inicio;
    int final;
    int total;
};
typedef struct deque Deque;

void remover(Deque *d, char pos) {
    if(d->total > 0) {
        if(pos == 'I') {
            d->inicio += 1;
            d->inicio = d->inicio % N;
        }
        if(pos == 'F') {
            d->final -= 1;
            if(d->final < 0) {
                d->final = N - 1;
            }
        }
        d->total -= 1;
    }
}

void inserir(Deque *d, char pos, int num) {
    if(d->total < N) {
        if(pos == 'I') {
            d->inicio -= 1;
            if(d->inicio < 0) {
                d->inicio = N - 1;
            }
            d->dado[d->inicio] = num;
        }
        if(pos == 'F') {
            d->final += 1;
            d->final = d->final % N;
            d->dado[d->final] = num;
        }
        d->total += 1;
    }
}

void imprimir(Deque *d) {
    int j = d->inicio;
    for(int i = 0; i < d->total; i++) {
        printf("%d ", d->dado[j]);
        j++;
        j = j % N;
    }
    printf("\n");
}

int main(void) {
    Deque *deque = (Deque *) malloc(sizeof(Deque));
    deque->inicio = 0;
    deque->final = 0;
    deque->total = 0;
    for(int i = 0; i < N; i++) {
        printf("%d: ", i);
        scanf("%d", &deque->dado[i]);
        deque->total += 1;
    }
    deque->final = N - 1;
    imprimir(deque);
    remover(deque, 'F');
    imprimir(deque);

    return 0;
}