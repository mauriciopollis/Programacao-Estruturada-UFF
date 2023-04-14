#include<stdio.h>

int main(void) {
    
    int numero, fatorial, i;

    printf("Insira um número inteiro não negativo: ");
    scanf("%d", &numero);
    
    fatorial = 1;
    i = 1;
    while(i <= numero) {
        fatorial = fatorial * i;
        i++;
    }

    printf("O fatorial de %d é %d", numero, fatorial);

    return 0;
}