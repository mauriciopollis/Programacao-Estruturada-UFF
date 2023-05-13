/*
Faça um programa que preencha uma matriz M5x5 com números reais. Após preencher a matriz:
    a) Verifique se ela é simétrica.
    b) Imprima a soma dos elementos da diagonal principal.
    c) Imprima a soma dos elementos da diagonal secundária.

Faça funções distintas para cada operação.
*/

#include<stdio.h>
#define M 5
#define N 5

int eh_simetrica(float matriz[M][N]) {

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            if(matriz[i][j]!=matriz[j][i]) {
                return 0;
            }
        }
    }
    return 1;
}

float soma_diagonal_principal(float matriz[M][N]) {

    float soma = 0;

    for(int i=0; i<M; i++) {
        soma += matriz[i][i];
    }

    return soma;

}

float soma_diagonal_secundaria(float matriz[M][N]) {

    float soma = 0;

    for(int i=0; i<M; i++) {
        soma += matriz[i][N-1-i];
    }

    return soma;
}

int main() {

    float matriz[M][N];

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    if(eh_simetrica(matriz)) {
        printf("A matriz é simétrica\n");
    }
    else {
        printf("A matriz não é simétrica\n");
    }

    printf("Soma da diagonal principal: %f\n", soma_diagonal_principal(matriz));
    printf("Soma diagonal secundária: %f", soma_diagonal_secundaria(matriz));

    return 0;
}
