/*
Foi realizada uma pesquisa sobre as características físicas de 50 habitantes de uma certa região. De cada habitante foram coletados os 
seguintes dados: altura, idade e cor dos olhos (A-azuis, V-verdes ou C-castanhos). Faça um programa que leia estes dados e que calcule e mostre:
    • a média das idades;
    • a maior e a menor altura;
    • a quantidade de pessoas de olhos castanhos que possuam idade acima da média calculada.
*/

#include<stdio.h>

#define NUM_HABITANTES 50

struct habitante {
    float altura;
    int idade;
    char cor_dos_olhos;
};
typedef struct habitante Habitante;

int main() {

    float media_idade = 0, maior_altura, menor_altura;
    int quantidade_castanhos_idade_acima_media = 0;

    Habitante vet_habitantes[NUM_HABITANTES];

    for(int i=0; i<NUM_HABITANTES; i++) {
        printf("Digite a altura do habitante %d: ", i+1);
        scanf("%f", &vet_habitantes[i].altura);
        printf("Digite a idade do habitante %d: ", i+1);
        scanf("%d", &vet_habitantes[i].idade);
        printf("Digite a cor dos olhos do habitante %d (A-azuis, V-verdes ou C-castanhos): ", i+1);
        scanf(" %c", &vet_habitantes[i].cor_dos_olhos);
    }

    maior_altura = vet_habitantes[0].altura;
    menor_altura = vet_habitantes[0].altura;

    for(int i=0; i<NUM_HABITANTES; i++) {
        media_idade += (float)vet_habitantes[i].idade;
        if(vet_habitantes[i].altura>maior_altura) {
            maior_altura = vet_habitantes[i].altura;
        }
        if(vet_habitantes[i].altura<menor_altura) {
            menor_altura = vet_habitantes[i].altura;
        }
    }

    media_idade = media_idade/NUM_HABITANTES;

    for(int i=0; i<NUM_HABITANTES; i++) {
        if(vet_habitantes[i].cor_dos_olhos == 'C' && vet_habitantes[i].idade>media_idade) {
            quantidade_castanhos_idade_acima_media += 1;
        }
    }

    printf("Média de idade da população: %f\n", media_idade);
    printf("Maior altura: %f\n", maior_altura);
    printf("Menor altura: %f\n", menor_altura);
    printf("Quantidade de pessoas de olhos castanhos e com idade acima da média: %d", quantidade_castanhos_idade_acima_media);

    return 0;
}