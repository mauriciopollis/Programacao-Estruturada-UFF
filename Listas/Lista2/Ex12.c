/*
Faça um programa que leia uma quantidade não determinada de números inteiros. O programa deve calcular e escrever a quantidade de números pares e 
ímpares, a média aritmética dos números pares e a divisão do somatório dos números pares pelo somatório dos números ímpares. O número que 
encerrará a leitura será zero, que não deve ser considerado.
*/

#include<stdio.h>

int main() {

    int quantidade_pares = 0, quantidade_impares = 0, somatorio_pares = 0, somatorio_impares = 0, media_pares, numero;
    float razao;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    while(numero != 0) {
        if(numero%2==0) {
            quantidade_pares += 1;
            somatorio_pares += numero;
        }
        else {
            quantidade_impares += 1;
            somatorio_impares += numero;
        }
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
    }

    printf("Quantidade de pares: %d\n", quantidade_pares);
    printf("Quantidade de ímpares: %d\n", quantidade_impares);
    if(quantidade_pares != 0) {
        media_pares = (float)somatorio_pares/quantidade_pares;
        printf("Média aritmética dos pares: %d\n", media_pares);
    } else {
        printf("Média aritmética dos pares: %d\n", quantidade_pares);
    }
    if(somatorio_impares != 0) {
        razao = (float)somatorio_pares/somatorio_impares;
        printf("Divisão do somatório dos pares pelo somatório dos ímpares: %f", razao);
    }
    else {
        printf("O somatório dos ímpares é zero, então a razão não está definida");
    }

    return 0;
}