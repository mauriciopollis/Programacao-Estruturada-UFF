/*
Faça um programa que leia dois números inteiros e que calcule o MDC (máximo divisor comum) entre eles. Crie uma função recursiva que retorne o 
valor do MDC, sabendo que:
    mdc(x, y) = y, se y ≤ x e x resto y = 0
    mdc(x, y) = mdc(y, x), se x < y
    mdc(x, y) = mdc(y, x resto y), caso contrário
*/

#include<stdio.h>

int mdc(int x, int y) {
    if(y<=x && x%y==0){
        return y;
    }
    else {
        if(x<y) {
            return mdc(y,x);
        }
        else {
            return mdc(y, x%y);
        }
    }
}

int main(void) {

    int x, y;

    printf("Digite dois números inteiros: ");
    scanf("%d %d", &x, &y);

    printf("mdc(%d, %d) = %d", x, y, mdc(x, y));

    return 0;
}