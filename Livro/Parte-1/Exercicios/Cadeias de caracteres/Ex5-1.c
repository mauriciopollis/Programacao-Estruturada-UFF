/*
Implemente uma função que receba uma string como parâmetro e retorne como resultado o número de vogais dessa string. Essa função deve obedecer 
ao protótipo:

int conta_vogais(char* str);
*/

#include<stdio.h>

int conta_vogais(char *str) {

    int i = 0;;
    int contador_vogais = 0;

    while(str[i] != '\0') {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            contador_vogais += 1;
        }
        i++;
    }

    return contador_vogais;
}

int main() {

    char string[100];

    printf("Digite uma string: ");
    scanf(" %99[^\n]s", string);

    printf("Essa string tem %d vogais", conta_vogais(string));
    
    return 0;
}