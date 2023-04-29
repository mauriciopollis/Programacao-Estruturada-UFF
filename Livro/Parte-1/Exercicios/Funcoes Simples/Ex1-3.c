/*
Implemente uma função que retorne o n-ésimo termo da série de Fibonacci. A série de Fibonacci é dada por: 1 1 2 3 5 8 13 21 ..., 
isto é, os dois primeiros termos são iguais a 1 e cada termo seguinte é a soma dos dois termos anteriores. Essa função deve 
obedecerao protótipo:

int fibonacci (int n);
*/

#include<stdio.h>

int fibonacci(int n) {

    if(n == 1 || n == 2) {
        return 1;
    }
    else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main(void) {

    int numero;

    printf("Insira um número natural: ");
    scanf("%d", &numero);

    printf("O %d-ésimo termo da série de Fibonacci é %d", numero, fibonacci(numero));

    return 0;
}
