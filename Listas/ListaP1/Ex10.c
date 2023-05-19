/*
Faça um programa que leia um conjunto de dados sobre os N alunos de uma turma. Para cada aluno será lido o seu nome, suas 4 notas e seu ano de 
ingresso na faculdade. O programa deve calcular a média de cada aluno e indicar o nome do aluno que obteve a maior média (é possível que 
existam vários alunos). Deve ser usado um vetor de estruturas.
*/

#include<stdio.h>
#include<stdlib.h>

struct aluno {
    char nome[100];
    float nota1, nota2, nota3, nota4, media;
    int ano_ingresso;
};
typedef struct aluno Aluno;

int main(void) {

    Aluno *alunos;
    int N;
    float maior_media = -1;

    printf("Digite o número de alunos: ");
    scanf("%d", &N);

    alunos = (Aluno*)malloc(sizeof(Aluno)*N);

    for(int i=0; i<N; i++) {
        printf("Digite o nome do aluno: ");
        scanf(" %99[^\n]s", alunos[i].nome);
        printf("Digite a primeira nota do aluno: ");
        scanf("%f", &alunos[i].nota1);
        printf("Digite a segunda nota do aluno: ");
        scanf("%f", &alunos[i].nota2);
        printf("Digite a terceira nota do aluno: ");
        scanf("%f", &alunos[i].nota3);
        printf("Digite a quarta nota do aluno: ");
        scanf("%f", &alunos[i].nota4);
        printf("Digite o ano de ingresso do aluno: ");
        scanf("%f", &alunos[i].ano_ingresso);

        alunos[i].media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3 + alunos[i].nota4)/4;
        if(alunos[i].media>maior_media) {
            maior_media = alunos[i].media;
        }
    }

    printf("Aluno(s) com a maior média: \n");
        for(int i=0; i<N; i++) {
            if(alunos[i].media == maior_media) {
                printf("%s\n", alunos[i].nome);
            }
        }

    return 0;
}