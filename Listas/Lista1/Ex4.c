/*
 Faça um programa que leia o preço de um produto, calcule o seu aumento e mostre a sua classificação.
    • Se o preço for menor ou igual a 50, o produto receberá um aumento de 5%
    • Se o preço for maior do que 50 e menor ou igual a 100, o aumento será de 10%
    • Se o preço for maior do que 100, o aumento será de 15%
  A classificação do produto deve ser:
    • Barato: até 80 reais (inclusive)
    • Normal: entre 80 reais e 120 reais (inclusive)
    • Caro: entre 120 reais e 200 reais (inclusive)
    • Muito Caro: maior do que 200 reais
*/

#include<stdio.h>

int main(void) {

    float precoOriginal, novoPreco;

    printf("Digite o preço original do produto: ");
    scanf("%f", &precoOriginal);

    if(precoOriginal<=50) {
        novoPreco = 1.05*precoOriginal;
    }
    else {
        if(precoOriginal<=100) {
            novoPreco = 1.1*precoOriginal;
        }
        else {
            novoPreco = 1.15*precoOriginal;
        }
    }

    if(novoPreco<=80) {
        printf("O produto custa %f e sua categoria é 'Barato'", novoPreco);
    }
    else {
        if(novoPreco<=120) {
            printf("O produto custa %f e sua categoria é 'Normal'", novoPreco);
        }
        else {
            if(novoPreco<=200) {
                printf("O produto custa %f e sua categoria é 'Caro'", novoPreco);
            }
            else {
                printf("O produto custa %f e sua categoria é 'Muito Caro'", novoPreco);
            }
        }
    }

    return 0;
}