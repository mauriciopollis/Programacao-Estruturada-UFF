#include<stdio.h>

int fatorialRecursivo(int n) {

    if(n == 0) {
        return 1;
    }
    else {
        return n * fatorialRecursivo(n - 1);
    }
}

int main(void) {

    int numero;

    printf("Insira um número inteiro não negativo: ");
    scanf("%d", &numero);

    printf("O fatorial de %d é %d", numero, fatorialRecursivo(numero));

    return 0;
}