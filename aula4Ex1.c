/*
Faça um programa imprima na tela um Menu que permita o usuário escolher as seguintes operações: +, -, /, *.
  - Se um operador inválido for digitado deve ser impresso um erro
  - Se o usuário digitar ! o programa deve ser finalizado
  - Se o usuário escolher uma das quatro operações, o programa deve ler dois números reais e efetuá-los
  - Faça funções para escrever o Menu, realizar a operação e verificar se o operador é válido
*/

#include<stdio.h>

void escreve_menu() {
    printf("Operações: \n");
    printf("'+' para adição\n");
    printf("'-' para subtração\n");
    printf("'*' para multiplicação\n");
    printf("'/' para divisão\n");
    printf("'!' para finalizar o programa\n");
}

int valida_operacao(char operacao) {
    switch(operacao) {
        case '+':
            return 1;
        case '-':
            return 1;
        case '*':
            return 1;
        case '/':
            return 1;
        default:
            return 0;
    }
}

float soma(float a, float b) {
    return a + b;
}

float divisao(float a, float b) {
    return a / b;
}

float subtracao(float a, float b) {
    return a - b;
}

float multiplicacao(float a, float b) {
    return a*b;
}

void main() {
    
    float valor1, valor2, resultado;
    char operacao;

    escreve_menu();
    printf("Digite a operação: ");
    scanf(" %c", &operacao);

    while(operacao != '!') {
        if(valida_operacao(operacao)) {
            printf("Digite o primeiro número real: ");
            scanf("%f", &valor1);
            printf("Digite o segundo número real: ");
            scanf("%f", &valor2);

            switch(operacao) {
                case '+':
                    resultado = soma(valor1, valor2);
                    printf("%f %c %f = %f\n\n", valor1, operacao, valor2, resultado);
                    break;
                case '-':
                    resultado = subtracao(valor1, valor2);
                    printf("%f %c %f = %f\n\n", valor1, operacao, valor2, resultado);
                    break;
                case '*':
                    resultado = multiplicacao(valor1, valor2);
                    printf("%f %c %f = %f\n\n", valor1, operacao, valor2, resultado);
                    break;
                case '/':
                    if(valor2 != 0) {
                        resultado = divisao(valor1, valor2);
                        printf("%f %c %f = %f\n\n", valor1, operacao, valor2, resultado);
                    }
                    else {
                        printf("Não é possível dividir por zero\n\n");
                    }
                    break;
            }
        }
        else {
            printf("Operação inválida\n\n");
        }

        escreve_menu();
        printf("Digite a operação: ");
        scanf(" %c", &operacao);
    }
}