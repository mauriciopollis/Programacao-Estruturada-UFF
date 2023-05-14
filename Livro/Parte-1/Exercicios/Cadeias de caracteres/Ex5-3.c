/*
Implemente uma função que receba uma string como parâmetro e altere nela as ocorrências de caracteres maiúsculos para minúsculos. Essa 
função deve obedecer ao protótipo:

void minusculo(char* str);
*/

#include<stdio.h>

void minusculo(char* str) {

    int i = 0;

    while(str[i] != '\0') {
        if(str[i]>='A' && str[i]<='Z') {
            str[i] = str[i] + 32;
        }
        i++;
    }
}

int main() {

    char string[100];

    printf("Digite uma string: ");
    scanf(" %99[^\n]s", string);

    minusculo(string);

    printf("Minúscula: %s", string);

    return 0;
}