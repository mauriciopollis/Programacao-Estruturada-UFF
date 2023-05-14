/*
Implemente uma função que receba uma string como parâmetro e substitua todas as letras por suas sucessoras no alfabeto. Por exemplo, a string 
"Casa" seria alterada para "Dbtb". Essa função deve obedecer ao protótipo:

void shift_string(char* str);

A letra z deve ser substituída pela letra a (e Z por A). Caracteres que não forem letras devem permanecer inalterados.
*/

#include<stdio.h>

void shift_string(char* str) {

    int i=0;

    while(str[i] != '\0') {
        if((str[i]>='a' && str[i]<='y') || (str[i]>='A' && str[i]<='Y')) {
            str[i] = str[i] + 1;
        }
        if(str[i] == 'z' || str[i] == 'Z') {
            str[i] = str[i] - 25;
        }
        i++;
    }
}

int main() {

    char string[100];

    printf("Digite uma string: ");
    scanf(" %99[^\n]", string);

    shift_string(string);

    printf("String 'shifted': %s", string);
    return 0;
}