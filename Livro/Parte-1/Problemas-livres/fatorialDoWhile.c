#include<stdio.h>

int main(void) {

    int fatorial, numero, i;

    printf("Insira um inteiro não negativo: ");
    scanf("%d", &numero);

    fatorial = 1;
    i = 1;

    do {
        fatorial *= i;
        i++;
    } while(i <= numero);

    printf("O fatorial de %d é %d", numero, fatorial);

    return 0;
}