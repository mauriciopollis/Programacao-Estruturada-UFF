/*
Faça um programa que leia dois números inteiros A e B e que calcule o quociente da divisão de A por B. O programa deve conter uma função 
recursiva que retorne este valor, entretanto para este cálculo não deve ser usada nenhuma operação de divisão. Lembre-se que a divisão é 
conjunto de subtrações sucessivas.
*/

#include<stdio.h>

int quociente(int dividendo, int divisor) {

    if(divisor>dividendo) {
        return 0;
    }
    else {
        return 1 + quociente(dividendo-divisor, divisor);
    }
}

int main(void) {

    int A, B;

    printf("Digite o dividendo e o divisor: ");
    scanf("%d %d", &A, &B);

    printf("%d / %d = %d", A, B, quociente(A, B));

    return 0;
}