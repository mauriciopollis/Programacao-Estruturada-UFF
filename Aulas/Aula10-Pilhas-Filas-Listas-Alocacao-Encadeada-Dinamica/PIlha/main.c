#include<stdio.h>
#include "pilha.h"

void menu(void) {
    printf("[1] - Imprimir pilha\n");
    printf("[2] - Inserir elemento na pilha\n");
    printf("[3] - Remover elemento da pilha\n");
    printf("[4] - Verificar se a pilha está vazia\n");
    printf("[qualquer tecla] - Sair\n");
}

int main(void) {

    Pilha *pilha;
    int continua = 1, op, elem, vazia;

    pilha = pilha_criar();

    while(continua) {
        menu();
        printf("Opção: ");
        scanf("%d", &op);

        switch(op) {
            case 1:
                pilha_imprimir(pilha);
                break;
            case 2:
                printf("Digite o elemento a ser inserido no topo da pilha: ");
                scanf("%d", &elem);
                pilha = pilha_inserir(pilha, elem);
                break;
            case 3:
                pilha = pilha_remover(pilha);
                //printf("O elemento removido da pilha foi: %d\n", elem);
                break;
            case 4:
                vazia = pilha_vazia(pilha);
                if(vazia) {
                    printf("A pilha está vazia\n");
                }
                else {
                    printf("A pilha não está vazia\n");
                }
                break;
            default:
                continua = 0;
                break;
        }
    }

    return 0;
}