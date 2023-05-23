/*
Em uma competição de ginástica olímpica a nota é determinada por um painel de seis juízes. Cada um dos juízes atribui uma nota entre zero e dez 
para o desempenho do atleta. Para calcular a nota final, a nota mais alta e a nota mais baixa são descartadas e é calculada a média das quatro 
restantes. Escreva um programa que leia 6 notas entre zero e dez e calcule a média, de cada um dos 30 atletas, após o descarte da maior e da menor 
nota. Faça uma função que receba as seis notas lidas e que retorne para o programa principal a média calculada.
*/

#include<stdio.h>

float media(float nota1, float nota2, float nota3, float nota4, float nota5, float nota6) {

    float notas_atleta[6] = {nota1, nota2, nota3, nota4, nota5, nota6};
    float maior = 0, menor = 11, media;

    for(int i=0; i<6; i++) {
            if(notas_atleta[i]>maior) {
                maior = notas_atleta[i];
            }
            if(notas_atleta[i]<menor) {
                menor = notas_atleta[i];
            }
            media += notas_atleta[i];
        }

        media = (media - maior - menor)/4;

        return media;
}

int main(void) {

    float media_atletas[30];
    float nota1, nota2, nota3, nota4, nota5, nota6;

    for(int i=0; i<30; i++) {
        printf("Digite as seis notas do atleta %d: ", i+1);
        scanf("%f %f %f %f %f %f", &nota1, &nota2, &nota3, &nota4, &nota5, &nota6);

        media_atletas[i] = media(nota1, nota2, nota3, nota4, nota5, nota6);
    }

    return 0;
}