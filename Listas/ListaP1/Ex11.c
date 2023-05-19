/*
Faça um programa que leia dois vetores X e Y com números reais e escreva na tela as seguintes opções para o usuário: somar X e Y, subtrair Y 
de X, pesquisar um elemento em X e Y, mostrar X e Y e finalizar o programa. Devem ser criadas funções para: somar, subtrair, preencher, 
mostrar e procurar elemento.
*/

#include<stdio.h>

void somar(float *x, float *y, float *resultado) {
}

void subtrair(float *x, float *y, float *resultado);

void mostrar(float *x, float *y);

void procurar_elemento(float *x, float *y);

void preencher(float *x, float *y) {

    printf("Insira as coordenadas do primeiro vetor: ");
    printf("Insira as coordenadas do segundo vetor: ");

}

int main(void) {

    float *x, *y, *resultado;
    char escolha;
    int dimensao;

    preencher(x, y);

    printf("Escolha uma das opções abaixo: \n");
    printf("[1] - Somar x e y\n");
    printf("[2] - Subtrair y de x\n");
    printf("[3] - Pesquisar elemento em x e y\n");
    printf("[4] - Mostrar x e y\n");
    printf("[5] - Sair\n");
    scanf("%c", &escolha);

    switch (escolha) {
        case '1':
            somar(x, y, resultado);
            break;
        case '2':
            subtrair(x, y, resultado);
            break;
        case '3':
            procurar_elemento(x, y);
            break;
        case '4':
            mostrar(x, y);
            break;
        case '5':
            break;
        default:
            printf("Opção inválida");
            break;
    }
    return 0;
}