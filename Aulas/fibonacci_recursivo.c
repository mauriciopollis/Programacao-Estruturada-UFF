/*
Fazer uma função que retorne o n-ésimo termo de fibonacci usando recursão
*/

#include<stdio.h>

int fibonacci_recursivo(int n) {

    // caso trivial da recursão
    if(n==1||n==2) {
        return 1;
    }
    // caso geral da recursão
    else {
        return fibonacci_recursivo(n-1) + fibonacci_recursivo(n-2);
    }
    return 0;
}

int main() {

    int numero;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    printf("O %d-ésimo termo da sequência de fibonacci é %d", numero, fibonacci_recursivo(numero));

    return 0;
}