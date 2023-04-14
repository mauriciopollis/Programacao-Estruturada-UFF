/*
Faça um programa que leia 3 valores reais e que informe se eles formam um triângulo. Caso seja possível formar o triângulo indique se 
este é equilátero, isósceles ou escaleno.
*/

#include<stdio.h>

int main(void) {

    float lado1, lado2, lado3;

    printf("Digite o primeiro valor real: ");
    scanf("%f", &lado1);
    printf("Digite o segundo valor real: ");
    scanf("%f", &lado2);
    printf("Digite o terceiro valor real: ");
    scanf("%f", &lado3);

    if(lado1<lado2+lado3 && lado2<lado1+lado3 && lado3<lado1+lado2) {
        if(lado1!=lado2 && lado1!=lado3) {
            printf("Triângulo escaleno");
        }
        else {
            if(lado1==lado2 && lado1==lado3) {
                printf("Triângulo equilátero");
            }
            else {
                printf("Triângulo isósceles");
            }
        }
    }
    else {
        printf("Esses valores não formam triângulo");
    }
    return 0;
}