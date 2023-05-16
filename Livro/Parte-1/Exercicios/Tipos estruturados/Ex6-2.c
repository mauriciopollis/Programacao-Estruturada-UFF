/*
Considere uma estrutura para representar um vetor no espaço 3D e implemente uma função que calcule o produto escalar de dois vetores. Essa 
função deve obedecer ao protótipo:

float dot(Vetor *v1, Vetor *v2);
*/

#include<stdio.h>

struct vetor3D {
    float x;
    float y;
    float z;
};
typedef struct vetor3D Vetor;

float dot(Vetor *v1, Vetor *v2) {
    float produto_escalar = v1->x * v2->x + v1->y * v2->y + v1->z * v2->z;
    return produto_escalar;
}

int main() {

    Vetor vetor1, vetor2;

    printf("Digite as componentes do primeiro vetor: ");
    scanf("%f %f %f", &vetor1.x, &vetor1.y, &vetor1.z);
    printf("Digite as componentes do segundo vetor: ");
    scanf("%f %f %f", &vetor2.x, &vetor2.y, &vetor2.z);

    printf("O produto escalar entre esses vetores é: %f", dot(&vetor1, &vetor2));

    return 0;
}