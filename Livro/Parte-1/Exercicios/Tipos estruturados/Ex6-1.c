/*
Considere um estrutura para representar um ponto no espaço 2D e implemente uma função que indique se um dade ponto p está localizado dentro 
ou fora de um retângulo. O retângulo é definido por seus vértices inferior esquerdo v1 e superior direito v2. A função deve retornar 1 caso 
o ponto esteja localizado dentro do retângulo, e 0 caso contrário. Essa função deve obedecer ao protótipo:

int dentroRet(Ponto *v1, Ponto *v2, Ponto *p);
*/

#include<stdio.h>

struct ponto {
    float x;
    float y;
};
typedef struct ponto Ponto;

int dentroRet(Ponto *v1, Ponto *v2, Ponto *p) {

    if((v1->x<p->x) && (p->x<v2->x) && (v1->y<p->y) && (p->y<v2->y)) {
        return 1;
    }
    else {
        return 0;
    }
}

int main() {

    Ponto ponto, vertice_inf_esq, vertice_sup_dir;

    printf("Digite as coordenadas do ponto: ");
    scanf("%f %f", &ponto.x, &ponto.y);
    printf("Digite as coordenadas do vértice inferior esquerdo do retângulo: ");
    scanf("%f %f", &vertice_inf_esq.x, &vertice_inf_esq.y);
    printf("Digite as coordenadas do vértice superior direito do retângulo: ");
    scanf("%f %f", &vertice_sup_dir.x, &vertice_sup_dir.y);

    if(dentroRet(&vertice_inf_esq, &vertice_sup_dir, &ponto)) {
        printf("O ponto está dentro do retângulo");
    }
    else {
        printf("O ponto não está dentro do retângulo");
    }

    return 0;
}