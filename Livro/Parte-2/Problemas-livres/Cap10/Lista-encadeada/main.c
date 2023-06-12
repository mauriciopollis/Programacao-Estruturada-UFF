#include<stdio.h>

#include "lista_encadeada.h"

void menu(void) {
    printf("[1] - Inserir elemento no inicio da lista\n");
    printf("[2] - Imprimir a lista\n");
    printf("[3] - Verificar se a lista está vazia\n");
    printf("[4] - Buscar elemento na lista\n");
    printf("[5] - Retirar elemento da lista\n");
    printf("[6] - Liberar a memória ocupada pela lista\n");
    printf("[qualquer outra tecla] - Sair\n");
    printf("Escolha uma opção: ");
}

int main(void) {

    int continua = 1, op, elem;
    Lista *lista;

    lista = lst_enc_cria();

    while(continua) {
        menu();
        scanf("%d", &op);

        switch(op) {
            case 1:
                printf("Digite o elemento a ser inserido: ");
                scanf("%d", &elem);
                lista = lst_enc_insere_inicio(lista, elem);
                break;
            case 2:
                lst_enc_imprime(lista);
                break;
            case 3:
                if(lst_enc_vazia(lista)) {
                    printf("A lista está vazia\n");
                }
                else {
                    printf("A lista não está vazia\n");
                }
                break;
            case 4:
                printf("Digite o elemento a ser buscado: ");
                scanf("%d", &elem);
                if(lst_enc_busca(lista, elem) != NULL) {
                    printf("A lista contém o elemento %d\n", elem);
                }
                else {
                    printf("A lista não contém o elemento %d\n", elem);
                }
                break;
            case 5:
                printf("Digite o elemento a ser retirado: ");
                scanf("%d", &elem);
                lista = lst_enc_retira(lista, elem);
                break;
            case 6:
                lst_enc_libera(lista);
                break;
            default:
                continua = 0;
                break;
        }
    }
    return 0;
}