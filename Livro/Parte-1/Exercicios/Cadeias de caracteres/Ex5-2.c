/*
Implemente uma função que receba como parâmetro uma string e um caractere e retorne como resultado o número de ocorrências desse caractere 
na string. Essa função deve obedecer ao protótipo:

int conta_char(char* str, char c);
*/

#include<stdio.h>

int conta_char(char* str, char c) {

    int contador = 0;
    int i = 0;

    while(str[i] != '\0') {
        if(str[i] == c) {
            contador ++;
        }
        i++;
    }

    return contador;
}

int main() {

    char string[100];
    char caractere;

    printf("Digite uma string: ");
    scanf(" %99[^\n]", string);
    printf("Digite um caractere: ");
    scanf(" %c", &caractere);

    printf("A string %s tem %d ocorrências do caractere %c", string, conta_char(string, caractere), caractere);

    return 0;
}