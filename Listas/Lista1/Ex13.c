/*
Considere as viagens que são realizadas entre as cidades de Metrópolis e Gotham City. Sabendo que todas as viagens entre estas cidades 
são feitas sempre dentro de um mesmo dia, elabore um programa que permita que um usuário informe o momento exato (hora, minuto, segundo) 
da sua partida e da sua chegada, e que calcule e escreva o tempo total da viagem (também em horas, minutos e segundos).
*/

#include<stdio.h>

int main(void) {

    int horasPartida, minutosPartida, segundosPartida, horasChegada, minutosChegada, segundosChegada, horasDuracao, minutosDuracao, segundosDuracao;

    printf("Digite o horário de partida (hh:mm:ss): ");
    scanf("%d:%d:%d", &horasPartida, &minutosPartida, &segundosPartida);
    printf("Digite o horário de chegada (hh:mm:ss): ");
    scanf("%d:%d:%d", &horasChegada, &minutosChegada, &segundosChegada);

    horasDuracao = horasChegada - horasPartida;
    minutosDuracao = minutosChegada - minutosPartida;
    segundosDuracao = segundosChegada - segundosPartida;

    if(minutosDuracao<0) {
        horasDuracao -= 1;
        minutosDuracao += 60;
    }

    if(segundosDuracao<0) {
        minutosDuracao -= 1;
        segundosDuracao += 60;
    }

    if(horasDuracao<0 || minutosDuracao<0 || segundosDuracao<0) {
        printf("O horário de chegada é anterior ao horário de saída. Horários inválidos");
    }
    else {
        printf("A viagem durou %d horas, %d minutos e %d segundos", horasDuracao, minutosDuracao, segundosDuracao);
    }
    return 0;
}