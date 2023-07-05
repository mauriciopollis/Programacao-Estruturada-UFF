/*
Fazer um programa que crie duas listas simplesmente encadeadas L1 e L2 que guardem números inteiros. Tais listas representarão dois conjuntos 
distintos. Implementar as operações de interseção, união, diferença e pertinência.
    • Pode ser criado um menu na tela com as quatro operações disponíveis no programa.
    • As operações devem funcionar da mesma maneira que funcionam quando são considerados conjuntos. Por exemplo, quando for feita a operação 
    de união entre L1 e L2 a lista resultante não poderá conter elementos repetidos.
    • Além das funções de interseção, união, diferença e pertinência podem ser criadas outras funções de acordo com a necessidade.
*/

#include<stdio.h>
#include<stdlib.h>

struct no {
    int info;
    struct no *prox;
};
typedef struct no Lista;

int busca(Lista *l, int num, Lista **pre) {
    Lista *no = l;
    *pre = NULL;
    while(no != NULL && no->info < num) {
        *pre = no;
        no = no->prox;
    }
    if(no != NULL && no->info == num) {
        return 1;
    }
    else {
        return 0;
    }
}

Lista *insere(Lista *l, int num) {
    Lista *pre;
    int existe = busca(l, num, &pre);
}

Lista *remover(Lista *l, int num);

Lista *intersecao(Lista *l1, Lista *l2) {
    Lista *intersecao = l1;
    Lista *no = l1;
    int existe;
    while(no != NULL) {
        //existe = busca(l2, no->info);
        if(!existe) {
            remover(intersecao, no->info);
        }
    }
    return intersecao;
}

Lista *uniao(Lista *l1, Lista *l2) {
    Lista *uniao = l1;
    Lista *no = l2;
    while(no != NULL) {
        insere(uniao, no->info);
    }
}

Lista *diferenca(Lista *l1, Lista *l2);

void imprime(Lista *l) {
    while(l != NULL) {
        printf("%d ", l->info);
        l = l->prox;
    }
    printf("\n");
}

void menu(void) {
    printf("Operações:\n");
    printf("[1] - Interseção\n");
    printf("[2] - União\n");
    printf("[3] - Diferença\n");
    printf("[4] - Pertinência\n");
    printf("[5] - Sair\n");
    printf("Escolha:");
}

int main(void) {
    Lista *lista1 = NULL, *lista2 = NULL, *resultado = NULL;
    int continua = 1;
    int elem;
    int escolha = 0;
    printf("Preenchendo a primeira lista:\n");
    while(continua) {
        printf("Elemento a ser inserido: ");
        scanf("%d", &elem);
        lista1 = insere(lista1, elem);
        printf("Continua?");
        scanf("%d", &continua);
    }
    continua = 1;
    printf("Preenchendo a segunda lista:\n");
    while(continua) {
        printf("Elemento a ser inserido: ");
        scanf("%d", &elem);
        lista2 = insere(lista2, elem);
        printf("Continua?");
        scanf("%d", &continua);
    }

    while(escolha != 5) {
        menu();
        scanf("%d", &escolha);
        switch(escolha) {
            case 1:
                resultado = intersecao(lista1, lista2);
                break;
            case 2:
                resultado = uniao(lista1, lista2);
                break;
            case 3:
                resultado = diferenca(lista1, lista2);
                break;
            case 4:
                printf("Elemento a ser procurado:");
                scanf("%d", &elem);
                break;
            case 5:
                break;
            default:
                break;
        }
        imprime(resultado);
    }

    return 0;
}