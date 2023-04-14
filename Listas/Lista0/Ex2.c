/*
Faça um programa que escreva quanto um consumidor deverá pagar na sua conta de luz. Os dados de entrada do algoritmo devem ser: o nome 
do consumidor, o seu consumo mensal em quilowatts, e o preço equivalente a um quilowatt.
*/

#include<stdio.h>

int main(void) {

    float consumoMensal, precoQuilowatt, precoTotal;
    // adicionar a parte do nome do consumidor

    printf("Digite o consumo mensal em quilowatts: ");
    scanf("%f", &consumoMensal);
    printf("Digite o preço de um quilowatt: ");
    scanf("%f", &precoQuilowatt);

    precoTotal = consumoMensal*precoQuilowatt;

    printf("O consumidor deverá pagar %f unidades monetárias", precoTotal);
    
    return 0;
}