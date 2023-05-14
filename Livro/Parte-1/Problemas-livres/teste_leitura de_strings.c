/*
testar o especificador de formato %n[] e %n[^]

n: número máximo de caracteres que serão lidos. Serve para prevenir erros causados por strings que excedam o tamanho do vetor char no qual 
serão alocadas

[]: os caracteres postos entre colchetes são os únicos que serão gravados no vetor. A leitura para se for inserido um caracter que não esteja 
entre os colchetes

[^]: possui o efeito contrário. A leitura será feita até ser encontrado algum caracter que está entre colchetes e depois do ^
*/

#include<stdio.h>

int main() {

    char string[100];

    scanf(" %2[aeiou]s", string);

    printf("%s", string);

    return 0;
}