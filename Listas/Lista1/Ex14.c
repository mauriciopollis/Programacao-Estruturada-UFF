/*
O síndico do condomínio Praias Oceânicas, que possui 4 blocos, instituiu uma nova forma de cobrança. Os condôminos dos blocos Itaipu e 
Itacoatiara pagam 10% a mais que os moradores dos blocos Camboinhas e Piratininga. Os moradores da cobertura pagam uma taxa extra fixa 
relativa a 1% do total do condomínio. Supondo que cada bloco possui 20 apartamentos simples e 4 coberturas, faça um programa que leia a 
taxa condominial básica e que informe o total arrecadado pelo síndico no mês, especificando também os valores diferenciados de cada 
condomínio.
*/

#include<stdio.h>

int main(void) {

    float taxaCondominialBasica, totalItaipu, totalItacoatiara, totalCamboinhas, totalPiratininga, totalSindico;

    printf("Digite a taxa condominial básica: ");
    scanf("%f", &taxaCondominialBasica);

    totalCamboinhas = 24*(taxaCondominialBasica);
    totalCamboinhas += 4*0.01*totalCamboinhas;

    totalPiratininga = 24*(taxaCondominialBasica);
    totalPiratininga += 4*0.01*totalPiratininga;

    totalItaipu = 24*(taxaCondominialBasica*1.1);
    totalItaipu += 4*0.01*totalItaipu;

    totalItacoatiara = 24*(taxaCondominialBasica*1.1);
    totalItacoatiara += 4*0.01*totalItacoatiara;

    totalSindico = totalCamboinhas + totalItacoatiara + totalItaipu + totalPiratininga;

    printf("A arrecadação total do síndico foi de %f\n", totalSindico);
    printf("O total do bloco Itaipu foi: %f\n", totalItaipu);
    printf("O total do bloco Itacoatiara foi: %f\n", totalItacoatiara);
    printf("O total do bloco Camboinhas foi: %f\n", totalCamboinhas);
    printf("O total do bloco Piratininga foi: %f", totalPiratininga);

    return 0;
}