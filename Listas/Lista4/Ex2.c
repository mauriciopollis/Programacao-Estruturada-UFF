/*
Foi feita uma estatística em 20 estados brasileiros para coletar dados sobre acidentes de trânsito. Foram informados dados como: a sigla do 
estado, o número de veículos, e a quantidade de acidentes. Faça um programa que calcule e mostre:
    • a sigla do estado que possui maior número de carros;
    • considerando o número de acidentes e o número de carros que circulam no estado, informar o estado com menor índice de acidentes de trânsito;
    • o número total de acidentes de trânsito computado.
*/

#include<stdio.h>
#include<string.h>

#define NUM_ESTADOS 20

struct estado {

    char sigla[3];
    int numero_veiculos, quantidade_acidentes;

};
typedef struct estado Estado;

int main() {

    Estado vetor_estados[NUM_ESTADOS];
    float menor_indice_acidentes;
    int total_acidentes = 0, maior_numero_carros = 0;
    char sigla_mais_carros[3], sigla_menor_indice[3];

    for(int i=0; i<NUM_ESTADOS; i++) {
        printf("Digite a sigla do estado: ");
        scanf(" %s", vetor_estados[i].sigla);
        printf("Digite o número de veículos desse estado: ");
        scanf("%d", &vetor_estados[i].numero_veiculos);
        printf("Digite o número de acidentes desse estado: ");
        scanf("%d", &vetor_estados[i].quantidade_acidentes);
    }

    menor_indice_acidentes = (float)vetor_estados[0].quantidade_acidentes/vetor_estados[0].numero_veiculos;

    for(int i=0; i<NUM_ESTADOS; i++) {
        if(vetor_estados[i].numero_veiculos>maior_numero_carros) {
            strcpy(sigla_mais_carros, vetor_estados[i].sigla);
        }
        float indice_acidentes = (float)vetor_estados[i].quantidade_acidentes/vetor_estados[i].numero_veiculos;
        if(indice_acidentes<menor_indice_acidentes) {
            strcpy(sigla_menor_indice, vetor_estados[i].sigla);
        }
        total_acidentes += vetor_estados[i].quantidade_acidentes;
    }

    printf("O estado com maior número de carros é: %s\n", sigla_mais_carros);
    printf("O estado com o menor índice de acidentes é: %s\n", sigla_menor_indice);
    printf("O número total de acidentes é: %d\n", total_acidentes);

    return 0;
}