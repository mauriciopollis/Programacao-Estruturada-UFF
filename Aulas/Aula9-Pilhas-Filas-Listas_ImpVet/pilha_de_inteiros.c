#include<stdio.h>

#define MAX 100

struct pilha {
    int dado[MAX];
    int topo;
};
typedef struct pilha Pilha;

void push(Pilha *p, int x) {
    if(p->topo >= (MAX - 1)) {
        return NULL;
    }
    else {
        p->topo++;
        p->dado[p->topo] = x;
    }
}

int pop(Pilha *p) {
    int num;
    if(p->topo < 0) {
        return NULL;
    }
    else {
        num = p->dado[p->topo];
        p->topo--;
    }
    return num;
}

void imprime_pilha(Pilha p) {
    if(p.topo == -1) {
        printf("Pilha vazia\n");
    }
    else{
        for(int i = 0; i<=p.topo; i++) {
            printf("%d ", p.dado[i]);
        }
    }
}

int main(void) {

    Pilha pilha;
    int op = 1;
    int num;
    pilha.topo = -1;

    while(op) {
        printf("Selecione uma opção: \n");
        printf("[1] - Adicionar elemento à pilha\n");
        printf("[2] - Retirar elemento da pilha\n");
        printf("[3] - Imprimir a pilha\n");
        printf("Para sair, digite qualquer outro número\n");
        printf("Opção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Digite o elemeto a ser inserido: ");
                scanf("%d", &num);
                push(&pilha, num);
                break;
            case 2:
                num = pop(&pilha);
                printf("O elemento retirado foi: %d\n", num);
                break;
            case 3:
                imprime_pilha(pilha);
                break;
            default:
                op = 0;
                break;
        }
    }
    return 0;
}