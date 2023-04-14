/*
Faça um programa que leia a altura e o sexo de uma pessoa e escreva o seu peso ideal, utilizando as seguintes fórmulas:
    • para homens: (72,7 * altura) – 58,0
    • para mulheres: (62,1 * altura) – 44,7
*/

#include<stdio.h>

int main(void) {

    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite 'f' se for uma mulher ou 'h' se for um homem: ");
    scanf(" %c", &sexo);

    if(sexo == 'f') {
        pesoIdeal = (62.1 * altura) - 44.7;
    }
    else {
        pesoIdeal = (72.7 * altura) - 58.0;
    }

    printf("O peso ideal é %f", pesoIdeal);

    return 0;
}