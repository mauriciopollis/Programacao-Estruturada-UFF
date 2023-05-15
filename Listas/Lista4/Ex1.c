/*
A prefeitura de uma cidade fez uma pesquisa com seus habitantes, coletando dados sobre salário, idade e número de filhos. Faça um programa 
que leia os dados de 20 pessoas, e que calcule e mostre:
    • a média de salário da população;
    • a média do número de filhos;
    • o maior salário.
*/

#include<stdio.h>
#define NUM_HABITANTES 3

struct habitante {
    
    float salario;
    int idade, numero_de_filhos;
};
typedef struct habitante Habitante;

int main() {

    Habitante vetor_habitantes[NUM_HABITANTES];
    float media_salarial, media_numero_filhos, maior_salario = 0;

    for(int i=1; i<=NUM_HABITANTES; i++) {

        printf("Digite o salário do habitante %d: ", i);
        scanf("%f", &vetor_habitantes[i-1].salario);
        printf("Digite a idade do habitante %d: ", i);
        scanf("%d", &vetor_habitantes[i-1].idade);
        printf("Digite o número de filhos do habitante %d: ", i);
        scanf("%d", &vetor_habitantes[i-1].numero_de_filhos);

    }

    for(int i=0; i<NUM_HABITANTES; i++) {

        media_salarial += vetor_habitantes[i].salario;
        media_numero_filhos += vetor_habitantes[i].numero_de_filhos;
        if(vetor_habitantes[i].salario>maior_salario) {
            maior_salario = vetor_habitantes[i].salario;
        }

    }

    media_salarial = media_salarial/NUM_HABITANTES;
    media_numero_filhos = media_numero_filhos/NUM_HABITANTES;

    printf("A média salarial da população é: %f\n", media_salarial);
    printf("A média do número de filhos da população é: %f\n", media_numero_filhos);
    printf("O maior salário da população é: %f", maior_salario);

    return 0;
}