/*
Faça um programa que calcule a área total de uma casa (sala, cozinha, quartos, banheiros, etc). Considere que todos os cômodos são retangulares. 
O usuário deve entrar com a largura e o comprimento de cada cômodo da casa. O final da leitura será detectado quando for digitado um número negativo.
*/

#include<stdio.h>

int main() {

    float largura, comprimento, area = 0;

    printf("Digite a largura: ");
    scanf("%f", &largura);
    printf("Digite o comprimento: ");
    scanf("%f", &comprimento);

    while(largura>=0 && comprimento>=0) {

        area += largura * comprimento;

        printf("Digite a largura: ");
        scanf("%f", &largura);
        printf("Digite o comprimento: ");
        scanf("%f", &comprimento);
    }

    printf("Área total = %f", area);

    return 0;
}