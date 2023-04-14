#include<stdio.h>

int main(void) {

    int fatorial, numero, i;

    printf("Insira um número inteiro não negativo: ");
    scanf("%d", &numero);
    
    fatorial = 1;
    for(i = 1; i <= numero; i++) {
        fatorial *= i;
    }

    printf("O fatorial de %d é %d", numero, fatorial);

    return 0;
}