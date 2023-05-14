/*
Implemente uma função que receba uma string como parâmetro e substitua as ocorrências de uma letra pelo seu oposto no alfabeto, isto é, 
a<->z, b<->y, c<->x etc. Caracteres que não forem letras devem permanecer inalterados. Essa função deve obedecer ao protótipo:

void string_oposta(char* str);
*/

#include<stdio.h>

void string_oposta(char* str);

int main() {

    char string[100];

    printf("Digite uma string: ");
    scanf(" %99[^\n]", string);
    
    string_oposta(string);

    printf("String oposta: %s", string);

    return 0;
}