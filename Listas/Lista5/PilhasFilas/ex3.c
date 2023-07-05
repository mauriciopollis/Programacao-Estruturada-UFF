/*
Seja uma fila F de números inteiros com alocação sequencial estática, faça a declaração desta estrutura e uma função que verifique se 
o elemento do começo da fila é par.
*/

#define MAX 5

struct fila {
    int dado[MAX];
    int inicio;
    int final;
    int total;
};
typedef struct fila Fila;

int func(Fila *f) {
    if(f->dado[f->inicio] % 2 == 0) {
        return 1;
    }
    else {
        return 0;
    }
}