#include<stdio.h>

#define MAX 100

struct fila {
    int dado[MAX];
    int inicio;
    int final;
    int total;
};
typedef struct fila Fila;

void insert(Fila *f, int x) {
    if(f->total < MAX) {
        f->dado[f->final] = x;
        f->final++;
        f->final = f->final % MAX;
        f->total++;
    }
    else {
        printf("Fila cheia\n");
    }
}

int remover(Fila *f) {
    int num;
    if(f->total > 0) {
        num = f->dado[f->inicio];
        f->inicio++;
        f->inicio = f->inicio % MAX;
        f->total--;
        return num;
    }
    else {
        printf("Fila vazia\n");
    }
}

void imprime_fila(Fila *f) {
    if(f->total > 0) {
        int i = f->inicio;
        while(i != f->final) {
            printf("%d ", f->dado[i]);
            i++;
            i = i % MAX;
        }
        printf("\n");
    }
    else {
        printf("Fila vazia\n");
    }
}

int main(void) {

    Fila fila;
    fila.inicio = 0;
    fila.final = 0;
    fila.total = 0;
    int continua = 1;
    int op;
    int num;

    while(continua) {
        printf("Selecione uma opção: \n");
        printf("[1] - Inserir elemento na fila\n");
        printf("[2] - Remover elemento da fila\n");
        printf("[3] - Imprimir fila\n");
        printf("Digite qualquer outro número para sair\n");
        printf("Digite a opção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Insira o elemento a ser inserido: ");
                scanf("%d", &num);
                insert(&fila, num);
                break;
            case 2:
                num = remover(&fila);
                break;
            case 3:
                imprime_fila(&fila);
                break;
            default:
                continua = 0;
                break;
        }
    }

    return 0;
}