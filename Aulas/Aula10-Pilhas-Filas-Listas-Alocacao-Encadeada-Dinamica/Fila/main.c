#include<stdio.h>
#include "fila.h"

void menu() {
    printf("[1] - Insere um elemento na fila\n");
    printf("[2] - Remove um elemento da fila\n");
    printf("[3] - Imprime a fila\n");
    printf("[qualquer outro algarismo] - Sair\n");
    printf("Opção: ");
}

int main(void) {

    int continua = 1, op, elem;
    Fila *fila;

    fila = fila_criar();

    while(continua) {
        menu();
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elem);
                fila = fila_insere(fila, elem);
                break;
            case 2:
                fila = fila_remove(fila);
                break;
            case 3:
                fila_imprime(fila);
                break;
            default:
                continua = 0;
                break;
        }
    }
    
    return 0;
}