/*
Faça um programa que leia a base e a altura de um retângulo e escreva o seu perímetro, a sua área e a sua diagonal.
*/

#include<stdio.h>
#include<math.h>

int main(void) {
    
    float base, altura, perimetro, area, diagonal;

    printf("Digite a base do retângulo: ");
    scanf("%f", &base);
    printf("Digite a altura do retângulo: ");
    scanf("%f", &altura);

    perimetro = 2*(base + altura);
    area = base*altura;
    diagonal = sqrt(base*base + altura*altura);

    printf("Perímetro: %f\nÁrea: %f\nDiagonal: %f", perimetro, area, diagonal);
    
    return 0;
}
