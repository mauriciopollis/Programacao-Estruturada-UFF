/*
Faça um programa que apure os votos de uma eleição presidencial onde concorreram três candidatos. Os votos podem ser 1, 2, 3 e 4 e devem ser 
contados de acordo com a tabela abaixo:
1 - João da Silva
2 - José Ramalho
3 - Maria de Mattos
4 - Voto em Branco
Outros - Voto Nulo

Calcule e escreva o total de votos de cada candidato, o total de votos brancos, o total de votos nulos e o nome do candidato que recebeu mais 
votos.
*/

#include<stdio.h>

void imprime_menu() {

    printf("1 - João da Silva\n");
    printf("2 - José Ramalho\n");
    printf("3 - Maria de Mattos\n");
    printf("4 - Voto em Branco\n");
    printf("Outros - Voto Nulo\n");

}

void imprime_resultado(int voto1, int voto2, int voto3, int voto_branco, int voto_nulo) {
    printf("João da Silva: %d\n", voto1);
    printf("José Ramalho: %d\n", voto2);
    printf("Maria de Mattos: %d\n", voto3);
    printf("Votos em branco: %d\n", voto_branco);
    printf("Votos nulos: %d\n", voto_nulo);
}

int main() {

    int votos_joao = 0, votos_jose = 0, votos_maria = 0, votos_branco = 0, votos_nulo = 0, total_votantes, voto;

    printf("Total de votantes: ");
    scanf("%d", &total_votantes);

    for(int i=1; i<=total_votantes; i++) {
        imprime_menu();
        printf("Digite o voto: ");
        scanf("%d", &voto);

        switch(voto) {
            case 1:
                votos_joao += 1;
                break;
            case 2:
                votos_jose += 1;
                break;
            case 3:
                votos_maria += 1;
                break;
            case 4:
                votos_branco += 1;
                break;
            default:
                votos_nulo += 1;
                break;
        }
    }

    imprime_resultado(votos_joao, votos_jose, votos_maria, votos_branco, votos_nulo);

    if((votos_joao>votos_jose) && (votos_joao>votos_maria)) {
        printf("João da Silva foi eleito");
    }
    if((votos_jose>votos_joao) && (votos_jose>votos_maria)) {
        printf("José Ramalho foi eleito");
    }
    if((votos_maria>votos_jose) && (votos_maria>votos_joao)) {
        printf("Maria de Mattos foi eleita");
    }
    else {
        printf("Empate");
    }


    return 0;
}