/*
Faça um programa que leia um conjunto de números inteiros e que determine os números palíndromos. Palíndromos são números que têm o mesmo valor se 
lidos da esquerda para a direita ou da direita para a esquerda. Exemplo: 44, 232, 1661, etc. O final da leitura é indicado por um número negativo. 
Faça uma função que irá retornar para o programa principal se o número é palíndromo ou não.
*/

#include<stdio.h>
#include<string.h>

int eh_palindromo(int num) {

    char char_num[10];

    sprintf(char_num, "%d", num);

    for(int i=0; i<(strlen(char_num))/2; i++) {
        if(char_num[i] != char_num[strlen(char_num)-1-i]) {
            return 0;
        }
    }
    return 1;
}

int main(void) {

    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while(numero>=0) {

        if(eh_palindromo(numero)) {
            printf("%d é palíndromo\n", numero);
        }
        else {
            printf("%d não é palíndromo\n", numero);
        }

        printf("Digite um número inteiro: ");
        scanf("%d", &numero);

    }
    
    return 0;
}