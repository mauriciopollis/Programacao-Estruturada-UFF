/*
Faça um programa que leia os N salários dos funcionários de uma empresa. Calcule a média salarial da empresa e escreva a quantidade de 
funcionários que possuem salário acima da média.
*/

#include<stdio.h>
#include<stdlib.h>

int main() {

    int numero_funcionarios, quantidade_acima_media = 0;
    float media_salarial = 0;
    float *vetor_salarios;

    printf("Digite o número de funcionários da empresa: ");
    scanf("%d", &numero_funcionarios);

    vetor_salarios = (float*)malloc(numero_funcionarios*sizeof(float));

    for(int i=0; i<numero_funcionarios; i++) {
        printf("Digite o salário: ");
        scanf("%f", &vetor_salarios[i]);
    }

    for(int i=0; i<numero_funcionarios; i++) {
        media_salarial += vetor_salarios[i];
    }
    media_salarial = media_salarial/numero_funcionarios;

    for(int i=0; i<numero_funcionarios; i++) {
        if(vetor_salarios[i]>media_salarial) {
            quantidade_acima_media += 1;
        }
    }

    printf("Quantidade de funcionários com salário acima da média: %d", quantidade_acima_media);

    return 0;
}
