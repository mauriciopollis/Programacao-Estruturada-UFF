/*
Implemente uma função que retorne uma aproximação do valor de pi, de acordo com a fórmula de Leibniz:

pi ~ 4 * (1 - 1/3 + 1/5 - 1/7 + 1/9 - 1/11 + ...)

Essa função deve obedecer ao seguinte protótipo, em que n indica o número de termos que deve ser usado para avaliar o valor de pi:

double pi (int n);
*/

#include<stdio.h>

double pi(int n) {

    double soma = 0;
    int sinal = 1;
    
    for(int i = 1; i <= n; i++) {
        soma += sinal / (2.0 * i - 1);
        sinal *= -1;
    }

    soma *= 4;

    return soma;
}

int main(void) {

    int numero;

    printf("Insira um número natural: ");
    scanf("%d", &numero);
    
    printf("Considerando %d termos da fórmula de Leibniz, pi é aproximadamente %f", numero, pi(numero));

    return 0;
}