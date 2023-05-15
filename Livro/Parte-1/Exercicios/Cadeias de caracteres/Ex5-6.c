/*
Implemente uma função que receba uma string como parâmetro e desloque os seus caracteres uma posição para a direita. Por exemplo, a string 
"casa" seria alterada para "acas". Repare que o último caractere vai para o início da string. Essa função deve obedecer ao protótipo:

void roda_string(char* str);
*/

#include<stdio.h>
#include<string.h>

void roda_string(char* str) {

    int comprimento = strlen(str);
    char ultima_letra = str[comprimento - 1];

    for(int i=(comprimento-1); i>0; i--) {
        str[i] = str[i-1];
    }
    str[0] = ultima_letra;
}

int main() {

    char string[100];

    printf("Digite uma string: ");
    scanf(" %99[^\n]s", string);

    roda_string(string);

    printf("String rodada: %s", string);

    return 0;
}