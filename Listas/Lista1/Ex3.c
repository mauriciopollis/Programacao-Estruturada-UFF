/*
Faça um programa que leia a idade de um nadador e que calcule e mostre a sua categoria seguindo as regras:
• Categoria Baby: até 4 anos
• Categoria Infantil: 5 – 10 anos
• Categoria Juvenil: 11 – 17 anos
• Categoria Máster: A partir de 18 anos
*/

#include<stdio.h>

int main(void) {

    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if(idade<=4) {
        printf("Categoria Baby");
    }
    else {
        if(idade<=10) {
            printf("Categoria Infantil");
        }
        else {
            if(idade<=17) {
                printf("Categoria Juvenil");
            }
            else {
                printf("Categoria Máster");
            }
        }
    }
    return 0;
}