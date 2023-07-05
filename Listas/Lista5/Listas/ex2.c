/*
Considere uma lista onde cada nó é composto pelo código, nome e preço de um produto. A lista está ordenada por ordem crescente do código do 
produto.
    a. Considerando alocação sequencial estática, faça a declaração desta estrutura e uma função que receba esta lista como parâmetro e que 
        escreva os dados de todos os produtos contidos na lista.
    b. Considerando uma lista simplesmente encadeada dinâmica, faça a declaração desta estrutura e uma função que calcule e retorne a média 
        de preços.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define NPRODUTOS 4

struct listaSequencial {
    int *listaCodigos;
    char *listaNomes;
    float *listaPrecos;
};
typedef struct listaSequencial ListaSequencial;

struct no {
    int codigo;
    char nome[40];
    float preco;
    struct no *prox;
};
typedef struct no Lista;

float media_precos(Lista *lista) {
    float media = 0;
    int contador = 0;
    while(lista != NULL) {
        media += lista->preco;
        contador += 1;
        lista = lista->prox;
    }
    return media/contador;
}

int busca(Lista *lista, int codigo, Lista **pre) {
    Lista *no = lista;
    *pre = NULL;
    while(no != NULL && no->codigo < codigo) {
        *pre = no;
        no = no->prox;
    }
    if(no != NULL && no->codigo == codigo) {
        return 1;
    }
    else {
        return 0;
    }
}

Lista *insere_no(Lista *lista, int codigo, char nome[40], float preco) {
    Lista *novoNo;
    Lista *pre;
    int existe = busca(lista, codigo, &pre);
    if(!existe) {
        novoNo = (Lista *) malloc(sizeof(Lista));
        novoNo->codigo = codigo;
        strcpy(novoNo->nome, nome);
        novoNo->preco = preco;
        if(lista == NULL || pre == NULL) {
            novoNo->prox = lista;
            lista = novoNo;
        }
        else {
            novoNo->prox = pre->prox;
            pre->prox = novoNo;
        }
    }
    return lista;
}

int main(void) {

    Lista *lista = NULL;
    Lista *ultimo = lista;
    float media;
    int op = 1;

    while(op > 0) {
        int codigo;
        float preco;
        char nome[40];
        printf("Código: ");
        scanf("%d", &codigo);
        printf("Nome: ");
        scanf(" %s", nome);
        printf("Preço: ");
        scanf("%f", &preco);
        lista = insere_no(lista, codigo, nome, preco);
        printf("continua? ");
        scanf("%d", &op);
    }

    media = media_precos(lista);
    printf("Media de precos: %f", media);

    return 0;
}