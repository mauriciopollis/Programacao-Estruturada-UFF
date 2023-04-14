/*
Fazer um programa que leia uma temperatura em graus Celsius e transforme para Farenheit. C = 5/9 (F-32)
*/

#include<stdio.h>

int main(void) {

    float temperaturaCelcius, temperaturaFarenheit;

    printf("Digite a temperatura em graus Celcius: ");
    scanf("%f", &temperaturaCelcius);

    temperaturaFarenheit = (9.0/5)*temperaturaCelcius + 32;

    printf("%f graus Celcius equivalem a %f graus Farenheit", temperaturaCelcius, temperaturaFarenheit);

    return 0;
}