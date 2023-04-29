/*
Implemente uma função que indique se um ponto (x, y) está localizado dentro ou fora de um retângulo. O retângulo é definido por 
seus vértices inferior esquerdo (x0, y0) e superior direito (x1, y1). A função deve ter como valor de retorno 1, se o ponto estiver 
dentro do retângulo, e 0 caso contrário, obedecendo ao protótipo:

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y);
*/

#include<stdio.h>

int dentro_ret(int x0, int y0, int x1, int y1, int x, int y) {
    // checar se a coordenada x está entre x0 e x1
        // se não, retornar 0
        // se sim, checar se a coordenada y está entre y0 e y1
            // se não, retornar 0
            // se sim, retornar 1
    
    if(!(x0 <= x && x <= x1)) {
        return 0;
    }
    else {
        if(!(y0 <= y && y <= y1)) {
            return 0;
        }
        else {
            return 1;
        }
    }
}

int main(void) {

    int x0, y0, x1, y1, x, y;

    printf("Insira as coordenadas x e y do vértice inferior esquerdo do retângulo: ");
    scanf("%d %d", &x0, &y0);

    printf("Insira as coordenadas x e y do vértice superior direito do retângulo: ");
    scanf("%d %d", &x1, &y1);

    printf("Insira as coordenadas x e y do ponto: ");
    scanf("%d %d", &x, &y);

    if(dentro_ret(x0, y0, x1, y1, x, y) == 0) {
        printf("O ponto não está dentro do retângulo");
    }
    else {
        printf("O ponto está dentro do retângulo");
    }

    return 0;
}