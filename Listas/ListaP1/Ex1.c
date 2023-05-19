/*
Faça um programa que leia um conjunto de números inteiros e que determine os números palíndromos. Palíndromos são números que têm o mesmo valor se 
lidos da esquerda para a direita ou da direita para a esquerda. Exemplo: 44, 232, 1661, etc. O final da leitura é indicado por um número negativo. 
Faça uma função que irá retornar para o programa principal se o número é palíndromo ou não.
*/

#include<stdio.h>
#include<string.h>

int eh_palindromo(char *num) {

    for(int i=0; i<(strlen(num))/2; i++) {
        if(num[i] != num[strlen(num)-1-i]) {
            return 0;
        }
    }
    return 1;
}

int main(void) {

    char numero[100];

    printf("Digite um número inteiro: ");
    scanf(" %s", numero);

    while(numero[0] != '-') {

        if(eh_palindromo(numero)) {
            printf("%s é palíndromo\n", numero);
        }
        else {
            printf("%s não é palíndromo\n", numero);
        }

        printf("Digite um número inteiro: ");
        scanf(" %s", numero);

    }
    
    return 0;
}