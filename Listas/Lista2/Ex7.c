/*
Em um cinema, cada espectador respondeu a uma pesquisa, que perguntava a sua idade e a sua opinião em relação a um filme 
(O – Ótimo; B – Bom; R – Regular; P – Péssimo). Faça um programa que informe a média de idade das pessoas que responderam o questionário e 
a porcentagem dada para cada uma das respostas. O programa deve terminar quando o usuário digitar uma idade negativa.
*/

#include<stdio.h>

int main() {

    int idade, contador_pessoas = 0;
    char opiniao;
    float media_idade = 0, porcentagem_otimo = 0, porcentagem_bom = 0, porcentagem_regular = 0, porcentagem_pessimo = 0;

    printf("Idade: ");
    scanf("%d", &idade);

    while(idade>=0) {
        printf("Opinião: ");
        scanf(" %c", &opiniao);
        media_idade += idade;
        contador_pessoas += 1;
        switch(opiniao) {
            case 'o':
                porcentagem_otimo += 1;
                break;
            case 'b':
                porcentagem_bom += 1;
                break;
            case 'r':
                porcentagem_regular += 1;
                break;
            case 'p':
                porcentagem_pessimo += 1;
                break;
            default:
                break;
        }
        printf("Idade: ");
        scanf("%d", &idade);
    }

    porcentagem_otimo = (float)porcentagem_otimo/contador_pessoas;
    porcentagem_bom = (float)porcentagem_bom/contador_pessoas;
    porcentagem_regular = (float)porcentagem_regular/contador_pessoas;
    porcentagem_pessimo = (float)porcentagem_pessimo/contador_pessoas;
    media_idade = (float)media_idade/contador_pessoas;
    
    printf("Média de idades: %f\n", media_idade);
    printf("Porcentagem ótimo: %f\n", porcentagem_otimo);
    printf("Porcentagem bom: %f\n", porcentagem_bom);
    printf("Porcentagem regular: %f\n", porcentagem_regular);
    printf("Porcentagem péssimo: %f\n", porcentagem_pessimo);

    return 0;
}