/*
Implemente duas versões de uma função, seguindo as diferentes estratégias para alocar matrizes, que determine se uma matriz é simétrica
quadrada ou não.


As duas estratégias às quais o enunciado se refere são: 
    1-a representação da matriz por um vetor simples;
        Alocar os elementos de cada linha da matriz sequencialmente em um vetor. Portanto, se queremos acessar o elemento mat[i][j] de uma
        matriz que está representada em um vetor simples, devemos acessar o elemento vet[i*n+j] do vetor, onde n é o número de colunas da
        matriz
    2-a representação da matriz por um vetor de ponteiros;
        Nessa representação a matriz é representada por um vetor contendo ponteiros que apontam para os primeiros elementos de suas respectivas
        linhas. Nessa representação, mat[i] acessa o ponteiro correspondente ao primeiro elemento da linha i, e mat[i][j] acessa o elemento da
        posição ij da matriz.
*/

#include<stdio.h>
#include<stdlib.h>

void menu() {
    printf("Por qual método você quer verificar se a matriz é simétrica quadrada?\n");
    printf("[1] - Método do vetor simples\n");
    printf("[2] - Método do vetor de ponteiros\n");
    printf("Escolha o método: ");
}

int verifica_vetor_simples() {
    
    int numLinhas, numColunas;
    float* vetor;

    printf("Insira o número de linhas da matriz: ");
    scanf("%d", &numLinhas);

    printf("Insira o número de colunas da matriz: ");
    scanf("%d", &numColunas);

    if(numLinhas != numColunas) {
        return 0;
    }
    else {
        
        vetor = (float*)malloc(numLinhas*numColunas*sizeof(float));

        for(int i=0; i<numLinhas; i++) {
            for(int j=0; j<numColunas; j++) {
                printf("Insira o elemento mat[%d][%d]: ", i, j);
                scanf("%f", &vetor[i*numColunas + j]);
            }
        }

        for(int i=0; i<numLinhas; i++) {
            for(int j=0; j<numColunas; j++) {
                if(vetor[i*numColunas+j] != vetor[j*numColunas+i]) {
                    return 0;
                }
            }
        }
        return 1;
    }

}

int verifica_vetor_ponteiros() {

    int numLinhas, numColunas;

    printf("Insira o número de linhas da matriz: ");
    scanf("%d", &numLinhas);

    printf("Insira o número de colunas da matriz: ");
    scanf("%d", &numColunas);

    if(numLinhas != numColunas) {
        return 0;
    }
    else {
        
        float** matriz;

        matriz = (float**)malloc(numLinhas*sizeof(float*));
        for(int i=0; i<numLinhas; i++) {
            matriz[i] = (float*)malloc(numColunas*sizeof(float));
        }

        for(int i=0; i<numLinhas; i++) {
            for(int j=0; j<numColunas; j++) {
                printf("Insira o elemento mat[%d][%d]: ", i, j);
                scanf("%f", &matriz[i][j]);
            }
        }

        for(int i=0; i<numLinhas; i++) {
            for(int j=0; j<numColunas; j++) {
                if(matriz[i][j] != matriz[j][i]) {
                    return 0;
                }
            }
        }
        return 1;
    }
}

int main() {

    int metodo, resultado = 2;

    menu();
    scanf("%d", &metodo);

    switch(metodo) {
        case 1:
            resultado = verifica_vetor_simples();
            break;
        case 2:
            resultado = verifica_vetor_ponteiros();
            break;
        default:
            printf("Escolha inválida!\n");
            break;
    }

    switch(resultado) {
        case 0:
            printf("A matriz não é simétrica quadrada");
            break;
        case 1:
            printf("A matriz é simétrica quadrada");
            break;
        default:
            break;
    }
    return 0;
}