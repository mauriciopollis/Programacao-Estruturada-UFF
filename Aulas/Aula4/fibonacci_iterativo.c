/*
Fazer uma função que retorne o n-ésimo termo da sequência de fibonacci usando iteração
*/

#include<stdio.h>
#include<time.h>

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
    long long int fibonacci_n;
    clock_t inicio, fim;
    double cpu_time_used;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    inicio = clock();
    fibonacci_n = fibonacci_iterativo(numero);
    fim = clock();
    cpu_time_used = ((double) (fim - inicio)) / CLOCKS_PER_SEC;

    printf("O %d-ésimo termo da sequência de fibonacci é %lli\n\n", numero, fibonacci_n);
    printf("Tempo de execução da função: %f", cpu_time_used);

    return 0;
}