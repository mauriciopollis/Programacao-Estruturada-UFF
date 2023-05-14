/*
Faça um programa que leia os nomes e as notas dos 60 alunos de uma turma e imprima, após a entrada de todos os dados, os nomes dos alunos 
aprovados. Considere que a média para aprovação é 6,0.
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define NUMERO_ALUNOS 6

int main() {

    char **nomes;
    float vet_medias[60];

    nomes = (char **)malloc(sizeof(char *)*NUMERO_ALUNOS);

    for(int i=0; i<NUMERO_ALUNOS; i++) {

        char nome[100];

        printf("Digite o nome do aluno: ");
        scanf(" %[^\n]s", nome);
        nomes[i] = (char *)malloc(sizeof(char) * (strlen(nome) + 1));
        strcpy(nomes[i], nome);

        printf("Digite a nota desse aluno: ");
        scanf("%f", &vet_medias[i]);
    }

    for(int i=0; i<NUMERO_ALUNOS; i++) {
        if(vet_medias[i]>=6) {
            printf("%s\n", nomes[i]);
        }
    }

    return 0;
}
