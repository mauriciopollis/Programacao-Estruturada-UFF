/*
Escreva uma função que receba duas structs do tipo dma, cada uma representando uma data válida, e devolva o número de dias que decorreram 
entre as duas datas.

struct dma {
    int dia;
    int mes;
    int ano;
};
*/

#include<stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};
typedef struct dma Dma;

int dias_entre_dmas(Dma *data1, Dma* data2) {

    int data1_absoluta, data2_absoluta;

    data1_absoluta = data1->dia + (data1->mes)*30 + (data1->ano)*365;
    data2_absoluta = data2->dia + (data2->mes)*30 + (data2->ano)*365;

    return data2_absoluta - data1_absoluta;
}

int main() {

    Dma data1;
    Dma data2;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);
    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    printf("A quantidade de dias entre essas datas é: %d", dias_entre_dmas(&data1, &data2));

    return 0;
}