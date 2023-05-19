/*
Escreva um programa que gere a tabuada de 1 até um valor n>0 na forma de uma tabela tal que, na posição da linha i e coluna j da tabela, 
deve-se encontrar o valor i*j. Por exemplo, para n=6 o programa deve gerar

    1  2  3  4  5  6
    2  4  6  8 10 12
    3  6  9 12 15 18
    4  8 12 16 20 24
    5 10 15 20 25 30
    6 12 18 24 30 36

A tabuada deve ser guardada em uma matriz, e após a sua criação o programa deve dar ao usuário a opção de
escolher um número X e ter a sua tabuada impressa. O programa encerra quando o usuário digitar um número
negativo.
*/

#include<stdio.h>
#include<stdlib.h>

int main(void) {

    int **tabuada;
    int n, x;

    printf("Digite n: ");
    scanf("%d", &n);

    tabuada = (int**)malloc(sizeof(int*)*n);
    for(int i=0; i<n; i++) {
        tabuada[i] = (int*)malloc(sizeof(int)*n);
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            tabuada[i][j] = (i+1)*(j+1);
        }
    }

    printf("Digite o número cuja tabuada deve ser impressa: ");
    scanf("%d", &x);

    while(x>=1) {

        for(int j=0; j<n; j++) {
            printf("%d X %x = %d\n", x, j+1, tabuada[x-1][j]);
        }
        printf("Digite o número cuja tabuada deve ser impressa: ");
        scanf("%d", &x);
    }

    return 0;
}