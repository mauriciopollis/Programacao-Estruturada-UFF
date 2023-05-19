/*
Escreva um programa para o seguinte problema: determinar se uma palavra A ocorre dentro de uma cadeia de caracteres B, mesmo que de forma não 
contígua. Fazer uma função que retorne 1 se A ocorrer dentro de B e zero, caso contrário. Exemplo:
A = "lanterna"
B = "No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença."
Resposta: A ocorre dentro de B:
    No dia mais claro, na noite mais densa, o mal sucumbirá ante a minha presença.
*/

#include<stdio.h>

int esta_no_texto(char *palavra, char *texto) {

    do {

        if(*texto == *palavra) {
            palavra++;
        }

        texto += 1;

    } while(*texto != '\0'); 

    if(*palavra == '\0') {
        return 1;
    }
    else {
        return 0;
    }
}

int main(void) {

    char texto[1000], palavra[40];

    printf("Digite a palavra a ser achada: ");
    scanf(" %39[^\n]s", palavra);

    printf("Digite o texto: ");
    scanf(" %999[^\n]s", texto);

    if(esta_no_texto(palavra, texto)) {
        printf("A palavra ocorre no texto");
    }
    else {
        printf("A palavra não está no texto");
    }

    return 0;
}