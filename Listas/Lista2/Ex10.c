/*
A prefeitura de uma cidade resolveu fazer uma pesquisa entre os seus trabalhadores. Para isso ela coletou alguns dados como idade, sexo (M ou F) 
e salário. Faça um programa que leia estes dados e que escreva ao final:
    • a média salarial dos homens
    • a média salarial das mulheres
    • o maior salário encontrado entre as pessoas abaixo de 30 anos.
    
Obs: O final da leitura de dados é marcado por uma idade negativa.
*/

#include<stdio.h>

int main() {

    int idade, contador_homens = 0, contador_mulheres = 0;
    char sexo;
    float salario, media_salarial_homens = 0, media_salarial_mulheres = 0, maior_salario_abaixo_30 = 0;

    printf("Idade: ");
    scanf("%d", &idade);

    while(idade>=0) {
        printf("Sexo (m ou f): ");
        scanf(" %c", &sexo);
        printf("Salário: ");
        scanf("%f", &salario);
        if(sexo == 'm') {
            contador_homens += 1;
            media_salarial_homens += salario;
        }
        else {
            if(sexo == 'f') {
                contador_mulheres += 1;
                media_salarial_mulheres += salario;
            }
        }

        if(idade<30) {
            if(salario>maior_salario_abaixo_30) {
                maior_salario_abaixo_30 = salario;
            }
        }

        printf("Idade: ");
        scanf("%d", &idade);
    }

    media_salarial_homens = media_salarial_homens/contador_homens;
    media_salarial_mulheres = media_salarial_mulheres/contador_mulheres;

    printf("Média salarial dos homens: %f\n", media_salarial_homens);
    printf("Média salarial das mulheres: %f\n", media_salarial_mulheres);
    printf("Maior salário abaixo de 30 anos: %f", maior_salario_abaixo_30);

    return 0;
}