/*
A prefeitura da “Terra do Nunca” vai realizar suas eleições em urnas eletrônicas, sendo 3 os candidatos à prefeitura 
(Capitão Gancho, Peter Pan e Wendy). Elabore um programa que permita ao usuário informar o número de votos de cada um dos candidatos, 
escrevendo em seguida o resultado da eleição. Sabe-se que, caso um dos candidatos tenha mais de 50% dos votos ele é eleito sem 
necessidade de segundo turno. Na “Terra do Nunca” não existem votos nulos ou brancos.
*/

#include<stdio.h>

int main(void) {

    int votosCapitaoGancho, votosPeterPan, votosWendy, totalVotos;
    float percentualCapitaoGancho, percentualPeterPan, percentualWendy;

    printf("Digite o número de votos do candidato Capitão Gancho: ");
    scanf("%d", &votosCapitaoGancho);
    printf("Digite o número de votos do candidato Peter Pan: ");
    scanf("%d", &votosPeterPan);
    printf("Digite o número de votos do candidato Wendy: ");
    scanf("%d", &votosWendy);

    totalVotos = votosCapitaoGancho + votosPeterPan + votosWendy;
    
    percentualCapitaoGancho = votosCapitaoGancho*100.0/totalVotos;
    percentualPeterPan = votosPeterPan*100.0/totalVotos;
    percentualWendy = votosWendy*100.0/totalVotos;

    if(percentualCapitaoGancho>50) {
        printf("O candidato Capitão Gancho foi eleito com %.2f%% dos votos\n", percentualCapitaoGancho);
        printf("O candidato Peter Pan obteve %.2f%% dos votos\n", percentualPeterPan);
        printf("O canditado Wendy obteve %.2f%% dos votos", percentualWendy);
    }
    else {
        if(percentualPeterPan>50) {
        printf("O candidato Peter Pan foi eleito com %.2f%% dos votos\n", percentualPeterPan);
        printf("O candidato Capitão Gancho obteve %.2f%% dos votos\n", percentualCapitaoGancho);
        printf("O canditado Wendy obteve %.2f%% dos votos", percentualWendy);
        }
        else {
            if(percentualWendy>50) {
                printf("O candidato Wendy foi eleito com %.2f%% dos votos\n", percentualWendy);
                printf("O candidato Peter Pan obteve %.2f%% dos votos\n", percentualPeterPan);
                printf("O canditado Capitão Gancho obteve %.2f%% dos votos", percentualCapitaoGancho);
            }
            else {
                printf("O candidato Capitão Gancho obteve %.2f%% dos votos\n", percentualCapitaoGancho);
                printf("O candidato Peter Pan obteve %.2f%% dos votos\n", percentualPeterPan);
                printf("O canditado Wendy obteve %.2f%% dos votos\n", percentualWendy);
                printf("Nenhum candidato alcançou mais de 50%% dos votos. É necessário segundo turno\n");
            }
        }
    }

    return 0;
}