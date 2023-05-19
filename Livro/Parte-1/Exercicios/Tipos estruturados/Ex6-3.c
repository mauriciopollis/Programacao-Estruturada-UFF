/*
Considere as declarações a seguir para representar o cadastro de alunos de uma disciplina e implemente uma função que imprima o número de 
matrícula, o nome, a turma e a média de todos os alunos aprovados na disciplina

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};
typedef struct aluno Aluno;

Assuma que o critério para aprovação é dado pela média das três provas (p1, p2, p3). A função recebe como parâmetros o número de alunos e um 
vetor de ponteiros para os dados dos alunos. Essa função deve obedecer ao protótipo:

void imprime_aprovados(int n, Aluno **turmas);
*/

#include<stdio.h>
#define MEDIA_PARA_APROVACAO 6.0F

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};
typedef struct aluno Aluno;

void imprime_aprovados(int n, Aluno **turmas) {

    for(int i=0; i<n; i++) {
        float media = (turmas[i]->p1 + turmas[i]->p2 + turmas[i]->p3)/3;
        if(media>MEDIA_PARA_APROVACAO) {
            printf("Aluno aprovado: \n");
            printf("    Nome: %s\n", turmas[i]->nome);
            printf("    Turma: %c\n", turmas[i]->turma);
            printf("    Média: %f\n\n", media);
        }
    }
}

int main() {
    return 0;
}