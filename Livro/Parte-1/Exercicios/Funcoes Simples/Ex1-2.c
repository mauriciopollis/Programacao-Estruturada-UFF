/*
Implemente uma função para testar se um número inteiro é primo ou não. Essa função deve obedecer ao protótipo a seguir e ter como
valor de retorno 1 se n for primo e 0 caso contrário.

int primo (int n);
*/

#include<stdio.h>

int primo(int n) {

    if(n == 1 || (n % 2 == 0 && n != 2)) {
        return 0;
    }

    for(int i = 3; i < n; i = i + 2) {
        if(n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main(void) {

    int numero;

    printf("Insira um número inteiro: ");
    scanf("%d", &numero);

    if(primo(numero)) {
        printf("%d é primo", numero);
    }
    else {
        printf("%d não é primo", numero);
    }

    return 0;
}