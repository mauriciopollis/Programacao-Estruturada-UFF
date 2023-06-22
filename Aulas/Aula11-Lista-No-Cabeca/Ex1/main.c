/*
Faça um programa que:
    - Crie uma lista encadeada L com nomes de frutas
    - Os nomes devem ser inseridos na lista em ordem crescente até que o usuário digite a palavra ‘fim’
    - A lista não deve possuir nomes repetidos
    - Ao final do programa, imprima a lista
    - Faça funções para inserir um elemento e imprimir a lista
    - Após preencher a lista crie um MENU com as opções:
        1 – Insere elemento
        2 – Remove elemento
        3 – Mostra lista
        4 – Informa a quantidade de nós
        5 – Fim do programa
    - Além das funções já criadas, crie funções para remover um elemento, apresentar o menu na tela e uma função 
    recursiva para contar os nós da lista
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "lista_no_cabeca.h"
#include "lista_no_cabeca.c"

int main(void) {

    Lista *lista_frutas;
    char fruta[50];

    lista_frutas = lstnc_cria();

    printf("Digite o nome da fruta: ");
    scanf(" %49[^\n]s", fruta);

    while(strcmp(fruta, "fim") != 0) {
        lstnc_insere_ordenado(&lista_frutas, fruta);
        printf("Digite o nome da fruta: ");
        scanf(" %49[^\n]s", fruta);
    }

    lstnc_imprime(lista_frutas);

    return 0;
}