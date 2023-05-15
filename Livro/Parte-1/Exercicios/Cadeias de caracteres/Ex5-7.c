/*
Reimplemente as funções dos Exercícios 5.3 a 5.6 para que retornem uma nova string, alocada dentro da função, com o resultado esperado, 
preservando as strings originais inalteradas. Essas funções devem obedecer ao seguinte protótipo:

char* nome_da_funcao(char* str);
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>

//Ex5-3
char* minusculo(char* str) {

    int i = 0;
    char *string;

    strcpy(string, str);

    while(string[i] != '\0') {
        if(string[i]>='A' && string[i]<='Z') {
            string[i] = string[i] + 32;
        }
        i++;
    }

    return string;
}

//Ex5-4
char* shift_string(char* str) {

    int i=0;
    char *string;

    strcpy(string, str);

    while(string[i] != '\0') {
        if((string[i]>='a' && string[i]<='y') || (string[i]>='A' && string[i]<='Y')) {
            string[i] = string[i] + 1;
        }
        if(string[i] == 'z' || string[i] == 'Z') {
            string[i] = string[i] - 25;
        }
        i++;
    }
    return string;
}

//Ex5-5
char* string_oposta(char* str) {
    
    int i=0;
    char *string;

    strcpy(string, str);

    while(string[i]!='\0') {
        if((string[i]>='A' && string[i]<='Z')) {
            string[i] = 'A' + 'Z' - string[i];
        }
        if((string[i]>='a' && string[i]<='z')) {
            string[i] = 'a' + 'z' - string[i];
        }
        i++;
    }
    return string;
}

//Ex5-6
char* roda_string(char* str) {

    char *string;

    strcpy(string, str);

    int comprimento = strlen(string);
    char ultima_letra = string[comprimento - 1];

    for(int i=(comprimento-1); i>0; i--) {
        string[i] = string[i-1];
    }
    string[0] = ultima_letra;

    return string;
}
