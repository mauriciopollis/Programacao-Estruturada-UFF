/*
Considere as declarações do tipo Aluno do exercício anterior e implemente uma função que tenha como valor de retorno a média final obtida 
pelos alunos de uma determinada turma. A nota final de cada aluno é dada pela média das três provas.

float media_turma(int n, Aluno **turmas, char turma);
*/

#include<stdio.h>

struct aluno {
    char nome[81];
    char matricula[8];
    char turma;
    float p1;
    float p2;
    float p3;
};
typedef struct aluno Aluno;

float media_turma(int n, Aluno **turmas, char turma) {

    float media = 0;
    int num_alunos_turma = 0;

    for(int i=0; i<n; i++) {
        if(turmas[i]->turma == turma) {
            num_alunos_turma += 1;
            media += (turmas[i]->p1 + turmas[i]->p2 + turmas[i]->p3)/3;
        }
    }
    media = media/num_alunos_turma;

    return media;
}

int main() {
    return 0;
}