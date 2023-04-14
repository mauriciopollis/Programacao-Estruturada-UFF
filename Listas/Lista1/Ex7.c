/*
Faça um programa que leia a quantidade de horas aula dadas por dois professores e o valor por hora recebido por cada um. Mostrar na 
tela qual dos professores tem salário total maior.
*/

#include<stdio.h>

int main(void) {

    float horasProfessor1, horasProfessor2, valorHoraProfessor1, valorHoraProfessor2, salarioProfessor1, salarioProfessor2;

    printf("Digite a quantidade de horas aula dadas pelo professor 1: ");
    scanf("%f", &horasProfessor1);
    printf("Digite a quantidade de horas aula dadas pelo professor 2: ");
    scanf("%f", &horasProfessor2);
    printf("Digite o valor da hora aula do professor 1: ");
    scanf("%f", &valorHoraProfessor1);
    printf("Digite o valor da hora aula do professor 2: ");
    scanf("%f", &valorHoraProfessor2);

    salarioProfessor1 = horasProfessor1*valorHoraProfessor1;
    salarioProfessor2 = horasProfessor2*valorHoraProfessor2;

    if(salarioProfessor1>salarioProfessor2) {
        printf("O professor 1 tem um salário maior");
    }
    else {
        if(salarioProfessor2>salarioProfessor1) {
            printf("O professor 2 tem um salário maior");
        }
        else {
            printf("Os salários dos dois professores são iguais");
        }
    }

    return 0;
}