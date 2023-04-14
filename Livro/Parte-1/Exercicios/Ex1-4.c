/*
Implemente uma função que retorne a soma dos n primeiros números naturais ímpares. Essa função deve obedecer ao protótipo:

int soma_impares (int n);
*/

#include<stdio.h>

int soma_impares(int n) {
    int soma = 0;
    for(int i = 1; i <= n; i++) {
        soma += 2*i - 1;
    }
    return soma;
}

int main(void) {

    int numero;

    printf("Insira um número natural: ");
    scanf("%d", &numero);

    printf("A soma dos %d primeiros números naturais ímpares é %d", numero, soma_impares(numero));
    return 0;
}