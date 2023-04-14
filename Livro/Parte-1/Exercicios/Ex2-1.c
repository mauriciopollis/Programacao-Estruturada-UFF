/*
Implemente uma função que calcule as raízes de uma equação de segundo grau, do tipo ax² + bx + c = 0. Essa função deve obeceder ao
protótipo:

int raizes(float a, float b, float c, float *x1, float *x2);

Essa função deve ter como valor de retorno o número de raízes reais e distintas da equação. Se existirem raízes reais, seus valores
devem ser armazenados nas variáveis apontadas por x1 e x2.
*/

#include<stdio.h>
#include<math.h>

int raizes(float a, float b, float c, float *x1, float *x2) {
    
    float delta;

    delta = b * b - 4 * a * c;

    if(delta < 0) {
        return 0;
    }
    else {
        if(delta == 0) {
            *x1 = -b/(2*a);
            *x2 = -b/(2*a);
            return 1;
        }
        else {
            *x1 = (-b + sqrt(delta))/(2*a);
            *x2 = (-b - sqrt(delta))/(2*a);
            return 2;
        }
    }
}

int main(void) {

    float a, b, c, x1, x2;

    printf("Insira os valores de a, b e c para a equação ax² + bx + c = 0: ");
    scanf("%f %f %f", &a, &b, &c);

    if(raizes(a, b, c, &x1, &x2) != 0) {
        printf("As raízes da equação %fx² + %fx + %f = 0 são %f e %f", a, b, c, x1, x2);
    }
    else {
        printf("A equação %fx² + %fx + %f = 0 não possui raízes reais", a, b, c);
    }

    return 0;
}