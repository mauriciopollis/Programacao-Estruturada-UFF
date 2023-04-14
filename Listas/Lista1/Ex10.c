/*
Existem números de 4 dígitos (entre 1000 e 9999) que obedecem à seguinte característica: se dividirmos o número em dois números de dois 
dígitos, um composto pela dezena e pela unidade, e outro pelo milhar e pela centena, se somarmos estes dois novos números gerando um 
terceiro, o quadrado deste terceiro número é exatamente o número original de quatro dígitos.
Por exemplo: 2025 -> dividindo: 20 e 25 -> somando temos 45 -> 45² = 2025.
Escreva um programa para ler um número e verificar se ele obedece a esta característica.
*/

#include<stdio.h>

int main(void) {

    int numero, primeiraMetade, segundaMetade, somaMetades;

    printf("Digite um número inteiro positivo de quatro dígitos: ");
    scanf("%d", &numero);

    primeiraMetade = numero/100;
    segundaMetade = numero - primeiraMetade*100;

    somaMetades = primeiraMetade + segundaMetade;

    if(somaMetades*somaMetades == numero) {
        printf("O número %d tem a propriedade de que (%d + %d)² = (%d)² = %d", numero, primeiraMetade, segundaMetade, somaMetades, numero);
    }
    else {
        printf("O número %d não tem a propriedade: (%d + %d)² = (%d)² = %d != %d", numero, primeiraMetade, segundaMetade, somaMetades, somaMetades*somaMetades, numero);
    }

    return 0;
}