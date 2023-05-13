/*
Faça um programa que leia um número K e escreva os termos da série de Fibonacci menores ou iguais a K. Faça a validação para que o valor de K 
seja maior do que 0.
*/

#include<stdio.h>

void imprime_fibonacci_menores_que(int K) {
    
    int t1 = 1, t2 = 1, t3;

    printf("%d %d ", t1, t2);

    t3 = t1 + t2;

    while(t3<=K) {
        printf("%d ", t3);
        t1 = t2;
        t2 = t3;
        t3 = t1 + t2;
    }

}

int main() {

    int K;

    do {
        printf("Digite K (deve ser maior que zero): ");
        scanf("%d", &K);
    } while(K<=0);

    imprime_fibonacci_menores_que(K);

    return 0;
}