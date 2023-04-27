/*
Comparar o tempo para calcular o n-ésimo termo da série de fibonacci pelo método recursivo e pelo método iterativo

Alguns resultados:
    -para n = 30:
        iterativo: 0.000000 segundos
        recursivo: 0.006000 segundos
    
    -para n = 35:
        iterativo: 0.000000 segundos
        recursivo: 0.053000 segundos

    -para n = 40:
        iterativo: 0.000000 segundos
        recursivo: 0.383000 segundos

    -para n = 45:
        iterativo: 0.000000 segundos
        recursivo: 4.248000 segundos

    -para n = 50:
        iterativo:  0.000000 segundos
        recursivo: 45.745000 segundos

    -para n = 51:
        iterativo:  0.000000 segundos
        recursivo: 76.275000 segundos
*/

#include<stdio.h>
#include<time.h>

long long int fibonacci_recursivo(int n) {

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

long long int fibonacci_iterativo(int n) {
    
    int termo1 = 1, termo2 = 1;
    long long int termo3;

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
    long long int fibonacciRecursivo, fibonacciIterativo;

    clock_t startRecursivo, endRecursivo, startIterativo, endIterativo;
    double cpu_time_used_recursivo, cpu_time_used_iterativo;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    startIterativo = clock();
    fibonacciIterativo = fibonacci_iterativo(numero);
    endIterativo = clock();
    cpu_time_used_iterativo = ((double) (endIterativo - startIterativo)) / CLOCKS_PER_SEC;

    startRecursivo = clock();
    fibonacciRecursivo = fibonacci_recursivo(numero);
    endRecursivo = clock();
    cpu_time_used_recursivo = ((double) (endRecursivo - startRecursivo)) / CLOCKS_PER_SEC;

    printf("O %d-ésimo termo da sequência de fibonacci é %d\n\n", numero, fibonacciIterativo);

    printf("O método iterativo demorou %f segundos\n", cpu_time_used_iterativo);
    printf("O método recursivo demorou %f segundos", cpu_time_used_recursivo);

    return 0;
}