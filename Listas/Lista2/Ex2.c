/*
Faça um programa que leia a quantidade e o preço de 50 produtos que foram comprados por uma empresa. Ao final deve ser escrito o total gasto 
pela empresa.
*/

#include<stdio.h>

#define N 50

int main() {

    int quantidade;
    float preco, total_gasto = 0;

    for(int i=1; i<=N; i++) {
        printf("Digite a quantidade e o preço do produto: ");
        scanf("%d %f", &quantidade, &preco);
        total_gasto += quantidade * preco;
    }

    printf("O total gasto foi %.2f", total_gasto);

    return 0;
}