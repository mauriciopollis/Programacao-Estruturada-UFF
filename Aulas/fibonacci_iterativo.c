/*
Fazer uma função que retorne o n-ésimo termo da sequência de fibonacci usando iteração
*/

#include<stdio.h>

long long int fibonacci_iterativo(int n) {
    
    long long int termo1 = 1, termo2 = 1, termo3;

    if(n<=2) {
        return 1;
    }
    else {
        for(int i=3; i<=n; i++) {
            termo3 = termo1 + termo2;
            termo1 = termo2;
            termo2 = termo3;
        }
    }

    return termo3;
}

int main() {

    int numero;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    printf("O %d-ésimo termo da sequência de fibonacci é %lli", numero, fibonacci_iterativo(numero));

    return 0;
}