/*
Faça um programa que leia 2 números inteiros positivos, A e B, e que calcule a soma de todos os números compreendidos entre eles. 
Os valores A e B não devem ser considerados no somatório. Caso A seja maior do que B deve ser enviada uma mensagem para o usuário informando 
que a soma não será realizada.
*/

#include<stdio.h>

int main() {

    int A, B, soma = 0;

    printf("Digite A: ");
    scanf("%d", &A);
    printf("Digite B: ");
    scanf("%d", &B);

    if(A>B) {
        printf("A soma não será realizada.");
    }
    else {
        for(int i=(A+1); i<B; i++) {
            soma += i;
        }
        printf("A soma dos números entre %d e %d é %d", A, B, soma);
    }

    return 0;
}