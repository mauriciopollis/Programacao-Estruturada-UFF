/*
Sabendo que o último caractere de uma string é ‘\0’, faça um programa que escreva a quantidade de caracteres desta string. Crie uma função 
recursiva que retorne esta quantidade de caracteres. Não é permitido o uso da função strlen.
*/

#include<stdio.h>

int len_string(char *string) {

    int cumprimento = 0;

    while(*string != '\0') {
        cumprimento++;
        string++;
    }

    return cumprimento;
}

int main(void) {

    char string[1000];

    printf("Digite uma string: ");
    scanf(" %99[^\n]s", string);

    printf("A string %s tem cumprimento %d", string, len_string(string));

    return 0;
}