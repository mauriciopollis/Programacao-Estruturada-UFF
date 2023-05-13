/*
Faça um programa que leia os nomes e os preços dos produtos de uma loja e que escreva o nome do produto mais caro. Considere que o final da lista 
é marcado pelo produto ‘XXX’ e que não existem preços repetidos.
*/

#include<stdio.h>
#include<string.h>

int main() {

    char codigo[4], codigo_mais_caro[4];
    float preco, maior_preco = 0;

    printf("Digite o código do produto: ");
    scanf(" %s", codigo);

    while(strcmp(codigo, "XXX") != 0) {
        
        printf("Preço: ");
        scanf("%f", &preco);
        
        if(preco > maior_preco) {
            strcpy(codigo_mais_caro, codigo);
        }

        printf("Digite o código do produto: ");
        scanf(" %s", codigo);
    }

    printf("Código mais caro: %s", codigo_mais_caro);

    return 0;
}