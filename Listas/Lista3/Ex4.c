/*
Faça um programa que preencha um vetor de N posições com os N primeiros termos de uma série de Fibonacci (0 1 1 2 3 5 8 13 21 34...). Após 
preenchido o vetor, verifique se um determinado número informado pelo usuário pertence ou não ao vetor.
*/

#include<stdio.h>
#include<stdlib.h>

void preenche_fibonacci(int N, int *vetor) {

    int t1 = 0, t2 = 1, t3;

    t3 = t1 + t2;

    // gambiarra?
    vetor[0] = 0;
    if(N==1) {
        return;
    }
    vetor[1] = 1;
    if(N==2) {
        return;
    }

    for(int i=2; i<N; i++) {
        vetor[i] = t3;
        t1 = vetor[i-1];
        t2 = vetor[i];
        t3 = t1 + t2;
    }
}

int numero_no_vetor(int numero, int *vetor, int N) {
    
    for(int i=0; i<N; i++) {
        if(numero == vetor[i]) {
            return 1;
        }
    }
    return 0;
}

int main() {

    int N, *vetor_fibonacci, numero;

    printf("Digite um inteiro positivo: ");
    scanf("%d", &N);

    vetor_fibonacci = (int*)malloc(N*sizeof(int));

    preenche_fibonacci(N, vetor_fibonacci);

    printf("Digite um número: ");
    scanf("%d", &numero);

    if(numero_no_vetor(numero, vetor_fibonacci, N)) {
        printf("%d faz parte dos %d primeiros termos da sequência de fibonacci", numero, N);
    }
    else {
        printf("%d não faz parte dos %d primeiros termos da sequência de fibonacci", numero, N);
    }


    return 0;
}
