#include<stdio.h>

int main(void) {
    
    int numero;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0) {
        printf("%d é par", numero);
    }
    else {
        printf("%d é ímpar", numero);
    }

    return 0;
}