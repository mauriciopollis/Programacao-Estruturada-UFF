/*
Faça um programa que preencha uma matriz M 10x5 com números inteiros. Após preencher a matriz, crie uma segunda matriz que seja a transposta 
de M. Ao final, escreva a matriz Transposta.
*/

#include<stdio.h>
#define M 10
#define N 5

int main() {

    int matriz[M][N], transposta[N][M];

    for(int i=0; i<M; i++) {
        for(int j=0; j<N; j++) {
            printf("matriz[%d][%d] = ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            transposta[i][j] = matriz[j][i];
        }
    }

    for(int i=0; i<N; i++) {
        for(int j=0; j<M; j++) {
            printf("%d ", transposta[i][j]);
        }
        printf("\n");
    }

    return 0;
}
